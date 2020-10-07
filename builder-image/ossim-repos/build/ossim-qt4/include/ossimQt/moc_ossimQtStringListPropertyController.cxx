/****************************************************************************
** Meta object code from reading C++ file 'ossimQtStringListPropertyController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtStringListPropertyController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtStringListPropertyController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtStringListPropertyController[] = {

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
      42,   37,   36,   36, 0x05,
      74,   37,   36,   36, 0x05,

 // slots: signature, parameters, type, tag, flags
     108,   36,   36,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtStringListPropertyController[] = {
    "ossimQtStringListPropertyController\0"
    "\0prop\0apply(ossimStringListProperty*)\0"
    "changed(ossimStringListProperty*)\0"
    "applyButton()\0"
};

void ossimQtStringListPropertyController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtStringListPropertyController *_t = static_cast<ossimQtStringListPropertyController *>(_o);
        switch (_id) {
        case 0: _t->apply((*reinterpret_cast< ossimStringListProperty*(*)>(_a[1]))); break;
        case 1: _t->changed((*reinterpret_cast< ossimStringListProperty*(*)>(_a[1]))); break;
        case 2: _t->applyButton(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtStringListPropertyController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtStringListPropertyController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ossimQtStringListPropertyController,
      qt_meta_data_ossimQtStringListPropertyController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtStringListPropertyController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtStringListPropertyController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtStringListPropertyController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtStringListPropertyController))
        return static_cast<void*>(const_cast< ossimQtStringListPropertyController*>(this));
    return QObject::qt_metacast(_clname);
}

int ossimQtStringListPropertyController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ossimQtStringListPropertyController::apply(ossimStringListProperty * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ossimQtStringListPropertyController::changed(ossimStringListProperty * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
