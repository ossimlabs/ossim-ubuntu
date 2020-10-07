/****************************************************************************
** Meta object code from reading C++ file 'ossimQtStringListPropertyDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtStringListPropertyDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtStringListPropertyDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtStringListPropertyDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      33,   32,   32,   32, 0x0a,
      58,   32,   32,   32, 0x0a,
      83,   32,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtStringListPropertyDialog[] = {
    "ossimQtStringListPropertyDialog\0\0"
    "theCloseButton_clicked()\0"
    "theApplyButton_clicked()\0languageChange()\0"
};

void ossimQtStringListPropertyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtStringListPropertyDialog *_t = static_cast<ossimQtStringListPropertyDialog *>(_o);
        switch (_id) {
        case 0: _t->theCloseButton_clicked(); break;
        case 1: _t->theApplyButton_clicked(); break;
        case 2: _t->languageChange(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ossimQtStringListPropertyDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtStringListPropertyDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtStringListPropertyDialog,
      qt_meta_data_ossimQtStringListPropertyDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtStringListPropertyDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtStringListPropertyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtStringListPropertyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtStringListPropertyDialog))
        return static_cast<void*>(const_cast< ossimQtStringListPropertyDialog*>(this));
    if (!strcmp(_clname, "Ui::ossimQtStringListPropertyDialog"))
        return static_cast< Ui::ossimQtStringListPropertyDialog*>(const_cast< ossimQtStringListPropertyDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtStringListPropertyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
