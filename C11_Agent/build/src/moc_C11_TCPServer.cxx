/****************************************************************************
** Meta object code from reading C++ file 'C11_TCPServer.h'
**
** Created: Tue Jun 4 10:51:48 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/C11_TCPServer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'C11_TCPServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CTcpServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      27,   11,   11,   11, 0x05,
      45,   11,   11,   11, 0x05,
      56,   11,   11,   11, 0x05,
      78,   68,   11,   11, 0x05,
     105,   98,   11,   11, 0x05,
     146,   11,   11,   11, 0x05,
     164,   11,   11,   11, 0x05,
     181,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     198,   11,   11,   11, 0x0a,
     219,   11,   11,   11, 0x0a,
     237,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CTcpServer[] = {
    "CTcpServer\0\0SigConnected()\0SigHMIResponded()\0"
    "SigPause()\0SigResume()\0MissionId\0"
    "SigLoadMission(int)\0points\0"
    "SigPathUpdated(std::vector<StructPoint>)\0"
    "SigImageRequest()\0SigGridRequest()\0"
    "SigPathRequest()\0SltOnNewConnection()\0"
    "SltOnDisconnect()\0SltOnDataReceived()\0"
};

void CTcpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CTcpServer *_t = static_cast<CTcpServer *>(_o);
        switch (_id) {
        case 0: _t->SigConnected(); break;
        case 1: _t->SigHMIResponded(); break;
        case 2: _t->SigPause(); break;
        case 3: _t->SigResume(); break;
        case 4: _t->SigLoadMission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->SigPathUpdated((*reinterpret_cast< std::vector<StructPoint>(*)>(_a[1]))); break;
        case 6: _t->SigImageRequest(); break;
        case 7: _t->SigGridRequest(); break;
        case 8: _t->SigPathRequest(); break;
        case 9: _t->SltOnNewConnection(); break;
        case 10: _t->SltOnDisconnect(); break;
        case 11: _t->SltOnDataReceived(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CTcpServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CTcpServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CTcpServer,
      qt_meta_data_CTcpServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CTcpServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CTcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CTcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CTcpServer))
        return static_cast<void*>(const_cast< CTcpServer*>(this));
    return QObject::qt_metacast(_clname);
}

int CTcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CTcpServer::SigConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CTcpServer::SigHMIResponded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CTcpServer::SigPause()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void CTcpServer::SigResume()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void CTcpServer::SigLoadMission(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CTcpServer::SigPathUpdated(std::vector<StructPoint> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CTcpServer::SigImageRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void CTcpServer::SigGridRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void CTcpServer::SigPathRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}
QT_END_MOC_NAMESPACE
