/****************************************************************************
** Meta object code from reading C++ file 'ossimQtPreferencesDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtPreferencesDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtPreferencesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtPreferencesDialog[] = {

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
      26,   25,   25,   25, 0x0a,
      55,   25,   25,   25, 0x0a,
      87,   25,   25,   25, 0x0a,
     117,  112,   25,   25, 0x0a,
     164,   25,   25,   25, 0x0a,
     199,   25,   25,   25, 0x0a,
     231,   25,   25,   25, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtPreferencesDialog[] = {
    "ossimQtPreferencesDialog\0\0"
    "theAddPluginButton_clicked()\0"
    "theRemovePluginButton_clicked()\0"
    "theCloseButton_clicked()\0item\0"
    "thePluginList_currentChanged(QListWidgetItem*)\0"
    "theSelectAllPluginButton_clicked()\0"
    "theReloadPluginButton_clicked()\0"
    "languageChange()\0"
};

void ossimQtPreferencesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtPreferencesDialog *_t = static_cast<ossimQtPreferencesDialog *>(_o);
        switch (_id) {
        case 0: _t->theAddPluginButton_clicked(); break;
        case 1: _t->theRemovePluginButton_clicked(); break;
        case 2: _t->theCloseButton_clicked(); break;
        case 3: _t->thePluginList_currentChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->theSelectAllPluginButton_clicked(); break;
        case 5: _t->theReloadPluginButton_clicked(); break;
        case 6: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtPreferencesDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtPreferencesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtPreferencesDialog,
      qt_meta_data_ossimQtPreferencesDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtPreferencesDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtPreferencesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtPreferencesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtPreferencesDialog))
        return static_cast<void*>(const_cast< ossimQtPreferencesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtPreferencesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
