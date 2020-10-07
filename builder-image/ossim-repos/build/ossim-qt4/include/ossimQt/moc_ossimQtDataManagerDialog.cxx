/****************************************************************************
** Meta object code from reading C++ file 'ossimQtDataManagerDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtDataManagerDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtDataManagerDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtDataManagerDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      38,   26,   25,   25, 0x0a,
      72,   25,   25,   25, 0x0a,
      97,   25,   25,   25, 0x0a,
     124,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtDataManagerDialog[] = {
    "ossimQtDataManagerDialog\0\0dataManager\0"
    "setDataManager(ossimDataManager*)\0"
    "theCloseButton_clicked()\0"
    "theDisplayButton_clicked()\0languageChange()\0"
};

void ossimQtDataManagerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtDataManagerDialog *_t = static_cast<ossimQtDataManagerDialog *>(_o);
        switch (_id) {
        case 0: _t->setDataManager((*reinterpret_cast< ossimDataManager*(*)>(_a[1]))); break;
        case 1: _t->theCloseButton_clicked(); break;
        case 2: _t->theDisplayButton_clicked(); break;
        case 3: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtDataManagerDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtDataManagerDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtDataManagerDialog,
      qt_meta_data_ossimQtDataManagerDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtDataManagerDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtDataManagerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtDataManagerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtDataManagerDialog))
        return static_cast<void*>(const_cast< ossimQtDataManagerDialog*>(this));
    if (!strcmp(_clname, "Ui::ossimQtDataManagerDialog"))
        return static_cast< Ui::ossimQtDataManagerDialog*>(const_cast< ossimQtDataManagerDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtDataManagerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
