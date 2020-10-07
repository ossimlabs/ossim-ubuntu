/****************************************************************************
** Meta object code from reading C++ file 'ossimQtPropertyMatrixItem.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtPropertyMatrixItem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtPropertyMatrixItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtPropertyMatrixItem[] = {

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
      27,   26,   26,   26, 0x09,
      44,   39,   26,   26, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtPropertyMatrixItem[] = {
    "ossimQtPropertyMatrixItem\0\0getMatrix()\0"
    "prop\0matrixChanged(ossimRefPtr<ossimMatrixProperty>)\0"
};

void ossimQtPropertyMatrixItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtPropertyMatrixItem *_t = static_cast<ossimQtPropertyMatrixItem *>(_o);
        switch (_id) {
        case 0: _t->getMatrix(); break;
        case 1: _t->matrixChanged((*reinterpret_cast< ossimRefPtr<ossimMatrixProperty>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtPropertyMatrixItem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtPropertyMatrixItem::staticMetaObject = {
    { &ossimQtPropertyItem::staticMetaObject, qt_meta_stringdata_ossimQtPropertyMatrixItem,
      qt_meta_data_ossimQtPropertyMatrixItem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtPropertyMatrixItem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtPropertyMatrixItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtPropertyMatrixItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtPropertyMatrixItem))
        return static_cast<void*>(const_cast< ossimQtPropertyMatrixItem*>(this));
    return ossimQtPropertyItem::qt_metacast(_clname);
}

int ossimQtPropertyMatrixItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
