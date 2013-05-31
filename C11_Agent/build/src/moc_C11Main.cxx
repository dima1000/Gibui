/****************************************************************************
** Meta object code from reading C++ file 'C11Main.h'
**
** Created: Fri May 31 08:29:11 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/C11Main.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'C11Main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_C11Main[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,    9,    8,    8, 0x05,
      41,   36,    8,    8, 0x05,
      76,   71,    8,    8, 0x05,
     111,    8,    8,    8, 0x05,
     137,  130,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     169,    9,    8,    8, 0x0a,
     192,   36,    8,    8, 0x0a,
     222,   71,    8,    8, 0x0a,
     257,    8,    8,    8, 0x0a,
     276,    8,    8,    8, 0x0a,
     294,  130,    8,    8, 0x0a,
     326,    8,    8,    8, 0x0a,
     337,    8,    8,    8, 0x0a,
     359,  349,    8,    8, 0x0a,
     386,  379,    8,    8, 0x0a,
     427,    8,    8,    8, 0x0a,
     445,    8,    8,    8, 0x0a,
     462,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_C11Main[] = {
    "C11Main\0\0img\0SigOnImageSend(QImage)\0"
    "grid\0SigOnGridSend(StructGridData)\0"
    "path\0SigOnPathSend(vector<StructPoint>)\0"
    "SigOnHMIResponse()\0status\0"
    "SigOnExecutionStatusChange(int)\0"
    "SltOnImageSend(QImage)\0"
    "SltOnGridSend(StructGridData)\0"
    "SltOnPathSend(vector<StructPoint>)\0"
    "SltOnHMIResponse()\0SltHMIResponded()\0"
    "SltOnExecutionStatusChange(int)\0"
    "SltPause()\0SltResume()\0MissionId\0"
    "SltLoadMission(int)\0points\0"
    "SltPathUpdated(std::vector<StructPoint>)\0"
    "SltImageRequest()\0SltGridRequest()\0"
    "SltPathRequest()\0"
};

void C11Main::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        C11Main *_t = static_cast<C11Main *>(_o);
        switch (_id) {
        case 0: _t->SigOnImageSend((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->SigOnGridSend((*reinterpret_cast< StructGridData(*)>(_a[1]))); break;
        case 2: _t->SigOnPathSend((*reinterpret_cast< vector<StructPoint>(*)>(_a[1]))); break;
        case 3: _t->SigOnHMIResponse(); break;
        case 4: _t->SigOnExecutionStatusChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->SltOnImageSend((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 6: _t->SltOnGridSend((*reinterpret_cast< StructGridData(*)>(_a[1]))); break;
        case 7: _t->SltOnPathSend((*reinterpret_cast< vector<StructPoint>(*)>(_a[1]))); break;
        case 8: _t->SltOnHMIResponse(); break;
        case 9: _t->SltHMIResponded(); break;
        case 10: _t->SltOnExecutionStatusChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->SltPause(); break;
        case 12: _t->SltResume(); break;
        case 13: _t->SltLoadMission((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->SltPathUpdated((*reinterpret_cast< std::vector<StructPoint>(*)>(_a[1]))); break;
        case 15: _t->SltImageRequest(); break;
        case 16: _t->SltGridRequest(); break;
        case 17: _t->SltPathRequest(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData C11Main::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject C11Main::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_C11Main,
      qt_meta_data_C11Main, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &C11Main::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *C11Main::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *C11Main::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_C11Main))
        return static_cast<void*>(const_cast< C11Main*>(this));
    if (!strcmp(_clname, "IAgentInterface"))
        return static_cast< IAgentInterface*>(const_cast< C11Main*>(this));
    return QObject::qt_metacast(_clname);
}

int C11Main::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void C11Main::SigOnImageSend(QImage _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void C11Main::SigOnGridSend(StructGridData _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void C11Main::SigOnPathSend(vector<StructPoint> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void C11Main::SigOnHMIResponse()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void C11Main::SigOnExecutionStatusChange(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
