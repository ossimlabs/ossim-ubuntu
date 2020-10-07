/****************************************************************************
** Meta object code from reading C++ file 'ossimQtSwipeScrollingImageWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtSwipeScrollingImageWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtSwipeScrollingImageWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtSwipeScrollingImageWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   24, // properties
       1,   27, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   34,   33,   33, 0x09,
      66,   62,   33,   33, 0x0a,

 // properties: name, type, flags
     125,  108, 0x0009510b,

 // enums: name, flags, count, data
     108, 0x0,    5,   31,

 // enum data: key, value
     135, uint(ossimQtSwipeScrollingImageWidget::ossimQtSwipeType_NONE),
     157, uint(ossimQtSwipeScrollingImageWidget::ossimQtSwipeType_HORIZONTAL),
     185, uint(ossimQtSwipeScrollingImageWidget::ossimQtSwipeType_VERTICAL),
     211, uint(ossimQtSwipeScrollingImageWidget::ossimQtSwipeType_BOX),
     232, uint(ossimQtSwipeScrollingImageWidget::ossimQtSwipeType_CIRCLE),

       0        // eod
};

static const char qt_meta_stringdata_ossimQtSwipeScrollingImageWidget[] = {
    "ossimQtSwipeScrollingImageWidget\0\0x,y\0"
    "viewportMoving(int,int)\0evt\0"
    "swipeWidgetMouseEvent(ossimQtMouseEvent*)\0"
    "ossimQtSwipeType\0swipeType\0"
    "ossimQtSwipeType_NONE\0ossimQtSwipeType_HORIZONTAL\0"
    "ossimQtSwipeType_VERTICAL\0"
    "ossimQtSwipeType_BOX\0ossimQtSwipeType_CIRCLE\0"
};

void ossimQtSwipeScrollingImageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtSwipeScrollingImageWidget *_t = static_cast<ossimQtSwipeScrollingImageWidget *>(_o);
        switch (_id) {
        case 0: _t->viewportMoving((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->swipeWidgetMouseEvent((*reinterpret_cast< ossimQtMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtSwipeScrollingImageWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtSwipeScrollingImageWidget::staticMetaObject = {
    { &ossimQtScrollingImageWidget::staticMetaObject, qt_meta_stringdata_ossimQtSwipeScrollingImageWidget,
      qt_meta_data_ossimQtSwipeScrollingImageWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtSwipeScrollingImageWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtSwipeScrollingImageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtSwipeScrollingImageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtSwipeScrollingImageWidget))
        return static_cast<void*>(const_cast< ossimQtSwipeScrollingImageWidget*>(this));
    return ossimQtScrollingImageWidget::qt_metacast(_clname);
}

int ossimQtSwipeScrollingImageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ossimQtScrollingImageWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ossimQtSwipeType*>(_v) = swipeType(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSwipeType(*reinterpret_cast< ossimQtSwipeType*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
