/****************************************************************************
** Meta object code from reading C++ file 'C11_Agent_Node.h'
**
** Created: Fri May 31 09:17:47 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/C11_Agent_Node.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'C11_Agent_Node.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_C11_Agent_Node[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_C11_Agent_Node[] = {
    "C11_Agent_Node\0"
};

void C11_Agent_Node::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData C11_Agent_Node::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject C11_Agent_Node::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_C11_Agent_Node,
      qt_meta_data_C11_Agent_Node, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &C11_Agent_Node::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *C11_Agent_Node::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *C11_Agent_Node::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_C11_Agent_Node))
        return static_cast<void*>(const_cast< C11_Agent_Node*>(this));
    if (!strcmp(_clname, "IPushHMIInterface"))
        return static_cast< IPushHMIInterface*>(const_cast< C11_Agent_Node*>(this));
    if (!strcmp(_clname, "IHMIResponseInterface"))
        return static_cast< IHMIResponseInterface*>(const_cast< C11_Agent_Node*>(this));
    return QThread::qt_metacast(_clname);
}

int C11_Agent_Node::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
