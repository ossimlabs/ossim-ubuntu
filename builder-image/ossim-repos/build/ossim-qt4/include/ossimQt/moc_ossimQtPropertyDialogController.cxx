/****************************************************************************
** Meta object code from reading C++ file 'ossimQtPropertyDialogController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtPropertyDialogController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtPropertyDialogController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtPropertyDialogController[] = {

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
      33,   32,   32,   32, 0x0a,
      47,   32,   32,   32, 0x0a,
      63,   32,   32,   32, 0x0a,
      77,   32,   32,   32, 0x0a,
      97,   91,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtPropertyDialogController[] = {
    "ossimQtPropertyDialogController\0\0"
    "closeButton()\0executeButton()\0"
    "resetButton()\0applyButton()\0value\0"
    "autoApplyToggledButton(bool)\0"
};

void ossimQtPropertyDialogController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtPropertyDialogController *_t = static_cast<ossimQtPropertyDialogController *>(_o);
        switch (_id) {
        case 0: _t->closeButton(); break;
        case 1: _t->executeButton(); break;
        case 2: _t->resetButton(); break;
        case 3: _t->applyButton(); break;
        case 4: _t->autoApplyToggledButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtPropertyDialogController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtPropertyDialogController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ossimQtPropertyDialogController,
      qt_meta_data_ossimQtPropertyDialogController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtPropertyDialogController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtPropertyDialogController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtPropertyDialogController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtPropertyDialogController))
        return static_cast<void*>(const_cast< ossimQtPropertyDialogController*>(this));
    return QObject::qt_metacast(_clname);
}

int ossimQtPropertyDialogController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
