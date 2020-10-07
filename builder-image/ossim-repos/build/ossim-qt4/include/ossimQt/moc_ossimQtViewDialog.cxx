/****************************************************************************
** Meta object code from reading C++ file 'ossimQtViewDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtViewDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtViewDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtViewDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      36,   18,   18,   18, 0x0a,
      58,   18,   18,   18, 0x0a,
      80,   18,   18,   18, 0x0a,
     112,   18,   18,   18, 0x0a,
     137,   18,   18,   18, 0x0a,
     168,  162,   18,   18, 0x0a,
     208,  162,   18,   18, 0x0a,
     246,   18,   18,   18, 0x0a,
     272,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtViewDialog[] = {
    "ossimQtViewDialog\0\0setDefaultView()\0"
    "closeButton_clicked()\0applyButton_clicked()\0"
    "statePlaneRadioButton_clicked()\0"
    "mapRadioButton_clicked()\0"
    "identityButton_clicked()\0value\0"
    "projectionComboBox_textChanged(QString)\0"
    "projectionComboBox_activated(QString)\0"
    "propagateButton_clicked()\0languageChange()\0"
};

void ossimQtViewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtViewDialog *_t = static_cast<ossimQtViewDialog *>(_o);
        switch (_id) {
        case 0: _t->setDefaultView(); break;
        case 1: _t->closeButton_clicked(); break;
        case 2: _t->applyButton_clicked(); break;
        case 3: _t->statePlaneRadioButton_clicked(); break;
        case 4: _t->mapRadioButton_clicked(); break;
        case 5: _t->identityButton_clicked(); break;
        case 6: _t->projectionComboBox_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->projectionComboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->propagateButton_clicked(); break;
        case 9: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtViewDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtViewDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtViewDialog,
      qt_meta_data_ossimQtViewDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtViewDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtViewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtViewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtViewDialog))
        return static_cast<void*>(const_cast< ossimQtViewDialog*>(this));
    if (!strcmp(_clname, "Ui::ossimQtViewDialog"))
        return static_cast< Ui::ossimQtViewDialog*>(const_cast< ossimQtViewDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtViewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
