/****************************************************************************
** Meta object code from reading C++ file 'ossimQtPropertyContainerItem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtPropertyContainerItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtPropertyContainerItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtPropertyContainerItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   30,   29,   29, 0x0a,
      57,   29,   29,   29, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtPropertyContainerItem[] = {
    "ossimQtPropertyContainerItem\0\0notify\0"
    "resetProperty(bool)\0resetProperty()\0"
};

void ossimQtPropertyContainerItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtPropertyContainerItem *_t = static_cast<ossimQtPropertyContainerItem *>(_o);
        switch (_id) {
        case 0: _t->resetProperty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->resetProperty(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtPropertyContainerItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtPropertyContainerItem::staticMetaObject = {
    { &ossimQtPropertyItem::staticMetaObject, qt_meta_stringdata_ossimQtPropertyContainerItem,
      qt_meta_data_ossimQtPropertyContainerItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtPropertyContainerItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtPropertyContainerItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtPropertyContainerItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtPropertyContainerItem))
        return static_cast<void*>(const_cast< ossimQtPropertyContainerItem*>(this));
    return ossimQtPropertyItem::qt_metacast(_clname);
}

int ossimQtPropertyContainerItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ossimQtPropertyItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
