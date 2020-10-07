/****************************************************************************
** Meta object code from reading C++ file 'ossimQtIgenDialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtIgenDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtIgenDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtIgenDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      40,   18,   18,   18, 0x0a,
      70,   18,   18,   18, 0x0a,
     102,   18,   18,   18, 0x0a,
     129,   18,   18,   18, 0x0a,
     156,   18,   18,   18, 0x0a,
     185,   18,   18,   18, 0x0a,
     216,   18,   18,   18, 0x0a,
     250,   18,   18,   18, 0x0a,
     279,   18,   18,   18, 0x0a,
     302,   18,   18,   18, 0x0a,
     337,  332,   18,   18, 0x0a,
     374,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtIgenDialog[] = {
    "ossimQtIgenDialog\0\0closeButtonClicked()\0"
    "outputFilePushButtonClicked()\0"
    "saveSpecFilePushButtonClicked()\0"
    "runIgenPushButtonClicked()\0"
    "gsdLineEditReturnPressed()\0"
    "linesLineEditReturnPressed()\0"
    "samplesLineEditReturnPressed()\0"
    "outputFileLineEditReturnPressed()\0"
    "sceneRectPushButtonClicked()\0"
    "imageWidgetDestroyed()\0"
    "editWriterPushButtonClicked()\0type\0"
    "outputTypeComboBoxActivated(QString)\0"
    "languageChange()\0"
};

void ossimQtIgenDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtIgenDialog *_t = static_cast<ossimQtIgenDialog *>(_o);
        switch (_id) {
        case 0: _t->closeButtonClicked(); break;
        case 1: _t->outputFilePushButtonClicked(); break;
        case 2: _t->saveSpecFilePushButtonClicked(); break;
        case 3: _t->runIgenPushButtonClicked(); break;
        case 4: _t->gsdLineEditReturnPressed(); break;
        case 5: _t->linesLineEditReturnPressed(); break;
        case 6: _t->samplesLineEditReturnPressed(); break;
        case 7: _t->outputFileLineEditReturnPressed(); break;
        case 8: _t->sceneRectPushButtonClicked(); break;
        case 9: _t->imageWidgetDestroyed(); break;
        case 10: _t->editWriterPushButtonClicked(); break;
        case 11: _t->outputTypeComboBoxActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->languageChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtIgenDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtIgenDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ossimQtIgenDialog,
      qt_meta_data_ossimQtIgenDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtIgenDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtIgenDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtIgenDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtIgenDialog))
        return static_cast<void*>(const_cast< ossimQtIgenDialog*>(this));
    if (!strcmp(_clname, "Ui::ossimQtIgenDialog"))
        return static_cast< Ui::ossimQtIgenDialog*>(const_cast< ossimQtIgenDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ossimQtIgenDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
