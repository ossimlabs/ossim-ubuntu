/****************************************************************************
** Meta object code from reading C++ file 'ossimQtHistogramDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtHistogramDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtHistogramDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtHistogramDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x0a,
      45,   23,   23,   23, 0x0a,
      66,   23,   23,   23, 0x0a,
      87,   23,   23,   23, 0x0a,
     111,   23,   23,   23, 0x0a,
     141,   23,   23,   23, 0x0a,
     172,   23,   23,   23, 0x0a,
     200,   23,   23,   23, 0x0a,
     229,   23,   23,   23, 0x0a,
     253,   23,   23,   23, 0x0a,
     283,   23,   23,   23, 0x0a,
     318,  313,   23,   23, 0x0a,
     352,  313,   23,   23, 0x0a,
     379,   23,   23,   23, 0x0a,
     416,   23,   23,   23, 0x0a,
     449,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtHistogramDialog[] = {
    "ossimQtHistogramDialog\0\0closeButtonClicked()\0"
    "applyButtonClicked()\0resetButtonClicked()\0"
    "enableCheckBoxClicked()\0"
    "lowClipPercentReturnPressed()\0"
    "highClipPercentReturnPressed()\0"
    "lowClipValueReturnPressed()\0"
    "highClipValueReturnPressed()\0"
    "midPointReturnPressed()\0"
    "outputMinValueReturnPressed()\0"
    "outputMaxValueReturnPressed()\0item\0"
    "stretchModeComboBoxActivated(int)\0"
    "bandComboBoxActivated(int)\0"
    "histogramFileLineEditReturnPressed()\0"
    "histogramFilePushButtonClicked()\0"
    "languageChange()\0"
};

void ossimQtHistogramDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtHistogramDialog *_t = static_cast<ossimQtHistogramDialog *>(_o);
        switch (_id) {
        case 0: _t->closeButtonClicked(); break;
        case 1: _t->applyButtonClicked(); break;
        case 2: _t->resetButtonClicked(); break;
        case 3: _t->enableCheckBoxClicked(); break;
        case 4: _t->lowClipPercentReturnPressed(); break;
        case 5: _t->highClipPercentReturnPressed(); break;
        case 6: _t->lowClipValueReturnPressed(); break;
        case 7: _t->highClipValueReturnPressed(); break;
        case 8: _t->midPointReturnPressed(); break;
        case 9: _t->outputMinValueReturnPressed(); break;
        case 10: _t->outputMaxValueReturnPressed(); break;
        case 11: _t->stretchModeComboBoxActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->bandComboBoxActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->histogramFileLineEditReturnPressed(); break;
        case 14: _t->histogramFilePushButtonClicked(); break;
        case 15: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtHistogramDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtHistogramDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtHistogramDialog,
      qt_meta_data_ossimQtHistogramDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtHistogramDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtHistogramDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtHistogramDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtHistogramDialog))
        return static_cast<void*>(const_cast< ossimQtHistogramDialog*>(this));
    if (!strcmp(_clname, "Ui::ossimQtHistogramDialog"))
        return static_cast< Ui::ossimQtHistogramDialog*>(const_cast< ossimQtHistogramDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtHistogramDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
