/****************************************************************************
** Meta object code from reading C++ file 'ossimQtBandSelectorDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtBandSelectorDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtBandSelectorDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtBandSelectorDialog[] = {

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
      27,   26,   26,   26, 0x0a,
      47,   26,   26,   26, 0x0a,
      67,   26,   26,   26, 0x0a,
      88,   26,   26,   26, 0x0a,
     109,   26,   26,   26, 0x0a,
     129,   26,   26,   26, 0x0a,
     154,   26,   26,   26, 0x0a,
     182,   26,   26,   26, 0x0a,
     203,   26,   26,   26, 0x0a,
     224,   26,   26,   26, 0x0a,
     240,   26,   26,   26, 0x0a,
     259,   26,   26,   26, 0x0a,
     280,   26,   26,   26, 0x0a,
     300,   26,   26,   26, 0x0a,
     318,   26,   26,   26, 0x0a,
     357,   26,   26,   26, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtBandSelectorDialog[] = {
    "ossimQtBandSelectorDialog\0\0"
    "greyButtonClicked()\0trueButtonClicked()\0"
    "nBandButtonClicked()\0clearButtonClicked()\0"
    "downButtonClicked()\0moveToTopButtonClicked()\0"
    "moveToBottomButtonClicked()\0"
    "applyButtonClicked()\0closeButtonClicked()\0"
    "updateDisplay()\0allButtonClicked()\0"
    "rightButtonClicked()\0leftButtonClicked()\0"
    "upButtonClicked()\0"
    "availableBandClicked(QListWidgetItem*)\0"
    "languageChange()\0"
};

void ossimQtBandSelectorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtBandSelectorDialog *_t = static_cast<ossimQtBandSelectorDialog *>(_o);
        switch (_id) {
        case 0: _t->greyButtonClicked(); break;
        case 1: _t->trueButtonClicked(); break;
        case 2: _t->nBandButtonClicked(); break;
        case 3: _t->clearButtonClicked(); break;
        case 4: _t->downButtonClicked(); break;
        case 5: _t->moveToTopButtonClicked(); break;
        case 6: _t->moveToBottomButtonClicked(); break;
        case 7: _t->applyButtonClicked(); break;
        case 8: _t->closeButtonClicked(); break;
        case 9: _t->updateDisplay(); break;
        case 10: _t->allButtonClicked(); break;
        case 11: _t->rightButtonClicked(); break;
        case 12: _t->leftButtonClicked(); break;
        case 13: _t->upButtonClicked(); break;
        case 14: _t->availableBandClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 15: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtBandSelectorDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtBandSelectorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtBandSelectorDialog,
      qt_meta_data_ossimQtBandSelectorDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtBandSelectorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtBandSelectorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtBandSelectorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtBandSelectorDialog))
        return static_cast<void*>(const_cast< ossimQtBandSelectorDialog*>(this));
    if (!strcmp(_clname, "Ui::ossimQtBandSelectorDialog"))
        return static_cast< Ui::ossimQtBandSelectorDialog*>(const_cast< ossimQtBandSelectorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtBandSelectorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
