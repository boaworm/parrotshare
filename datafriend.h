#ifndef DATAFRIEND_H
#define DATAFRIEND_H

#include <QString>
#include <QList>

#include "permission.h"

class DataFriend
{
public:
    DataFriend();
    ~DataFriend();

    QString name;
    QString secret;
    QString address;
    QString port;
};

#endif // DATAFRIEND_H
