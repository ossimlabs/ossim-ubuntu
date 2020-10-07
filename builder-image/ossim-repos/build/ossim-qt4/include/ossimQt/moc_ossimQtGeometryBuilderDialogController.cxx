/****************************************************************************
** Meta object code from reading C++ file 'ossimQtGeometryBuilderDialogController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtGeometryBuilderDialogController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtGeometryBuilderDialogController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtGeometryBuilderDialogController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      61,   40,   39,   39, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtGeometryBuilderDialogController[] = {
    "ossimQtGeometryBuilderDialogController\0"
    "\0overrideFlag,geomKwl\0"
    "saveOssimGeometryOverride(bool&,ossimKeywordlist)\0"
};

void ossimQtGeometryBuilderDialogController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtGeometryBuilderDialogController *_t = static_cast<ossimQtGeometryBuilderDialogController *>(_o);
        switch (_id) {
        case 0: _t->saveOssimGeometryOverride((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const ossimKeywordlist(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtGeometryBuilderDialogController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtGeometryBuilderDialogController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ossimQtGeometryBuilderDialogController,
      qt_meta_data_ossimQtGeometryBuilderDialogController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtGeometryBuilderDialogController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtGeometryBuilderDialogController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtGeometryBuilderDialogController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtGeometryBuilderDialogController))
        return static_cast<void*>(const_cast< ossimQtGeometryBuilderDialogController*>(this));
    return QObject::qt_metacast(_clname);
}

int ossimQtGeometryBuilderDialogController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ossimQtGeometryBuilderDialogController::saveOssimGeometryOverride(bool & _t1, const ossimKeywordlist & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
