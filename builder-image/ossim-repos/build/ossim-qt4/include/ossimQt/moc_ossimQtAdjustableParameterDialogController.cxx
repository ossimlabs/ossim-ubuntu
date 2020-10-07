/****************************************************************************
** Meta object code from reading C++ file 'ossimQtAdjustableParameterDialogController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtAdjustableParameterDialogController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtAdjustableParameterDialogController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtAdjustableParameterDialogController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      52,   44,   43,   43, 0x09,
      74,   43,   43,   43, 0x0a,
      87,   43,   43,   43, 0x0a,
     104,   43,   43,   43, 0x0a,
     121,   43,   43,   43, 0x0a,
     138,   43,   43,   43, 0x0a,
     157,   43,   43,   43, 0x0a,
     188,   43,   43,   43, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtAdjustableParameterDialogController[] = {
    "ossimQtAdjustableParameterDialogController\0"
    "\0row,col\0valueChanged(int,int)\0"
    "resetTable()\0keepAdjustment()\0"
    "saveAdjustment()\0copyAdjustment()\0"
    "deleteAdjustment()\0adjustmentDescriptionChanged()\0"
    "selectionListChanged()\0"
};

void ossimQtAdjustableParameterDialogController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtAdjustableParameterDialogController *_t = static_cast<ossimQtAdjustableParameterDialogController *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->resetTable(); break;
        case 2: _t->keepAdjustment(); break;
        case 3: _t->saveAdjustment(); break;
        case 4: _t->copyAdjustment(); break;
        case 5: _t->deleteAdjustment(); break;
        case 6: _t->adjustmentDescriptionChanged(); break;
        case 7: _t->selectionListChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtAdjustableParameterDialogController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtAdjustableParameterDialogController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ossimQtAdjustableParameterDialogController,
      qt_meta_data_ossimQtAdjustableParameterDialogController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtAdjustableParameterDialogController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtAdjustableParameterDialogController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtAdjustableParameterDialogController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtAdjustableParameterDialogController))
        return static_cast<void*>(const_cast< ossimQtAdjustableParameterDialogController*>(this));
    return QObject::qt_metacast(_clname);
}

int ossimQtAdjustableParameterDialogController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
