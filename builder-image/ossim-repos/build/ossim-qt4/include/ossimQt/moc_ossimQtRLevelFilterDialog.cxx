/****************************************************************************
** Meta object code from reading C++ file 'ossimQtRLevelFilterDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtRLevelFilterDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtRLevelFilterDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtRLevelFilterDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   27,   26,   26, 0x0a,
      52,   26,   26,   26, 0x0a,
      68,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtRLevelFilterDialog[] = {
    "ossimQtRLevelFilterDialog\0\0level\0"
    "rlevelChanged(int)\0enableClicked()\0"
    "closeClicked()\0"
};

void ossimQtRLevelFilterDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtRLevelFilterDialog *_t = static_cast<ossimQtRLevelFilterDialog *>(_o);
        switch (_id) {
        case 0: _t->rlevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->enableClicked(); break;
        case 2: _t->closeClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtRLevelFilterDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtRLevelFilterDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtRLevelFilterDialog,
      qt_meta_data_ossimQtRLevelFilterDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtRLevelFilterDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtRLevelFilterDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtRLevelFilterDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtRLevelFilterDialog))
        return static_cast<void*>(const_cast< ossimQtRLevelFilterDialog*>(this));
    if (!strcmp(_clname, "ossimConnectableObjectListener"))
        return static_cast< ossimConnectableObjectListener*>(const_cast< ossimQtRLevelFilterDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtRLevelFilterDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
