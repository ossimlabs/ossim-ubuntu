/****************************************************************************
** Meta object code from reading C++ file 'ossimQtPropertyFilenameItem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtPropertyFilenameItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtPropertyFilenameItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtPropertyFilenameItem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x09,
      40,   28,   28,   28, 0x09,
      57,   50,   28,   28, 0x0a,
      77,   28,   28,   28, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtPropertyFilenameItem[] = {
    "ossimQtPropertyFilenameItem\0\0setValue()\0"
    "getText()\0notify\0resetProperty(bool)\0"
    "resetProperty()\0"
};

void ossimQtPropertyFilenameItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtPropertyFilenameItem *_t = static_cast<ossimQtPropertyFilenameItem *>(_o);
        switch (_id) {
        case 0: _t->setValue(); break;
        case 1: _t->getText(); break;
        case 2: _t->resetProperty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->resetProperty(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtPropertyFilenameItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtPropertyFilenameItem::staticMetaObject = {
    { &ossimQtPropertyItem::staticMetaObject, qt_meta_stringdata_ossimQtPropertyFilenameItem,
      qt_meta_data_ossimQtPropertyFilenameItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtPropertyFilenameItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtPropertyFilenameItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtPropertyFilenameItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtPropertyFilenameItem))
        return static_cast<void*>(const_cast< ossimQtPropertyFilenameItem*>(this));
    return ossimQtPropertyItem::qt_metacast(_clname);
}

int ossimQtPropertyFilenameItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ossimQtPropertyItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
