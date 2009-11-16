#ifndef PARROTSHARE_H
#define PARROTSHARE_H

#include <QtGui/QMainWindow>
#include <QString>
#include <QValidator>

#include "parrotconfiguration.h"
#include "friendlistmodel.h"

namespace Ui
{
    class ParrotShare;
}

class ParrotShare : public QMainWindow
{
    Q_OBJECT

public:
    ParrotShare(QWidget *parent = 0);
    ~ParrotShare();

public slots:
    void updateTabConfiguration();
    void saveConfiguration();
    void loadConfiguration();
    void saveAndQuit();
    void setConfFolderDownload();
    void setConfFolderCache();
    void setConfPort();
    void addFriend();
    void deleteFriend();

private:
    Ui::ParrotShare *ui;
    ParrotConfiguration *pconf;
    QString confPath;
    QValidator *portRangeValidator;
    FriendListModel *flm;
};

#endif // PARROTSHARE_H
