/****************************************************************************
** Meta object code from reading C++ file 'ossimQtImageInfoDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtImageInfoDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtImageInfoDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtImageInfoDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      45,   23,   23,   23, 0x0a,
      65,   23,   23,   23, 0x0a,
      94,   23,   23,   23, 0x0a,
     130,   23,   23,   23, 0x0a,
     158,   23,   23,   23, 0x0a,
     187,   23,   23,   23, 0x0a,
     224,   23,   23,   23, 0x0a,
     256,   23,   23,   23, 0x0a,
     292,   23,   23,   23, 0x0a,
     323,   23,   23,   23, 0x0a,
     360,   23,   23,   23, 0x0a,
     398,   23,   23,   23, 0x0a,
     437,   23,   23,   23, 0x0a,
     471,   23,   23,   23, 0x0a,
     505,   23,   23,   23, 0x0a,
     540,   23,   23,   23, 0x0a,
     575,   23,   23,   23, 0x0a,
     610,   23,   23,   23, 0x0a,
     644,   23,   23,   23, 0x0a,
     671,  668,   23,   23, 0x0a,
     707,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtImageInfoDialog[] = {
    "ossimQtImageInfoDialog\0\0closeButtonClicked()\0"
    "helpButtonClicked()\0scanForMinMaxButtonClicked()\0"
    "scanForValidVerticesButtonClicked()\0"
    "layerComboBoxActivated(int)\0"
    "bandSpinBoxValueChanged(int)\0"
    "projectionComboBoxActivated(QString)\0"
    "datumComboBoxActivated(QString)\0"
    "pixelTypeComboBoxActivated(QString)\0"
    "zoneComboBoxActivated(QString)\0"
    "hemisphereComboBoxActivated(QString)\0"
    "originLatitudeLineEditReturnPressed()\0"
    "centralMeridianLineEditReturnPressed()\0"
    "tiePointX_LineEditReturnPressed()\0"
    "tiePointY_LineEditReturnPressed()\0"
    "parallelOneLineEditReturnPressed()\0"
    "parallelTwoLineEditReturnPressed()\0"
    "resetProjectionPushButtonClicked()\0"
    "saveProjectionPushButtonClicked()\0"
    "customDialogHasClosed()\0qs\0"
    "imageInfoTabWidgetSelected(QString)\0"
    "languageChange()\0"
};

void ossimQtImageInfoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtImageInfoDialog *_t = static_cast<ossimQtImageInfoDialog *>(_o);
        switch (_id) {
        case 0: _t->closeButtonClicked(); break;
        case 1: _t->helpButtonClicked(); break;
        case 2: _t->scanForMinMaxButtonClicked(); break;
        case 3: _t->scanForValidVerticesButtonClicked(); break;
        case 4: _t->layerComboBoxActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->bandSpinBoxValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->projectionComboBoxActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->datumComboBoxActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->pixelTypeComboBoxActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->zoneComboBoxActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->hemisphereComboBoxActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->originLatitudeLineEditReturnPressed(); break;
        case 12: _t->centralMeridianLineEditReturnPressed(); break;
        case 13: _t->tiePointX_LineEditReturnPressed(); break;
        case 14: _t->tiePointY_LineEditReturnPressed(); break;
        case 15: _t->parallelOneLineEditReturnPressed(); break;
        case 16: _t->parallelTwoLineEditReturnPressed(); break;
        case 17: _t->resetProjectionPushButtonClicked(); break;
        case 18: _t->saveProjectionPushButtonClicked(); break;
        case 19: _t->customDialogHasClosed(); break;
        case 20: _t->imageInfoTabWidgetSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtImageInfoDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtImageInfoDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtImageInfoDialog,
      qt_meta_data_ossimQtImageInfoDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtImageInfoDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtImageInfoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtImageInfoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtImageInfoDialog))
        return static_cast<void*>(const_cast< ossimQtImageInfoDialog*>(this));
    if (!strcmp(_clname, "Ui::ossimQtImageInfoDialog"))
        return static_cast< Ui::ossimQtImageInfoDialog*>(const_cast< ossimQtImageInfoDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtImageInfoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
