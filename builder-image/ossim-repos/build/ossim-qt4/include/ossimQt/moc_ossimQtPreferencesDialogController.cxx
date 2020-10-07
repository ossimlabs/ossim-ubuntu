/****************************************************************************
** Meta object code from reading C++ file 'ossimQtPreferencesDialogController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtPreferencesDialogController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtPreferencesDialogController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtPreferencesDialogController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   35,   35,   35, 0x0a,
      44,   35,   35,   35, 0x0a,
      56,   35,   35,   35, 0x0a,
      71,   35,   35,   35, 0x0a,
      86,   35,   35,   35, 0x0a,
     109,  104,   35,   35, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtPreferencesDialogController[] = {
    "ossimQtPreferencesDialogController\0\0"
    "close()\0addPlugin()\0removePlugin()\0"
    "reloadPlugin()\0selectAllPlugin()\0item\0"
    "currentPluginSelectionChanged(QListWidgetItem*)\0"
};

void ossimQtPreferencesDialogController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtPreferencesDialogController *_t = static_cast<ossimQtPreferencesDialogController *>(_o);
        switch (_id) {
        case 0: _t->close(); break;
        case 1: _t->addPlugin(); break;
        case 2: _t->removePlugin(); break;
        case 3: _t->reloadPlugin(); break;
        case 4: _t->selectAllPlugin(); break;
        case 5: _t->currentPluginSelectionChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtPreferencesDialogController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtPreferencesDialogController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ossimQtPreferencesDialogController,
      qt_meta_data_ossimQtPreferencesDialogController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtPreferencesDialogController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtPreferencesDialogController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtPreferencesDialogController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtPreferencesDialogController))
        return static_cast<void*>(const_cast< ossimQtPreferencesDialogController*>(this));
    return QObject::qt_metacast(_clname);
}

int ossimQtPreferencesDialogController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
