/********************************************************************************
** Form generated from reading ui file 'parrotshare.ui'
**
** Created: Mon Nov 16 20:30:03 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_PARROTSHARE_H
#define UI_PARROTSHARE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParrotShare
{
public:
    QAction *actionSave_and_Quit;
    QAction *actionQuit;
    QAction *actionSave;
    QAction *actionLoad;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabConfiguration;
    QLabel *confLabelDownloadFolder;
    QLabel *confLabelCacheFolder;
    QLabel *confLabelTcpPort;
    QLineEdit *confFieldDownloadFolder;
    QLineEdit *confFieldCacheFolder;
    QLineEdit *confFieldTcpPort;
    QPushButton *confButtonSetDownloadFolder;
    QPushButton *confButtonSetCacheFolder;
    QWidget *tabFriends;
    QListView *friendsList;
    QPushButton *friendsButtonAdd;
    QPushButton *friendsButtonDelete;
    QLabel *friendsLabelSharedSecret;
    QLabel *friendsLabelAddress;
    QLabel *friendsLabelPort;
    QLabel *friendsLabelStatus;
    QLineEdit *friendsFieldSharedSecret;
    QLineEdit *friendsFieldAddress;
    QLineEdit *friendsFieldTcpPort;
    QLineEdit *friendsFieldStatus1;
    QLineEdit *friendsFieldStatus2;
    QLabel *friendsLabelShares;
    QTableView *friendsTableShares;
    QPushButton *friendsButtonShareRW;
    QPushButton *friendsButtonShareR;
    QPushButton *friendsButtonShareOff;
    QCheckBox *friendsCheckboxConnect;
    QPushButton *friendsButtonPing;
    QWidget *tabShares;
    QListView *sharesList;
    QPushButton *sharesButtonAdd;
    QPushButton *sharesButtonDelete;
    QTableView *sharesTableFriends;
    QPushButton *sharesButtonShareOff;
    QPushButton *sharesButtonShareR;
    QPushButton *sharesButtonShareRW;
    QLabel *sharesLabelFriends;
    QLabel *sharesLabelDir;
    QLineEdit *sharesFieldPath;
    QPushButton *sharesButtonSetPath;
    QWidget *tabUnused;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ParrotShare)
    {
        if (ParrotShare->objectName().isEmpty())
            ParrotShare->setObjectName(QString::fromUtf8("ParrotShare"));
        ParrotShare->resize(600, 400);
        actionSave_and_Quit = new QAction(ParrotShare);
        actionSave_and_Quit->setObjectName(QString::fromUtf8("actionSave_and_Quit"));
        actionQuit = new QAction(ParrotShare);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionSave = new QAction(ParrotShare);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionLoad = new QAction(ParrotShare);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        centralWidget = new QWidget(ParrotShare);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 600, 330));
        tabConfiguration = new QWidget();
        tabConfiguration->setObjectName(QString::fromUtf8("tabConfiguration"));
        confLabelDownloadFolder = new QLabel(tabConfiguration);
        confLabelDownloadFolder->setObjectName(QString::fromUtf8("confLabelDownloadFolder"));
        confLabelDownloadFolder->setGeometry(QRect(20, 20, 140, 20));
        confLabelCacheFolder = new QLabel(tabConfiguration);
        confLabelCacheFolder->setObjectName(QString::fromUtf8("confLabelCacheFolder"));
        confLabelCacheFolder->setGeometry(QRect(20, 50, 140, 20));
        confLabelTcpPort = new QLabel(tabConfiguration);
        confLabelTcpPort->setObjectName(QString::fromUtf8("confLabelTcpPort"));
        confLabelTcpPort->setGeometry(QRect(20, 80, 140, 20));
        confFieldDownloadFolder = new QLineEdit(tabConfiguration);
        confFieldDownloadFolder->setObjectName(QString::fromUtf8("confFieldDownloadFolder"));
        confFieldDownloadFolder->setGeometry(QRect(160, 20, 330, 22));
        confFieldDownloadFolder->setReadOnly(true);
        confFieldCacheFolder = new QLineEdit(tabConfiguration);
        confFieldCacheFolder->setObjectName(QString::fromUtf8("confFieldCacheFolder"));
        confFieldCacheFolder->setGeometry(QRect(160, 50, 330, 22));
        confFieldCacheFolder->setReadOnly(true);
        confFieldTcpPort = new QLineEdit(tabConfiguration);
        confFieldTcpPort->setObjectName(QString::fromUtf8("confFieldTcpPort"));
        confFieldTcpPort->setGeometry(QRect(160, 80, 60, 22));
        confButtonSetDownloadFolder = new QPushButton(tabConfiguration);
        confButtonSetDownloadFolder->setObjectName(QString::fromUtf8("confButtonSetDownloadFolder"));
        confButtonSetDownloadFolder->setGeometry(QRect(500, 20, 40, 22));
        confButtonSetCacheFolder = new QPushButton(tabConfiguration);
        confButtonSetCacheFolder->setObjectName(QString::fromUtf8("confButtonSetCacheFolder"));
        confButtonSetCacheFolder->setGeometry(QRect(500, 50, 40, 22));
        tabWidget->addTab(tabConfiguration, QString());
        tabFriends = new QWidget();
        tabFriends->setObjectName(QString::fromUtf8("tabFriends"));
        friendsList = new QListView(tabFriends);
        friendsList->setObjectName(QString::fromUtf8("friendsList"));
        friendsList->setGeometry(QRect(20, 20, 180, 240));
        friendsButtonAdd = new QPushButton(tabFriends);
        friendsButtonAdd->setObjectName(QString::fromUtf8("friendsButtonAdd"));
        friendsButtonAdd->setGeometry(QRect(20, 270, 80, 22));
        friendsButtonDelete = new QPushButton(tabFriends);
        friendsButtonDelete->setObjectName(QString::fromUtf8("friendsButtonDelete"));
        friendsButtonDelete->setGeometry(QRect(120, 270, 80, 22));
        friendsLabelSharedSecret = new QLabel(tabFriends);
        friendsLabelSharedSecret->setObjectName(QString::fromUtf8("friendsLabelSharedSecret"));
        friendsLabelSharedSecret->setGeometry(QRect(240, 20, 90, 20));
        friendsLabelAddress = new QLabel(tabFriends);
        friendsLabelAddress->setObjectName(QString::fromUtf8("friendsLabelAddress"));
        friendsLabelAddress->setGeometry(QRect(240, 50, 90, 20));
        friendsLabelPort = new QLabel(tabFriends);
        friendsLabelPort->setObjectName(QString::fromUtf8("friendsLabelPort"));
        friendsLabelPort->setGeometry(QRect(240, 80, 90, 20));
        friendsLabelStatus = new QLabel(tabFriends);
        friendsLabelStatus->setObjectName(QString::fromUtf8("friendsLabelStatus"));
        friendsLabelStatus->setGeometry(QRect(240, 110, 90, 20));
        friendsFieldSharedSecret = new QLineEdit(tabFriends);
        friendsFieldSharedSecret->setObjectName(QString::fromUtf8("friendsFieldSharedSecret"));
        friendsFieldSharedSecret->setGeometry(QRect(340, 20, 230, 22));
        friendsFieldAddress = new QLineEdit(tabFriends);
        friendsFieldAddress->setObjectName(QString::fromUtf8("friendsFieldAddress"));
        friendsFieldAddress->setGeometry(QRect(340, 50, 230, 22));
        friendsFieldTcpPort = new QLineEdit(tabFriends);
        friendsFieldTcpPort->setObjectName(QString::fromUtf8("friendsFieldTcpPort"));
        friendsFieldTcpPort->setGeometry(QRect(340, 80, 60, 22));
        friendsFieldStatus1 = new QLineEdit(tabFriends);
        friendsFieldStatus1->setObjectName(QString::fromUtf8("friendsFieldStatus1"));
        friendsFieldStatus1->setGeometry(QRect(340, 110, 230, 22));
        friendsFieldStatus1->setReadOnly(true);
        friendsFieldStatus2 = new QLineEdit(tabFriends);
        friendsFieldStatus2->setObjectName(QString::fromUtf8("friendsFieldStatus2"));
        friendsFieldStatus2->setGeometry(QRect(340, 135, 230, 22));
        friendsFieldStatus2->setReadOnly(true);
        friendsLabelShares = new QLabel(tabFriends);
        friendsLabelShares->setObjectName(QString::fromUtf8("friendsLabelShares"));
        friendsLabelShares->setGeometry(QRect(240, 170, 90, 20));
        friendsTableShares = new QTableView(tabFriends);
        friendsTableShares->setObjectName(QString::fromUtf8("friendsTableShares"));
        friendsTableShares->setGeometry(QRect(340, 170, 230, 125));
        friendsTableShares->setSelectionMode(QAbstractItemView::SingleSelection);
        friendsTableShares->setSelectionBehavior(QAbstractItemView::SelectRows);
        friendsButtonShareRW = new QPushButton(tabFriends);
        friendsButtonShareRW->setObjectName(QString::fromUtf8("friendsButtonShareRW"));
        friendsButtonShareRW->setGeometry(QRect(290, 270, 40, 22));
        friendsButtonShareR = new QPushButton(tabFriends);
        friendsButtonShareR->setObjectName(QString::fromUtf8("friendsButtonShareR"));
        friendsButtonShareR->setGeometry(QRect(290, 240, 40, 22));
        friendsButtonShareOff = new QPushButton(tabFriends);
        friendsButtonShareOff->setObjectName(QString::fromUtf8("friendsButtonShareOff"));
        friendsButtonShareOff->setGeometry(QRect(290, 210, 40, 22));
        friendsCheckboxConnect = new QCheckBox(tabFriends);
        friendsCheckboxConnect->setObjectName(QString::fromUtf8("friendsCheckboxConnect"));
        friendsCheckboxConnect->setGeometry(QRect(500, 80, 71, 21));
        friendsButtonPing = new QPushButton(tabFriends);
        friendsButtonPing->setObjectName(QString::fromUtf8("friendsButtonPing"));
        friendsButtonPing->setGeometry(QRect(430, 80, 50, 22));
        tabWidget->addTab(tabFriends, QString());
        tabShares = new QWidget();
        tabShares->setObjectName(QString::fromUtf8("tabShares"));
        sharesList = new QListView(tabShares);
        sharesList->setObjectName(QString::fromUtf8("sharesList"));
        sharesList->setGeometry(QRect(20, 20, 180, 240));
        sharesButtonAdd = new QPushButton(tabShares);
        sharesButtonAdd->setObjectName(QString::fromUtf8("sharesButtonAdd"));
        sharesButtonAdd->setGeometry(QRect(20, 270, 80, 22));
        sharesButtonDelete = new QPushButton(tabShares);
        sharesButtonDelete->setObjectName(QString::fromUtf8("sharesButtonDelete"));
        sharesButtonDelete->setGeometry(QRect(120, 270, 80, 22));
        sharesTableFriends = new QTableView(tabShares);
        sharesTableFriends->setObjectName(QString::fromUtf8("sharesTableFriends"));
        sharesTableFriends->setGeometry(QRect(340, 170, 230, 125));
        sharesTableFriends->setSelectionMode(QAbstractItemView::SingleSelection);
        sharesTableFriends->setSelectionBehavior(QAbstractItemView::SelectRows);
        sharesButtonShareOff = new QPushButton(tabShares);
        sharesButtonShareOff->setObjectName(QString::fromUtf8("sharesButtonShareOff"));
        sharesButtonShareOff->setGeometry(QRect(290, 210, 40, 22));
        sharesButtonShareR = new QPushButton(tabShares);
        sharesButtonShareR->setObjectName(QString::fromUtf8("sharesButtonShareR"));
        sharesButtonShareR->setGeometry(QRect(290, 240, 40, 22));
        sharesButtonShareRW = new QPushButton(tabShares);
        sharesButtonShareRW->setObjectName(QString::fromUtf8("sharesButtonShareRW"));
        sharesButtonShareRW->setGeometry(QRect(290, 270, 40, 22));
        sharesLabelFriends = new QLabel(tabShares);
        sharesLabelFriends->setObjectName(QString::fromUtf8("sharesLabelFriends"));
        sharesLabelFriends->setGeometry(QRect(240, 170, 90, 20));
        sharesLabelDir = new QLabel(tabShares);
        sharesLabelDir->setObjectName(QString::fromUtf8("sharesLabelDir"));
        sharesLabelDir->setGeometry(QRect(240, 20, 21, 20));
        sharesFieldPath = new QLineEdit(tabShares);
        sharesFieldPath->setObjectName(QString::fromUtf8("sharesFieldPath"));
        sharesFieldPath->setGeometry(QRect(265, 20, 261, 22));
        sharesFieldPath->setReadOnly(true);
        sharesButtonSetPath = new QPushButton(tabShares);
        sharesButtonSetPath->setObjectName(QString::fromUtf8("sharesButtonSetPath"));
        sharesButtonSetPath->setGeometry(QRect(530, 20, 40, 22));
        tabWidget->addTab(tabShares, QString());
        tabUnused = new QWidget();
        tabUnused->setObjectName(QString::fromUtf8("tabUnused"));
        tabWidget->addTab(tabUnused, QString());
        ParrotShare->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ParrotShare);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        ParrotShare->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ParrotShare);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ParrotShare->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ParrotShare);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ParrotShare->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_and_Quit);
        menuFile->addAction(actionQuit);

        retranslateUi(ParrotShare);
        QObject::connect(actionQuit, SIGNAL(triggered()), ParrotShare, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ParrotShare);
    } // setupUi

    void retranslateUi(QMainWindow *ParrotShare)
    {
        ParrotShare->setWindowTitle(QApplication::translate("ParrotShare", "ParrotShare", 0, QApplication::UnicodeUTF8));
        actionSave_and_Quit->setText(QApplication::translate("ParrotShare", "Save and Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("ParrotShare", "Quit", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("ParrotShare", "Save", 0, QApplication::UnicodeUTF8));
        actionLoad->setText(QApplication::translate("ParrotShare", "Load", 0, QApplication::UnicodeUTF8));
        confLabelDownloadFolder->setText(QApplication::translate("ParrotShare", "Download folder", 0, QApplication::UnicodeUTF8));
        confLabelCacheFolder->setText(QApplication::translate("ParrotShare", "Cache folder", 0, QApplication::UnicodeUTF8));
        confLabelTcpPort->setText(QApplication::translate("ParrotShare", "Listen to port", 0, QApplication::UnicodeUTF8));
        confButtonSetDownloadFolder->setText(QApplication::translate("ParrotShare", "Set", 0, QApplication::UnicodeUTF8));
        confButtonSetCacheFolder->setText(QApplication::translate("ParrotShare", "Set", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabConfiguration), QApplication::translate("ParrotShare", "Configuration", 0, QApplication::UnicodeUTF8));
        friendsButtonAdd->setText(QApplication::translate("ParrotShare", "Add", 0, QApplication::UnicodeUTF8));
        friendsButtonDelete->setText(QApplication::translate("ParrotShare", "Delete", 0, QApplication::UnicodeUTF8));
        friendsLabelSharedSecret->setText(QApplication::translate("ParrotShare", "Shared Secret", 0, QApplication::UnicodeUTF8));
        friendsLabelAddress->setText(QApplication::translate("ParrotShare", "Address", 0, QApplication::UnicodeUTF8));
        friendsLabelPort->setText(QApplication::translate("ParrotShare", "Port", 0, QApplication::UnicodeUTF8));
        friendsLabelStatus->setText(QApplication::translate("ParrotShare", "Status", 0, QApplication::UnicodeUTF8));
        friendsLabelShares->setText(QApplication::translate("ParrotShare", "Shares", 0, QApplication::UnicodeUTF8));
        friendsButtonShareRW->setText(QApplication::translate("ParrotShare", "R/W", 0, QApplication::UnicodeUTF8));
        friendsButtonShareR->setText(QApplication::translate("ParrotShare", "R", 0, QApplication::UnicodeUTF8));
        friendsButtonShareOff->setText(QApplication::translate("ParrotShare", "OFF", 0, QApplication::UnicodeUTF8));
        friendsCheckboxConnect->setText(QApplication::translate("ParrotShare", "Connect", 0, QApplication::UnicodeUTF8));
        friendsButtonPing->setText(QApplication::translate("ParrotShare", "Ping", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabFriends), QApplication::translate("ParrotShare", "Friends", 0, QApplication::UnicodeUTF8));
        sharesButtonAdd->setText(QApplication::translate("ParrotShare", "Add", 0, QApplication::UnicodeUTF8));
        sharesButtonDelete->setText(QApplication::translate("ParrotShare", "Delete", 0, QApplication::UnicodeUTF8));
        sharesButtonShareOff->setText(QApplication::translate("ParrotShare", "OFF", 0, QApplication::UnicodeUTF8));
        sharesButtonShareR->setText(QApplication::translate("ParrotShare", "R", 0, QApplication::UnicodeUTF8));
        sharesButtonShareRW->setText(QApplication::translate("ParrotShare", "R/W", 0, QApplication::UnicodeUTF8));
        sharesLabelFriends->setText(QApplication::translate("ParrotShare", "Friends", 0, QApplication::UnicodeUTF8));
        sharesLabelDir->setText(QApplication::translate("ParrotShare", "Dir", 0, QApplication::UnicodeUTF8));
        sharesButtonSetPath->setText(QApplication::translate("ParrotShare", "Set", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabShares), QApplication::translate("ParrotShare", "Shares", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabUnused), QApplication::translate("ParrotShare", "Unused", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("ParrotShare", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ParrotShare: public Ui_ParrotShare {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARROTSHARE_H
