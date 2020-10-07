/****************************************************************************
** Meta object code from reading C++ file 'ossimQtGeometryBuilderDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtGeometryBuilderDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtGeometryBuilderDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtGeometryBuilderDialog[] = {

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
      30,   29,   29,   29, 0x0a,
      64,   29,   29,   29, 0x0a,
      90,   29,   29,   29, 0x0a,
     123,   29,   29,   29, 0x0a,
     162,   29,   29,   29, 0x0a,
     204,   29,   29,   29, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtGeometryBuilderDialog[] = {
    "ossimQtGeometryBuilderDialog\0\0"
    "theGdalWktConvertButton_clicked()\0"
    "theCancelButton_clicked()\0"
    "theOssimSaveGeomButton_clicked()\0"
    "theGdalWktLoadFromFileButton_clicked()\0"
    "theOssimProjectionList_activated(QString)\0"
    "languageChange()\0"
};

void ossimQtGeometryBuilderDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtGeometryBuilderDialog *_t = static_cast<ossimQtGeometryBuilderDialog *>(_o);
        switch (_id) {
        case 0: _t->theGdalWktConvertButton_clicked(); break;
        case 1: _t->theCancelButton_clicked(); break;
        case 2: _t->theOssimSaveGeomButton_clicked(); break;
        case 3: _t->theGdalWktLoadFromFileButton_clicked(); break;
        case 4: _t->theOssimProjectionList_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtGeometryBuilderDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtGeometryBuilderDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtGeometryBuilderDialog,
      qt_meta_data_ossimQtGeometryBuilderDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtGeometryBuilderDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtGeometryBuilderDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtGeometryBuilderDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtGeometryBuilderDialog))
        return static_cast<void*>(const_cast< ossimQtGeometryBuilderDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtGeometryBuilderDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
