/****************************************************************************
** Meta object code from reading C++ file 'ossimQtCombinerEditorDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtCombinerEditorDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtCombinerEditorDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtCombinerEditorDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x05,
      37,   28,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   28,   28,   28, 0x0a,
      70,   28,   28,   28, 0x0a,
      95,   28,   28,   28, 0x0a,
     126,  120,   28,   28, 0x0a,
     161,   28,   28,   28, 0x0a,
     185,   28,   28,   28, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtCombinerEditorDialog[] = {
    "ossimQtCombinerEditorDialog\0\0apply()\0"
    "reset()\0theCloseButton_clicked()\0"
    "theApplyButton_clicked()\0"
    "theResetButton_clicked()\0value\0"
    "theAutoApplyCheckBox_toggled(bool)\0"
    "propertyValuesChanged()\0languageChange()\0"
};

void ossimQtCombinerEditorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtCombinerEditorDialog *_t = static_cast<ossimQtCombinerEditorDialog *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->reset(); break;
        case 2: _t->theCloseButton_clicked(); break;
        case 3: _t->theApplyButton_clicked(); break;
        case 4: _t->theResetButton_clicked(); break;
        case 5: _t->theAutoApplyCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->propertyValuesChanged(); break;
        case 7: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtCombinerEditorDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtCombinerEditorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtCombinerEditorDialog,
      qt_meta_data_ossimQtCombinerEditorDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtCombinerEditorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtCombinerEditorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtCombinerEditorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtCombinerEditorDialog))
        return static_cast<void*>(const_cast< ossimQtCombinerEditorDialog*>(this));
    if (!strcmp(_clname, "Ui::ossimQtCombinerEditorDialog"))
        return static_cast< Ui::ossimQtCombinerEditorDialog*>(const_cast< ossimQtCombinerEditorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtCombinerEditorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ossimQtCombinerEditorDialog::apply()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ossimQtCombinerEditorDialog::reset()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
