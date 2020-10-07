/****************************************************************************
** Meta object code from reading C++ file 'ossimQtViewDialogController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtViewDialogController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtViewDialogController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtViewDialogController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x05,
      50,   45,   28,   28, 0x05,
      85,   80,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
     107,   28,   28,   28, 0x0a,
     129,  125,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtViewDialogController[] = {
    "ossimQtViewDialogController\0\0"
    "propagateView()\0view\0applyView(const ossimObject*)\0"
    "flag\0setIdentityMode(bool)\0dialogDestroyed()\0"
    "str\0currentProjectionChanged(QString)\0"
};

void ossimQtViewDialogController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtViewDialogController *_t = static_cast<ossimQtViewDialogController *>(_o);
        switch (_id) {
        case 0: _t->propagateView(); break;
        case 1: _t->applyView((*reinterpret_cast< const ossimObject*(*)>(_a[1]))); break;
        case 2: _t->setIdentityMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->dialogDestroyed(); break;
        case 4: _t->currentProjectionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtViewDialogController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtViewDialogController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ossimQtViewDialogController,
      qt_meta_data_ossimQtViewDialogController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtViewDialogController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtViewDialogController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtViewDialogController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtViewDialogController))
        return static_cast<void*>(const_cast< ossimQtViewDialogController*>(this));
    return QObject::qt_metacast(_clname);
}

int ossimQtViewDialogController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ossimQtViewDialogController::propagateView()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ossimQtViewDialogController::applyView(const ossimObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ossimQtViewDialogController::setIdentityMode(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
