/****************************************************************************
** Meta object code from reading C++ file 'imagedraw.h'
**
** Created: Tue Jun 4 09:28:09 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/imagedraw.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imagedraw.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ImageDraw[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      35,   10,   10,   10, 0x0a,
      52,   10,   10,   10, 0x0a,
      73,   10,   10,   10, 0x0a,
      97,   11,   10,   10, 0x0a,
     117,   10,   10,   10, 0x0a,
     143,   10,   10,   10, 0x0a,
     166,   10,   10,   10, 0x0a,
     187,   10,   10,   10, 0x0a,
     205,   10,   10,   10, 0x0a,
     225,   10,   10,   10, 0x0a,
     281,  244,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ImageDraw[] = {
    "ImageDraw\0\0img\0SigOnNewImg(QImage)\0"
    "SltOnRectClick()\0SltOnOpenUImgClick()\0"
    "SltImageAreaOpened(int)\0SltOnNewImg(QImage)\0"
    "SltOnPlayPauseClick(bool)\0"
    "SltOnCreateClick(bool)\0SltOnPathClick(bool)\0"
    "SltOnAllowClick()\0SltOperatorAction()\0"
    "SltOnWaitTimeout()\0"
    "grid,robotPos,xOffset,yOffset,orient\0"
    "SltOnGridReceived(int[100][100],StructPoint,int,int,double)\0"
};

void ImageDraw::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ImageDraw *_t = static_cast<ImageDraw *>(_o);
        switch (_id) {
        case 0: _t->SigOnNewImg((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->SltOnRectClick(); break;
        case 2: _t->SltOnOpenUImgClick(); break;
        case 3: _t->SltImageAreaOpened((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SltOnNewImg((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 5: _t->SltOnPlayPauseClick((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->SltOnCreateClick((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->SltOnPathClick((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->SltOnAllowClick(); break;
        case 9: _t->SltOperatorAction(); break;
        case 10: _t->SltOnWaitTimeout(); break;
        case 11: _t->SltOnGridReceived((*reinterpret_cast< int(*)[100][100]>(_a[1])),(*reinterpret_cast< StructPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ImageDraw::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ImageDraw::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ImageDraw,
      qt_meta_data_ImageDraw, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ImageDraw::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ImageDraw::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ImageDraw::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ImageDraw))
        return static_cast<void*>(const_cast< ImageDraw*>(this));
    if (!strcmp(_clname, "IC11_Node_Subscriber"))
        return static_cast< IC11_Node_Subscriber*>(const_cast< ImageDraw*>(this));
    if (!strcmp(_clname, "ITcpConnectionInterface"))
        return static_cast< ITcpConnectionInterface*>(const_cast< ImageDraw*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ImageDraw::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void ImageDraw::SigOnNewImg(QImage _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
