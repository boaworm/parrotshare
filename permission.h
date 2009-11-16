#ifndef PERMISSION_H
#define PERMISSION_H

// #include "datashare.h"
// #include "datafriend.h"

#include <QString>

class Permission
{
public:
    Permission();
private:
    QString type;
    QString who;
    QString share;
};

#endif // PERMISSION_H
