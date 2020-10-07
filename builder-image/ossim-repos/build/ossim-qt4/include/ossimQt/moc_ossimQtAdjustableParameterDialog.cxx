/****************************************************************************
** Meta object code from reading C++ file 'ossimQtAdjustableParameterDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtAdjustableParameterDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtAdjustableParameterDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtAdjustableParameterDialog[] = {

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
      34,   33,   33,   33, 0x0a,
      59,   33,   33,   33, 0x0a,
      93,   33,   33,   33, 0x0a,
     138,   33,   33,   33, 0x0a,
     173,   33,   33,   33, 0x0a,
     207,   33,   33,   33, 0x0a,
     258,   33,   33,   33, 0x0a,
     282,   33,   33,   33, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtAdjustableParameterDialog[] = {
    "ossimQtAdjustableParameterDialog\0\0"
    "theCloseButton_clicked()\0"
    "theKeepAdjustmentButton_clicked()\0"
    "theAdjustmentSelectionBox_activated(QString)\0"
    "theDeleteAdjustmentButto_clicked()\0"
    "theCopyAdjustmentButton_clicked()\0"
    "theAdjustmentDescriptionInput_textChanged(QString)\0"
    "theSaveButton_clicked()\0languageChange()\0"
};

void ossimQtAdjustableParameterDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtAdjustableParameterDialog *_t = static_cast<ossimQtAdjustableParameterDialog *>(_o);
        switch (_id) {
        case 0: _t->theCloseButton_clicked(); break;
        case 1: _t->theKeepAdjustmentButton_clicked(); break;
        case 2: _t->theAdjustmentSelectionBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->theDeleteAdjustmentButto_clicked(); break;
        case 4: _t->theCopyAdjustmentButton_clicked(); break;
        case 5: _t->theAdjustmentDescriptionInput_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->theSaveButton_clicked(); break;
        case 7: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtAdjustableParameterDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtAdjustableParameterDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtAdjustableParameterDialog,
      qt_meta_data_ossimQtAdjustableParameterDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtAdjustableParameterDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtAdjustableParameterDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtAdjustableParameterDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtAdjustableParameterDialog))
        return static_cast<void*>(const_cast< ossimQtAdjustableParameterDialog*>(this));
    if (!strcmp(_clname, "Ui::ossimQtAdjustableParameterDialog"))
        return static_cast< Ui::ossimQtAdjustableParameterDialog*>(const_cast< ossimQtAdjustableParameterDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtAdjustableParameterDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
