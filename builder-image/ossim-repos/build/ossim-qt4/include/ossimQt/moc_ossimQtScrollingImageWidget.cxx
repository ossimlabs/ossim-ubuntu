/****************************************************************************
** Meta object code from reading C++ file 'ossimQtScrollingImageWidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtScrollingImageWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtScrollingImageWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtScrollingImageWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      33,   29,   28,   28, 0x05,
     110,   84,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
     159,  155,   28,   28, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtScrollingImageWidget[] = {
    "ossimQtScrollingImageWidget\0\0evt\0"
    "scrollingImageWidgetMouseEvent(ossimQtMouseEvent*)\0"
    "p,clipx,clipy,clipw,cliph\0"
    "paintYourGraphics(QPainter*,int,int,int,int)\0"
    "x,y\0viewportMoving(int,int)\0"
};

void ossimQtScrollingImageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtScrollingImageWidget *_t = static_cast<ossimQtScrollingImageWidget *>(_o);
        switch (_id) {
        case 0: _t->scrollingImageWidgetMouseEvent((*reinterpret_cast< ossimQtMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->paintYourGraphics((*reinterpret_cast< QPainter*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 2: _t->viewportMoving((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtScrollingImageWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtScrollingImageWidget::staticMetaObject = {
    { &Q3ScrollView::staticMetaObject, qt_meta_stringdata_ossimQtScrollingImageWidget,
      qt_meta_data_ossimQtScrollingImageWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtScrollingImageWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtScrollingImageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtScrollingImageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtScrollingImageWidget))
        return static_cast<void*>(const_cast< ossimQtScrollingImageWidget*>(this));
    if (!strcmp(_clname, "ossimConnectableObject"))
        return static_cast< ossimConnectableObject*>(const_cast< ossimQtScrollingImageWidget*>(this));
    if (!strcmp(_clname, "ossimConnectableObjectListener"))
        return static_cast< ossimConnectableObjectListener*>(const_cast< ossimQtScrollingImageWidget*>(this));
    return Q3ScrollView::qt_metacast(_clname);
}

int ossimQtScrollingImageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3ScrollView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ossimQtScrollingImageWidget::scrollingImageWidgetMouseEvent(ossimQtMouseEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ossimQtScrollingImageWidget::paintYourGraphics(QPainter * _t1, int _t2, int _t3, int _t4, int _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
