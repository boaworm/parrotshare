#ifndef DATASHARE_H
#define DATASHARE_H

#include "permission.h"

#include <QString>
#include <QList>

class DataShare
{
public:
    DataShare();
private:
    QString name;
    QString path;
    QList<Permission> permissions;
};

#endif // DATASHARE_H
