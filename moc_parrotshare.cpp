/****************************************************************************
** Meta object code from reading C++ file 'parrotshare.h'
**
** Created: Mon Nov 16 20:30:07 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "parrotshare.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parrotshare.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ParrotShare[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      38,   12,   12,   12, 0x0a,
      58,   12,   12,   12, 0x0a,
      78,   12,   12,   12, 0x0a,
      92,   12,   12,   12, 0x0a,
     116,   12,   12,   12, 0x0a,
     137,   12,   12,   12, 0x0a,
     151,   12,   12,   12, 0x0a,
     163,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ParrotShare[] = {
    "ParrotShare\0\0updateTabConfiguration()\0"
    "saveConfiguration()\0loadConfiguration()\0"
    "saveAndQuit()\0setConfFolderDownload()\0"
    "setConfFolderCache()\0setConfPort()\0"
    "addFriend()\0deleteFriend()\0"
};

const QMetaObject ParrotShare::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ParrotShare,
      qt_meta_data_ParrotShare, 0 }
};

const QMetaObject *ParrotShare::metaObject() const
{
    return &staticMetaObject;
}

void *ParrotShare::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ParrotShare))
        return static_cast<void*>(const_cast< ParrotShare*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ParrotShare::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateTabConfiguration(); break;
        case 1: saveConfiguration(); break;
        case 2: loadConfiguration(); break;
        case 3: saveAndQuit(); break;
        case 4: setConfFolderDownload(); break;
        case 5: setConfFolderCache(); break;
        case 6: setConfPort(); break;
        case 7: addFriend(); break;
        case 8: deleteFriend(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
