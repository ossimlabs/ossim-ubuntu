/****************************************************************************
** Meta object code from reading C++ file 'ossimQtQuadProjectionDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtQuadProjectionDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtQuadProjectionDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtQuadProjectionDialog[] = {

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
      29,   28,   28,   28, 0x0a,
      53,   28,   28,   28, 0x0a,
      78,   28,   28,   28, 0x0a,
     103,   28,   28,   28, 0x0a,
     132,   28,   28,   28, 0x0a,
     166,  158,   28,   28, 0x0a,
     192,   28,   28,   28, 0x0a,
     231,   28,   28,   28, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtQuadProjectionDialog[] = {
    "ossimQtQuadProjectionDialog\0\0"
    "savePushButtonClicked()\0"
    "resetPushButtonClicked()\0"
    "closePushButtonClicked()\0"
    "deleteRowPushButtonClicked()\0"
    "addRowPushButtonClicked()\0row,col\0"
    "cellValueChanged(int,int)\0"
    "roamingEnabledRadioButtonToggled(bool)\0"
    "languageChange()\0"
};

void ossimQtQuadProjectionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtQuadProjectionDialog *_t = static_cast<ossimQtQuadProjectionDialog *>(_o);
        switch (_id) {
        case 0: _t->savePushButtonClicked(); break;
        case 1: _t->resetPushButtonClicked(); break;
        case 2: _t->closePushButtonClicked(); break;
        case 3: _t->deleteRowPushButtonClicked(); break;
        case 4: _t->addRowPushButtonClicked(); break;
        case 5: _t->cellValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->roamingEnabledRadioButtonToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtQuadProjectionDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtQuadProjectionDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtQuadProjectionDialog,
      qt_meta_data_ossimQtQuadProjectionDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtQuadProjectionDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtQuadProjectionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtQuadProjectionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtQuadProjectionDialog))
        return static_cast<void*>(const_cast< ossimQtQuadProjectionDialog*>(this));
    if (!strcmp(_clname, "Ui::ossimQtQuadProjectionDialog"))
        return static_cast< Ui::ossimQtQuadProjectionDialog*>(const_cast< ossimQtQuadProjectionDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtQuadProjectionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
