/****************************************************************************
** Meta object code from reading C++ file 'ossimQtMatrixPropertyController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtMatrixPropertyController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtMatrixPropertyController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtMatrixPropertyController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      38,   33,   32,   32, 0x05,
      78,   33,   32,   32, 0x05,

 // slots: signature, parameters, type, tag, flags
     120,   32,   32,   32, 0x0a,
     134,   32,   32,   32, 0x0a,
     147,   32,   32,   32, 0x0a,
     173,  165,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtMatrixPropertyController[] = {
    "ossimQtMatrixPropertyController\0\0prop\0"
    "apply(ossimRefPtr<ossimMatrixProperty>)\0"
    "changed(ossimRefPtr<ossimMatrixProperty>)\0"
    "applyButton()\0zeroButton()\0normalizeButton()\0"
    "row,col\0valueChanged(int,int)\0"
};

void ossimQtMatrixPropertyController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtMatrixPropertyController *_t = static_cast<ossimQtMatrixPropertyController *>(_o);
        switch (_id) {
        case 0: _t->apply((*reinterpret_cast< ossimRefPtr<ossimMatrixProperty>(*)>(_a[1]))); break;
        case 1: _t->changed((*reinterpret_cast< ossimRefPtr<ossimMatrixProperty>(*)>(_a[1]))); break;
        case 2: _t->applyButton(); break;
        case 3: _t->zeroButton(); break;
        case 4: _t->normalizeButton(); break;
        case 5: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtMatrixPropertyController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtMatrixPropertyController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ossimQtMatrixPropertyController,
      qt_meta_data_ossimQtMatrixPropertyController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtMatrixPropertyController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtMatrixPropertyController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtMatrixPropertyController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtMatrixPropertyController))
        return static_cast<void*>(const_cast< ossimQtMatrixPropertyController*>(this));
    return QObject::qt_metacast(_clname);
}

int ossimQtMatrixPropertyController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ossimQtMatrixPropertyController::apply(ossimRefPtr<ossimMatrixProperty> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ossimQtMatrixPropertyController::changed(ossimRefPtr<ossimMatrixProperty> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
