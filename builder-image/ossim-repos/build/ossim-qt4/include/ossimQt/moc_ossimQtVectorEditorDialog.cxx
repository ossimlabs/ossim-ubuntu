/****************************************************************************
** Meta object code from reading C++ file 'ossimQtVectorEditorDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtVectorEditorDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtVectorEditorDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtVectorEditorDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   26,   26,   26, 0x0a,
      55,   52,   26,   26, 0x0a,
     106,   26,   26,   26, 0x0a,
     131,   26,   26,   26, 0x0a,
     167,   26,   26,   26, 0x0a,
     200,   26,   26,   26, 0x0a,
     230,   26,   26,   26, 0x0a,
     267,   26,   26,   26, 0x0a,
     305,   26,   26,   26, 0x0a,
     342,   26,   26,   26, 0x0a,
     384,  378,   26,   26, 0x0a,
     424,   26,   26,   26, 0x0a,
     467,   26,   26,   26, 0x0a,
     506,   26,   26,   26, 0x0a,
     543,   26,   26,   26, 0x0a,
     585,   26,   26,   26, 0x0a,
     618,   26,   26,   26, 0x0a,
     657,   26,   26,   26, 0x0a,
     687,   26,   26,   26, 0x0a,
     716,   26,   26,   26, 0x0a,
     761,   26,   26,   26, 0x0a,
     805,   26,   26,   26, 0x0a,
     844,   26,   26,   26, 0x0a,
     886,   26,   26,   26, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtVectorEditorDialog[] = {
    "ossimQtVectorEditorDialog\0\0"
    "theApplyButton_clicked()\0li\0"
    "theFeatureListbox_selectionChanged(Q3ListBoxItem*)\0"
    "theCloseButton_clicked()\0"
    "thePolygonColorPushButton_clicked()\0"
    "theLineColorPushButton_clicked()\0"
    "thePointColorButton_clicked()\0"
    "theLineEnabledCheckBox_toggled(bool)\0"
    "thePointEnabledCheckBox_toggled(bool)\0"
    "theFontEnabledCheckBox_toggled(bool)\0"
    "thePolygonEnabledCheckBox_clicked()\0"
    "value\0theLineThicknessInput_valueChanged(int)\0"
    "thePolygonThicknessInput_valueChanged(int)\0"
    "thePolygonFilledCheckBox_toggled(bool)\0"
    "thePointFilledCheckbox_toggled(bool)\0"
    "theFontPointSizeSpinBox_valueChanged(int)\0"
    "theFontColorPushButton_clicked()\0"
    "theFontScaleInput_textChanged(QString)\0"
    "theDisableAllButton_clicked()\0"
    "theEnableAllButton_clicked()\0"
    "theFontFamilyNameComboBox_activated(QString)\0"
    "theFontStyleNameComboBox_activated(QString)\0"
    "theFontShearInput_textChanged(QString)\0"
    "theFontRotationInput_textChanged(QString)\0"
    "languageChange()\0"
};

void ossimQtVectorEditorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtVectorEditorDialog *_t = static_cast<ossimQtVectorEditorDialog *>(_o);
        switch (_id) {
        case 0: _t->theApplyButton_clicked(); break;
        case 1: _t->theFeatureListbox_selectionChanged((*reinterpret_cast< Q3ListBoxItem*(*)>(_a[1]))); break;
        case 2: _t->theCloseButton_clicked(); break;
        case 3: _t->thePolygonColorPushButton_clicked(); break;
        case 4: _t->theLineColorPushButton_clicked(); break;
        case 5: _t->thePointColorButton_clicked(); break;
        case 6: _t->theLineEnabledCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->thePointEnabledCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->theFontEnabledCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->thePolygonEnabledCheckBox_clicked(); break;
        case 10: _t->theLineThicknessInput_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->thePolygonThicknessInput_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->thePolygonFilledCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->thePointFilledCheckbox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->theFontPointSizeSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->theFontColorPushButton_clicked(); break;
        case 16: _t->theFontScaleInput_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->theDisableAllButton_clicked(); break;
        case 18: _t->theEnableAllButton_clicked(); break;
        case 19: _t->theFontFamilyNameComboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->theFontStyleNameComboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->theFontShearInput_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->theFontRotationInput_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtVectorEditorDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtVectorEditorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtVectorEditorDialog,
      qt_meta_data_ossimQtVectorEditorDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtVectorEditorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtVectorEditorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtVectorEditorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtVectorEditorDialog))
        return static_cast<void*>(const_cast< ossimQtVectorEditorDialog*>(this));
    if (!strcmp(_clname, "Ui::ossimQtVectorEditorDialog"))
        return static_cast< Ui::ossimQtVectorEditorDialog*>(const_cast< ossimQtVectorEditorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtVectorEditorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
