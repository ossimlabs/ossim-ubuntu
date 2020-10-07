/****************************************************************************
** Meta object code from reading C++ file 'ossimQtImageChainEditorDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtImageChainEditorDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtImageChainEditorDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtImageChainEditorDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   30,   30,   30, 0x0a,
      57,   30,   30,   30, 0x0a,
      86,   30,   30,   30, 0x0a,
     118,   30,   30,   30, 0x0a,
     147,   30,   30,   30, 0x0a,
     182,   30,   30,   30, 0x0a,
     209,   30,   30,   30, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtImageChainEditorDialog[] = {
    "ossimQtImageChainEditorDialog\0\0"
    "closePushButton_clicked()\0"
    "insertBeforeButton_clicked()\0"
    "insertAfterPushButton_clicked()\0"
    "layerComboBox_activated(int)\0"
    "editPropertiesPushButton_clicked()\0"
    "deletePushButton_clicked()\0languageChange()\0"
};

void ossimQtImageChainEditorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtImageChainEditorDialog *_t = static_cast<ossimQtImageChainEditorDialog *>(_o);
        switch (_id) {
        case 0: _t->closePushButton_clicked(); break;
        case 1: _t->insertBeforeButton_clicked(); break;
        case 2: _t->insertAfterPushButton_clicked(); break;
        case 3: _t->layerComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->editPropertiesPushButton_clicked(); break;
        case 5: _t->deletePushButton_clicked(); break;
        case 6: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtImageChainEditorDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtImageChainEditorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtImageChainEditorDialog,
      qt_meta_data_ossimQtImageChainEditorDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtImageChainEditorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtImageChainEditorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtImageChainEditorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtImageChainEditorDialog))
        return static_cast<void*>(const_cast< ossimQtImageChainEditorDialog*>(this));
    if (!strcmp(_clname, "Ui::ossimQtImageChainEditorDialog"))
        return static_cast< Ui::ossimQtImageChainEditorDialog*>(const_cast< ossimQtImageChainEditorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtImageChainEditorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
