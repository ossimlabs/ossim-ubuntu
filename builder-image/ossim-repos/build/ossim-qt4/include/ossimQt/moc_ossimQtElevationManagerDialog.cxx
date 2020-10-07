/****************************************************************************
** Meta object code from reading C++ file 'ossimQtElevationManagerDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtElevationManagerDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtElevationManagerDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtElevationManagerDialog[] = {

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
      31,   30,   30,   30, 0x0a,
      65,   30,   30,   30, 0x0a,
      86,   30,   30,   30, 0x0a,
     108,   30,   30,   30, 0x0a,
     130,   30,   30,   30, 0x0a,
     152,   30,   30,   30, 0x0a,
     177,   30,   30,   30, 0x0a,
     201,   30,   30,   30, 0x0a,
     226,   30,   30,   30, 0x0a,
     254,   30,   30,   30, 0x0a,
     276,   30,   30,   30, 0x0a,
     302,   30,   30,   30, 0x0a,
     331,   30,   30,   30, 0x0a,
     350,   30,   30,   30, 0x0a,
     373,   30,   30,   30, 0x0a,
     402,   30,   30,   30, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtElevationManagerDialog[] = {
    "ossimQtElevationManagerDialog\0\0"
    "elevationEnabledCheckBoxClicked()\0"
    "closeButtonClicked()\0addDirectoryClicked()\0"
    "removeButtonClicked()\0moveUpButtonClicked()\0"
    "removeAllButtonClicked()\0"
    "moveDownButtonClicked()\0"
    "moveToTopButtonClicked()\0"
    "moveToBottomButtonClicked()\0"
    "mosaicButtonClicked()\0autoLoadCheckBoxClicked()\0"
    "autoSortingCheckBoxClicked()\0"
    "addButtonClicked()\0elevOffsetChanged(int)\0"
    "autoRefreshCheckBoxClicked()\0"
    "languageChange()\0"
};

void ossimQtElevationManagerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtElevationManagerDialog *_t = static_cast<ossimQtElevationManagerDialog *>(_o);
        switch (_id) {
        case 0: _t->elevationEnabledCheckBoxClicked(); break;
        case 1: _t->closeButtonClicked(); break;
        case 2: _t->addDirectoryClicked(); break;
        case 3: _t->removeButtonClicked(); break;
        case 4: _t->moveUpButtonClicked(); break;
        case 5: _t->removeAllButtonClicked(); break;
        case 6: _t->moveDownButtonClicked(); break;
        case 7: _t->moveToTopButtonClicked(); break;
        case 8: _t->moveToBottomButtonClicked(); break;
        case 9: _t->mosaicButtonClicked(); break;
        case 10: _t->autoLoadCheckBoxClicked(); break;
        case 11: _t->autoSortingCheckBoxClicked(); break;
        case 12: _t->addButtonClicked(); break;
        case 13: _t->elevOffsetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->autoRefreshCheckBoxClicked(); break;
        case 15: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtElevationManagerDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtElevationManagerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtElevationManagerDialog,
      qt_meta_data_ossimQtElevationManagerDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtElevationManagerDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtElevationManagerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtElevationManagerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtElevationManagerDialog))
        return static_cast<void*>(const_cast< ossimQtElevationManagerDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtElevationManagerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
