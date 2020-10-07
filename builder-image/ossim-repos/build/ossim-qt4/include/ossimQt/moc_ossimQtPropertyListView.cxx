/****************************************************************************
** Meta object code from reading C++ file 'ossimQtPropertyListView.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtPropertyListView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtPropertyListView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtPropertyListView[] = {

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
      25,   24,   24,   24, 0x0a,
      44,   24,   24,   24, 0x0a,
      60,   24,   24,   24, 0x0a,
      81,   24,   24,   24, 0x0a,
      97,   24,   24,   24, 0x0a,
     120,  118,   24,   24, 0x0a,
     154,  148,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtPropertyListView[] = {
    "ossimQtPropertyListView\0\0updateEditorSize()\0"
    "resetProperty()\0resetAllProperties()\0"
    "applyProperty()\0applyAllProperties()\0"
    "i\0toggleOpen(Q3ListViewItem*)\0i,p,c\0"
    "itemPressed(Q3ListViewItem*,QPoint,int)\0"
};

void ossimQtPropertyListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtPropertyListView *_t = static_cast<ossimQtPropertyListView *>(_o);
        switch (_id) {
        case 0: _t->updateEditorSize(); break;
        case 1: _t->resetProperty(); break;
        case 2: _t->resetAllProperties(); break;
        case 3: _t->applyProperty(); break;
        case 4: _t->applyAllProperties(); break;
        case 5: _t->toggleOpen((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1]))); break;
        case 6: _t->itemPressed((*reinterpret_cast< Q3ListViewItem*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtPropertyListView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtPropertyListView::staticMetaObject = {
    { &Q3ListView::staticMetaObject, qt_meta_stringdata_ossimQtPropertyListView,
      qt_meta_data_ossimQtPropertyListView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtPropertyListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtPropertyListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtPropertyListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtPropertyListView))
        return static_cast<void*>(const_cast< ossimQtPropertyListView*>(this));
    return Q3ListView::qt_metacast(_clname);
}

int ossimQtPropertyListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3ListView::qt_metacall(_c, _id, _a);
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
