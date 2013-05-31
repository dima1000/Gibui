/****************************************************************************
** Meta object code from reading C++ file 'tcpConnection.h'
**
** Created: Fri May 31 09:42:41 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/tcpConnection.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpConnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CTcpConnection[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   16,   15,   15, 0x05,
      82,   45,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     142,   15,   15,   15, 0x0a,
     169,  157,   15,   15, 0x0a,
     208,   15,   15,   15, 0x0a,
     227,  221,   15,   15, 0x0a,
     244,   15,   15,   15, 0x0a,
     252,   15,   15,   15, 0x0a,
     268,  261,   15,   15, 0x0a,
     309,   15,   15,   15, 0x0a,
     328,   15,   15,   15, 0x0a,
     346,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CTcpConnection[] = {
    "CTcpConnection\0\0img\0SigOnImgReceived(QImage)\0"
    "grid,robotPos,xOffset,yOffset,orient\0"
    "SigOnGridReceived(int[100][100],StructPoint,int,int,double)\0"
    "SltReadyRead()\0socketError\0"
    "SltError(QAbstractSocket::SocketError)\0"
    "SltOnTimer()\0index\0LoadMission(int)\0"
    "Pause()\0Resume()\0points\0"
    "SendPathUpdate(std::vector<StructPoint>)\0"
    "SendImageRequest()\0SendGridRequest()\0"
    "SendPathRequest()\0"
};

void CTcpConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CTcpConnection *_t = static_cast<CTcpConnection *>(_o);
        switch (_id) {
        case 0: _t->SigOnImgReceived((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->SigOnGridReceived((*reinterpret_cast< int(*)[100][100]>(_a[1])),(*reinterpret_cast< StructPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 2: _t->SltReadyRead(); break;
        case 3: _t->SltError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->SltOnTimer(); break;
        case 5: _t->LoadMission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->Pause(); break;
        case 7: _t->Resume(); break;
        case 8: _t->SendPathUpdate((*reinterpret_cast< std::vector<StructPoint>(*)>(_a[1]))); break;
        case 9: _t->SendImageRequest(); break;
        case 10: _t->SendGridRequest(); break;
        case 11: _t->SendPathRequest(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CTcpConnection::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CTcpConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CTcpConnection,
      qt_meta_data_CTcpConnection, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CTcpConnection::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CTcpConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CTcpConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CTcpConnection))
        return static_cast<void*>(const_cast< CTcpConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int CTcpConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CTcpConnection::SigOnImgReceived(QImage _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CTcpConnection::SigOnGridReceived(int _t1[100][100], StructPoint _t2, int _t3, int _t4, double _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
