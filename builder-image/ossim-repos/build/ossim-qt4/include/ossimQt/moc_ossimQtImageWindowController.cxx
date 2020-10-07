/****************************************************************************
** Meta object code from reading C++ file 'ossimQtImageWindowController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtImageWindowController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtImageWindowController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtImageWindowController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   29,   29,   29, 0x05,
      51,   43,   29,   29, 0x05,

 // slots: signature, parameters, type, tag, flags
      88,   83,   29,   29, 0x0a,
     118,   29,   29,   29, 0x0a,
     134,   29,   29,   29, 0x0a,
     155,   29,   29,   29, 0x0a,
     169,   29,   29,   29, 0x0a,
     185,   29,   29,   29, 0x0a,
     199,  195,   29,   29, 0x0a,
     245,   29,   29,   29, 0x0a,
     274,  261,   29,   29, 0x0a,
     341,   29,   29,   29, 0x0a,
     360,   29,   29,   29, 0x0a,
     376,   29,   29,   29, 0x0a,
     394,   29,   29,   29, 0x0a,
     405,   29,   29,   29, 0x0a,
     419,   29,   29,   29, 0x0a,
     431,   29,   29,   29, 0x0a,
     453,   29,   29,   29, 0x0a,
     482,   29,   29,   29, 0x0a,
     520,  515,   29,   29, 0x0a,
     558,  547,  542,   29, 0x0a,
     599,  547,  542,   29, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtImageWindowController[] = {
    "ossimQtImageWindowController\0\0"
    "closeSwipe()\0viewObj\0"
    "viewChanged(const ossimObject*)\0view\0"
    "applyView(const ossimObject*)\0"
    "propagateView()\0propagateResampler()\0"
    "fitToWindow()\0refreshWindow()\0fullRes()\0"
    "evt\0trackScrollingImageWidget(ossimQtMouseEvent*)\0"
    "swipeAddLayer()\0layerObjList\0"
    "swipeAddLayerApply(ossimConnectableObject::ConnectableObjectList&)\0"
    "swipeRemoveLayer()\0swipeVertical()\0"
    "swipeHorizontal()\0swipeBox()\0swipeCircle()\0"
    "swipeNone()\0igenDialogDestroyed()\0"
    "informationDialogDestroyed()\0"
    "positionQualityDialogDestroyed()\0flag\0"
    "setIdentityMode(bool)\0bool\0kwl,prefix\0"
    "saveState(ossimKeywordlist&,ossimString)\0"
    "loadState(ossimKeywordlist,ossimString)\0"
};

void ossimQtImageWindowController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtImageWindowController *_t = static_cast<ossimQtImageWindowController *>(_o);
        switch (_id) {
        case 0: _t->closeSwipe(); break;
        case 1: _t->viewChanged((*reinterpret_cast< const ossimObject*(*)>(_a[1]))); break;
        case 2: _t->applyView((*reinterpret_cast< const ossimObject*(*)>(_a[1]))); break;
        case 3: _t->propagateView(); break;
        case 4: _t->propagateResampler(); break;
        case 5: _t->fitToWindow(); break;
        case 6: _t->refreshWindow(); break;
        case 7: _t->fullRes(); break;
        case 8: _t->trackScrollingImageWidget((*reinterpret_cast< ossimQtMouseEvent*(*)>(_a[1]))); break;
        case 9: _t->swipeAddLayer(); break;
        case 10: _t->swipeAddLayerApply((*reinterpret_cast< ossimConnectableObject::ConnectableObjectList(*)>(_a[1]))); break;
        case 11: _t->swipeRemoveLayer(); break;
        case 12: _t->swipeVertical(); break;
        case 13: _t->swipeHorizontal(); break;
        case 14: _t->swipeBox(); break;
        case 15: _t->swipeCircle(); break;
        case 16: _t->swipeNone(); break;
        case 17: _t->igenDialogDestroyed(); break;
        case 18: _t->informationDialogDestroyed(); break;
        case 19: _t->positionQualityDialogDestroyed(); break;
        case 20: _t->setIdentityMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: { bool _r = _t->saveState((*reinterpret_cast< ossimKeywordlist(*)>(_a[1])),(*reinterpret_cast< const ossimString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->loadState((*reinterpret_cast< const ossimKeywordlist(*)>(_a[1])),(*reinterpret_cast< const ossimString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtImageWindowController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtImageWindowController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ossimQtImageWindowController,
      qt_meta_data_ossimQtImageWindowController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtImageWindowController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtImageWindowController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtImageWindowController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtImageWindowController))
        return static_cast<void*>(const_cast< ossimQtImageWindowController*>(this));
    return QObject::qt_metacast(_clname);
}

int ossimQtImageWindowController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void ossimQtImageWindowController::closeSwipe()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ossimQtImageWindowController::viewChanged(const ossimObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
