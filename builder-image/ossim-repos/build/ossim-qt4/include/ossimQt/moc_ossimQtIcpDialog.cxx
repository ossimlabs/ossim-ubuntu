/****************************************************************************
** Meta object code from reading C++ file 'ossimQtIcpDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtIcpDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtIcpDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtIcpDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      37,   17,   17,   17, 0x0a,
      55,   17,   17,   17, 0x0a,
      76,   17,   17,   17, 0x0a,
      96,   17,   17,   17, 0x0a,
     117,   17,   17,   17, 0x0a,
     141,  138,   17,   17, 0x0a,
     181,   17,   17,   17, 0x0a,
     212,   17,   17,   17, 0x0a,
     226,   17,   17,   17, 0x0a,
     241,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtIcpDialog[] = {
    "ossimQtIcpDialog\0\0startLinePressed()\0"
    "stopLinePressed()\0startSamplePressed()\0"
    "stopSamplePressed()\0outputImagePressed()\0"
    "outputImageClicked()\0qs\0"
    "outputImageWriterMenuActivated(QString)\0"
    "editOutputImageWriterClicked()\0"
    "saveClicked()\0abortClicked()\0"
    "closeClicked()\0"
};

void ossimQtIcpDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtIcpDialog *_t = static_cast<ossimQtIcpDialog *>(_o);
        switch (_id) {
        case 0: _t->startLinePressed(); break;
        case 1: _t->stopLinePressed(); break;
        case 2: _t->startSamplePressed(); break;
        case 3: _t->stopSamplePressed(); break;
        case 4: _t->outputImagePressed(); break;
        case 5: _t->outputImageClicked(); break;
        case 6: _t->outputImageWriterMenuActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->editOutputImageWriterClicked(); break;
        case 8: _t->saveClicked(); break;
        case 9: _t->abortClicked(); break;
        case 10: _t->closeClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtIcpDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtIcpDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtIcpDialog,
      qt_meta_data_ossimQtIcpDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtIcpDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtIcpDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtIcpDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtIcpDialog))
        return static_cast<void*>(const_cast< ossimQtIcpDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtIcpDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
