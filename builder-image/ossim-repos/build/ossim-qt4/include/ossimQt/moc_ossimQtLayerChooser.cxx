/****************************************************************************
** Meta object code from reading C++ file 'ossimQtLayerChooser.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtLayerChooser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtLayerChooser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtLayerChooser[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      36,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      98,   20,   20,   20, 0x0a,
     123,   20,   20,   20, 0x0a,
     149,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtLayerChooser[] = {
    "ossimQtLayerChooser\0\0selecteObjects\0"
    "applySelected(ossimConnectableObject::ConnectableObjectList&)\0"
    "theApplyButton_clicked()\0"
    "theCancelButton_clicked()\0languageChange()\0"
};

void ossimQtLayerChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtLayerChooser *_t = static_cast<ossimQtLayerChooser *>(_o);
        switch (_id) {
        case 0: _t->applySelected((*reinterpret_cast< ossimConnectableObject::ConnectableObjectList(*)>(_a[1]))); break;
        case 1: _t->theApplyButton_clicked(); break;
        case 2: _t->theCancelButton_clicked(); break;
        case 3: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtLayerChooser::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtLayerChooser::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtLayerChooser,
      qt_meta_data_ossimQtLayerChooser, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtLayerChooser::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtLayerChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtLayerChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtLayerChooser))
        return static_cast<void*>(const_cast< ossimQtLayerChooser*>(this));
    if (!strcmp(_clname, "Ui::ossimQtLayerChooser"))
        return static_cast< Ui::ossimQtLayerChooser*>(const_cast< ossimQtLayerChooser*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtLayerChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ossimQtLayerChooser::applySelected(ossimConnectableObject::ConnectableObjectList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
