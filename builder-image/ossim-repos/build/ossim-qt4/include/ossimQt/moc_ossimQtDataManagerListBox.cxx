/****************************************************************************
** Meta object code from reading C++ file 'ossimQtDataManagerListBox.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtDataManagerListBox.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtDataManagerListBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtDataManagerListBox[] = {

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
      27,   26,   26,   26, 0x0a,
      51,   26,   26,   26, 0x0a,
      78,   26,   26,   26, 0x0a,
     102,   26,   26,   26, 0x0a,
     125,   26,   26,   26, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtDataManagerListBox[] = {
    "ossimQtDataManagerListBox\0\0"
    "deleteSelectedObjects()\0"
    "duplicateSelectedObjects()\0"
    "mosaicSelectedObjects()\0blendSelectedObjects()\0"
    "featherSelectedObjects()\0"
};

void ossimQtDataManagerListBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtDataManagerListBox *_t = static_cast<ossimQtDataManagerListBox *>(_o);
        switch (_id) {
        case 0: _t->deleteSelectedObjects(); break;
        case 1: _t->duplicateSelectedObjects(); break;
        case 2: _t->mosaicSelectedObjects(); break;
        case 3: _t->blendSelectedObjects(); break;
        case 4: _t->featherSelectedObjects(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ossimQtDataManagerListBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtDataManagerListBox::staticMetaObject = {
    { &Q3ListBox::staticMetaObject, qt_meta_stringdata_ossimQtDataManagerListBox,
      qt_meta_data_ossimQtDataManagerListBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtDataManagerListBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtDataManagerListBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtDataManagerListBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtDataManagerListBox))
        return static_cast<void*>(const_cast< ossimQtDataManagerListBox*>(this));
    return Q3ListBox::qt_metacast(_clname);
}

int ossimQtDataManagerListBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3ListBox::qt_metacall(_c, _id, _a);
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
