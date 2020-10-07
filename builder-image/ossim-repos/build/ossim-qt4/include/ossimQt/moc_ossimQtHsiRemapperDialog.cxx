/****************************************************************************
** Meta object code from reading C++ file 'ossimQtHsiRemapperDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtHsiRemapperDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtHsiRemapperDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtHsiRemapperDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   25,   25,   25, 0x0a,
      45,   25,   25,   25, 0x0a,
      67,   25,   25,   25, 0x0a,
      88,   25,   25,   25, 0x0a,
     108,   25,   25,   25, 0x0a,
     128,   25,   25,   25, 0x0a,
     151,   25,   25,   25, 0x0a,
     176,  170,   25,   25, 0x0a,
     203,  170,   25,   25, 0x0a,
     232,  170,   25,   25, 0x0a,
     262,  170,   25,   25, 0x0a,
     296,  170,   25,   25, 0x0a,
     329,  170,   25,   25, 0x0a,
     363,  170,   25,   25, 0x0a,
     398,   25,   25,   25, 0x0a,
     420,   25,   25,   25, 0x0a,
     446,   25,   25,   25, 0x0a,
     470,   25,   25,   25, 0x0a,
     491,   25,   25,   25, 0x0a,
     522,   25,   25,   25, 0x0a,
     555,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtHsiRemapperDialog[] = {
    "ossimQtHsiRemapperDialog\0\0redButtonClicked()\0"
    "yellowButtonClicked()\0greenButtonClicked()\0"
    "cyanButtonClicked()\0blueButtonClicked()\0"
    "magentaButtonClicked()\0allButtonClicked()\0"
    "value\0hueOffsetValueChanged(int)\0"
    "hueLowRangeValueChanged(int)\0"
    "hueHighRangeValueChanged(int)\0"
    "saturationOffsetValueChanged(int)\0"
    "intensityOffsetValueChanged(int)\0"
    "lowIntensityClipValueChanged(int)\0"
    "highIntensityClipValueChanged(int)\0"
    "enableButtonClicked()\0resetGroupButtonClicked()\0"
    "resetAllButtonClicked()\0closeButtonClicked()\0"
    "hueBlendRangeValueChanged(int)\0"
    "whiteObjectClipValueChanged(int)\0"
    "languageChange()\0"
};

void ossimQtHsiRemapperDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtHsiRemapperDialog *_t = static_cast<ossimQtHsiRemapperDialog *>(_o);
        switch (_id) {
        case 0: _t->redButtonClicked(); break;
        case 1: _t->yellowButtonClicked(); break;
        case 2: _t->greenButtonClicked(); break;
        case 3: _t->cyanButtonClicked(); break;
        case 4: _t->blueButtonClicked(); break;
        case 5: _t->magentaButtonClicked(); break;
        case 6: _t->allButtonClicked(); break;
        case 7: _t->hueOffsetValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->hueLowRangeValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->hueHighRangeValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->saturationOffsetValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->intensityOffsetValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->lowIntensityClipValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->highIntensityClipValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->enableButtonClicked(); break;
        case 15: _t->resetGroupButtonClicked(); break;
        case 16: _t->resetAllButtonClicked(); break;
        case 17: _t->closeButtonClicked(); break;
        case 18: _t->hueBlendRangeValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->whiteObjectClipValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtHsiRemapperDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtHsiRemapperDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtHsiRemapperDialog,
      qt_meta_data_ossimQtHsiRemapperDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtHsiRemapperDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtHsiRemapperDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtHsiRemapperDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtHsiRemapperDialog))
        return static_cast<void*>(const_cast< ossimQtHsiRemapperDialog*>(this));
    if (!strcmp(_clname, "Ui::ossimQtHsiRemapperDialog"))
        return static_cast< Ui::ossimQtHsiRemapperDialog*>(const_cast< ossimQtHsiRemapperDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtHsiRemapperDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
