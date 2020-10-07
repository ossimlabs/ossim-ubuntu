/****************************************************************************
** Meta object code from reading C++ file 'ossimQtBrightnessContrastDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtBrightnessContrastDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtBrightnessContrastDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtBrightnessContrastDialog[] = {

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
      39,   33,   32,   32, 0x0a,
      68,   33,   32,   32, 0x0a,
      95,   32,   32,   32, 0x0a,
     111,   32,   32,   32, 0x0a,
     126,   32,   32,   32, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtBrightnessContrastDialog[] = {
    "ossimQtBrightnessContrastDialog\0\0value\0"
    "brightnessSliderChanged(int)\0"
    "contrastSliderChanged(int)\0enableClicked()\0"
    "resetClicked()\0closeClicked()\0"
};

void ossimQtBrightnessContrastDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtBrightnessContrastDialog *_t = static_cast<ossimQtBrightnessContrastDialog *>(_o);
        switch (_id) {
        case 0: _t->brightnessSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->contrastSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->enableClicked(); break;
        case 3: _t->resetClicked(); break;
        case 4: _t->closeClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtBrightnessContrastDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtBrightnessContrastDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtBrightnessContrastDialog,
      qt_meta_data_ossimQtBrightnessContrastDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtBrightnessContrastDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtBrightnessContrastDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtBrightnessContrastDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtBrightnessContrastDialog))
        return static_cast<void*>(const_cast< ossimQtBrightnessContrastDialog*>(this));
    if (!strcmp(_clname, "ossimConnectableObjectListener"))
        return static_cast< ossimConnectableObjectListener*>(const_cast< ossimQtBrightnessContrastDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtBrightnessContrastDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
