/****************************************************************************
** Meta object code from reading C++ file 'ossimQtMatrixPropertyDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtMatrixPropertyDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtMatrixPropertyDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtMatrixPropertyDialog[] = {

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
      29,   28,   28,   28, 0x0a,
      58,   28,   28,   28, 0x0a,
      82,   28,   28,   28, 0x0a,
     107,   28,   28,   28, 0x0a,
     132,   28,   28,   28, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtMatrixPropertyDialog[] = {
    "ossimQtMatrixPropertyDialog\0\0"
    "theNormalizeButton_clicked()\0"
    "theZeroButton_clicked()\0"
    "theApplyButton_clicked()\0"
    "theCloseButton_clicked()\0languageChange()\0"
};

void ossimQtMatrixPropertyDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtMatrixPropertyDialog *_t = static_cast<ossimQtMatrixPropertyDialog *>(_o);
        switch (_id) {
        case 0: _t->theNormalizeButton_clicked(); break;
        case 1: _t->theZeroButton_clicked(); break;
        case 2: _t->theApplyButton_clicked(); break;
        case 3: _t->theCloseButton_clicked(); break;
        case 4: _t->languageChange(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ossimQtMatrixPropertyDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtMatrixPropertyDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtMatrixPropertyDialog,
      qt_meta_data_ossimQtMatrixPropertyDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtMatrixPropertyDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtMatrixPropertyDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtMatrixPropertyDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtMatrixPropertyDialog))
        return static_cast<void*>(const_cast< ossimQtMatrixPropertyDialog*>(this));
    if (!strcmp(_clname, "Ui::ossimQtMatrixPropertyDialog"))
        return static_cast< Ui::ossimQtMatrixPropertyDialog*>(const_cast< ossimQtMatrixPropertyDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtMatrixPropertyDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
