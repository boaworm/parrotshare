#ifndef PARROTCONFIGURATION_H
#define PARROTCONFIGURATION_H

#include "datashare.h"
#include "datafriend.h"
#include "friendlistmodel.h"

#include <QString>
#include <QVector>
#include <QXmlStreamWriter>
#include <QDomDocument>

class ParrotConfiguration
{
public:
    ParrotConfiguration();
    ~ParrotConfiguration();

    void toXml(QXmlStreamWriter *xs);
    bool fromXml(QDomDocument *dd);

    void addFriend(QString friendName);
    void delFriend(QString friendName);

    FriendListModel *flm;

    QString folderDownload;
    QString folderCache;
    QString listenPort;
    QVector<DataShare*>  shares;
    QVector<DataFriend*> friends;
    QVector<Permission*> permissions;
};

#endif // PARROTCONFIGURATION_H
