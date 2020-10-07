/****************************************************************************
** Meta object code from reading C++ file 'ossimQtPropertyDateItem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtPropertyDateItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtPropertyDateItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtPropertyDateItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x0a,
      41,   24,   24,   24, 0x0a,
      58,   52,   24,   24, 0x0a,
      89,   82,   24,   24, 0x0a,
     109,   24,   24,   24, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtPropertyDateItem[] = {
    "ossimQtPropertyDateItem\0\0returnPressed()\0"
    "setValue()\0value\0valueChanged(QDateTime)\0"
    "notify\0resetProperty(bool)\0resetProperty()\0"
};

void ossimQtPropertyDateItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtPropertyDateItem *_t = static_cast<ossimQtPropertyDateItem *>(_o);
        switch (_id) {
        case 0: _t->returnPressed(); break;
        case 1: _t->setValue(); break;
        case 2: _t->valueChanged((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 3: _t->resetProperty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->resetProperty(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtPropertyDateItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtPropertyDateItem::staticMetaObject = {
    { &ossimQtPropertyItem::staticMetaObject, qt_meta_stringdata_ossimQtPropertyDateItem,
      qt_meta_data_ossimQtPropertyDateItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtPropertyDateItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtPropertyDateItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtPropertyDateItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtPropertyDateItem))
        return static_cast<void*>(const_cast< ossimQtPropertyDateItem*>(this));
    return ossimQtPropertyItem::qt_metacast(_clname);
}

int ossimQtPropertyDateItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ossimQtPropertyItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
