#include "parrotshare.h"
#include "ui_parrotshare.h"

#include <QFileDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QFile>
#include <QDir>
#include <QLineEdit>
#include <QXmlStreamWriter>
#include <QDomDocument>
#include <QTextStream>
#include <QIntValidator>


ParrotShare::ParrotShare(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::ParrotShare)
{
    ui->setupUi(this);
    confPath = QDir::home().dirName();

    pconf = new ParrotConfiguration();
    flm = new FriendListModel(&(pconf->friends));
    pconf->flm = flm;

    ui->friendsList->setModel(flm);

    portRangeValidator = new QIntValidator(1025, 65000, this);
    ui->confFieldTcpPort->setValidator(portRangeValidator);

    updateTabConfiguration();

    QObject::connect(ui->actionSave, SIGNAL(triggered()), this, SLOT(saveConfiguration()));
    QObject::connect(ui->actionLoad, SIGNAL(triggered()), this, SLOT(loadConfiguration()));
    QObject::connect(ui->actionSave_and_Quit, SIGNAL(triggered()), this, SLOT(saveAndQuit()));
    QObject::connect(ui->confButtonSetDownloadFolder, SIGNAL(clicked()), this, SLOT(setConfFolderDownload()));
    QObject::connect(ui->confButtonSetCacheFolder, SIGNAL(clicked()), this, SLOT(setConfFolderCache()));
    QObject::connect(ui->confFieldTcpPort, SIGNAL(editingFinished()), this, SLOT(setConfPort()));

    QObject::connect(ui->friendsButtonAdd, SIGNAL(clicked()), this, SLOT(addFriend()));
    QObject::connect(ui->friendsButtonDelete, SIGNAL(clicked()), this, SLOT(deleteFriend()));
}

ParrotShare::~ParrotShare()
{
    delete ui;
    delete pconf;
    delete portRangeValidator;
}

void ParrotShare::updateTabConfiguration() {
    ui->confFieldDownloadFolder->setText(pconf->folderDownload);
    ui->confFieldCacheFolder->setText(pconf->folderCache);
    ui->confFieldTcpPort->setText(pconf->listenPort);
}

void ParrotShare::saveConfiguration() {
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("Save Parrot configuration to File"),
                                                    confPath,
                                                    tr("Parrot File (*.parrot)"));
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly))
            return;
        QXmlStreamWriter *stream = new QXmlStreamWriter();
        stream->setDevice(&file);
        pconf->toXml(stream);
        file.close();
        delete stream;
        confPath = fileName;
    }
}

void ParrotShare::loadConfiguration() {
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Load Parrot configuration from File"),
                                                    confPath,
                                                    tr("Parrot File (*.parrot)"));
    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly))
            return;
        QDomDocument dd("");
        if( !dd.setContent( &file ) )
            return;
        file.close();

        ParrotConfiguration *newPc = new ParrotConfiguration();
        if (!newPc->fromXml(&dd))
            return;
        delete pconf;
        pconf = newPc;
        updateTabConfiguration();
        confPath = fileName;
    }
}

void ParrotShare::saveAndQuit() {
    saveConfiguration();
    close();
}

void ParrotShare::setConfFolderDownload() {
    QString dir;
    dir = QFileDialog::getExistingDirectory(this,
                                            tr("Set Download folder (where files you download from your friends will gp)"),
                                            "",
                                            QFileDialog::ShowDirsOnly);
    if (!dir.isEmpty()) {
        pconf->folderDownload = dir;
        updateTabConfiguration();
    }
}

void ParrotShare::setConfFolderCache() {
    QString dir;
    dir = QFileDialog::getExistingDirectory(this,
                                            tr("Set Cache folder (where Parrot can store parts of files while they are being downloaded)"),
                                            "",
                                            QFileDialog::ShowDirsOnly);
    if (!dir.isEmpty()) {
        pconf->folderCache = dir;
        updateTabConfiguration();
    }
}

void ParrotShare::setConfPort() {
    pconf->listenPort = ui->confFieldTcpPort->text();

}

void ParrotShare::addFriend() {
    bool ok;
    QString name = QString();
    name = QInputDialog::getText(this,
                                 tr("Name of new friend?"),
                                 tr("Name of new friend?:"),
                                 QLineEdit::Normal,
                                 "",
                                 &ok);
    if (ok && !name.isEmpty()) {
        pconf->addFriend(name);
    }
}

void ParrotShare::deleteFriend() {
    QModelIndexList indexes = ui->friendsList->selectionModel()->selectedIndexes();

    if ( 0 < indexes.size() ) {
        QModelIndex qmi = indexes.first();
        QString remCandidate = qmi.data(Qt::DisplayRole).toString();
        QMessageBox msgBox;
        msgBox.setText(QString("You requested deletion of the Friend; %1").arg(remCandidate));
        msgBox.setInformativeText("Do you really want to delete him/her?");
        msgBox.setStandardButtons(QMessageBox::Discard | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Discard);
        int ret = msgBox.exec();

        if (QMessageBox::Discard == ret) {
            pconf->delFriend(remCandidate);
        }
    }
}

