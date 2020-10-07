/****************************************************************************
** Meta object code from reading C++ file 'ossimQtUnitConverterDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtUnitConverterDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtUnitConverterDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtUnitConverterDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x0a,
      43,   27,   27,   27, 0x0a,
      68,   27,   27,   27, 0x0a,
      96,   27,   27,   27, 0x0a,
     127,   27,   27,   27, 0x0a,
     156,   27,   27,   27, 0x0a,
     193,   27,   27,   27, 0x0a,
     231,   27,   27,   27, 0x0a,
     263,   27,   27,   27, 0x0a,
     295,   27,   27,   27, 0x0a,
     327,   27,   27,   27, 0x0a,
     359,   27,   27,   27, 0x0a,
     389,   27,   27,   27, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtUnitConverterDialog[] = {
    "ossimQtUnitConverterDialog\0\0updateFields()\0"
    "theCloseButton_clicked()\0"
    "theDmsField_returnPressed()\0"
    "theMetersField_returnPressed()\0"
    "theFeetField_returnPressed()\0"
    "theUsSurveyFeetField_returnPressed()\0"
    "theNauticalMilesField_returnPressed()\0"
    "theRadiansField_returnPressed()\0"
    "theDegreesField_returnPressed()\0"
    "theMinutesField_returnPressed()\0"
    "theSecondsField_returnPressed()\0"
    "theMilesField_returnPressed()\0"
    "languageChange()\0"
};

void ossimQtUnitConverterDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtUnitConverterDialog *_t = static_cast<ossimQtUnitConverterDialog *>(_o);
        switch (_id) {
        case 0: _t->updateFields(); break;
        case 1: _t->theCloseButton_clicked(); break;
        case 2: _t->theDmsField_returnPressed(); break;
        case 3: _t->theMetersField_returnPressed(); break;
        case 4: _t->theFeetField_returnPressed(); break;
        case 5: _t->theUsSurveyFeetField_returnPressed(); break;
        case 6: _t->theNauticalMilesField_returnPressed(); break;
        case 7: _t->theRadiansField_returnPressed(); break;
        case 8: _t->theDegreesField_returnPressed(); break;
        case 9: _t->theMinutesField_returnPressed(); break;
        case 10: _t->theSecondsField_returnPressed(); break;
        case 11: _t->theMilesField_returnPressed(); break;
        case 12: _t->languageChange(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ossimQtUnitConverterDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtUnitConverterDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtUnitConverterDialog,
      qt_meta_data_ossimQtUnitConverterDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtUnitConverterDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtUnitConverterDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtUnitConverterDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtUnitConverterDialog))
        return static_cast<void*>(const_cast< ossimQtUnitConverterDialog*>(this));
    if (!strcmp(_clname, "Ui::ossimQtUnitConverterDialog"))
        return static_cast< Ui::ossimQtUnitConverterDialog*>(const_cast< ossimQtUnitConverterDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtUnitConverterDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
