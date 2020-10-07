/****************************************************************************
** Meta object code from reading C++ file 'ossimQtSingleImageWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtSingleImageWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtSingleImageWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtSingleImageWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   26,   25,   25, 0x0a,
      67,   25,   25,   25, 0x08,
      91,   84,   25,   25, 0x08,
     123,   25,   25,   25, 0x08,
     135,   25,   25,   25, 0x08,
     148,   25,   25,   25, 0x08,
     165,   25,   25,   25, 0x08,
     179,   25,   25,   25, 0x08,
     193,   25,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtSingleImageWindow[] = {
    "ossimQtSingleImageWindow\0\0evt\0"
    "trackImageWidget(ossimQtMouseEvent*)\0"
    "refreshDisplay()\0action\0"
    "changeResolutionLevel(QAction*)\0"
    "openImage()\0closeImage()\0editImageChain()\0"
    "exportImage()\0closeWindow()\0about()\0"
};

void ossimQtSingleImageWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtSingleImageWindow *_t = static_cast<ossimQtSingleImageWindow *>(_o);
        switch (_id) {
        case 0: _t->trackImageWidget((*reinterpret_cast< ossimQtMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->refreshDisplay(); break;
        case 2: _t->changeResolutionLevel((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->openImage(); break;
        case 4: _t->closeImage(); break;
        case 5: _t->editImageChain(); break;
        case 6: _t->exportImage(); break;
        case 7: _t->closeWindow(); break;
        case 8: _t->about(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ossimQtSingleImageWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtSingleImageWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ossimQtSingleImageWindow,
      qt_meta_data_ossimQtSingleImageWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtSingleImageWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtSingleImageWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtSingleImageWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtSingleImageWindow))
        return static_cast<void*>(const_cast< ossimQtSingleImageWindow*>(this));
    if (!strcmp(_clname, "ossimConnectableObject"))
        return static_cast< ossimConnectableObject*>(const_cast< ossimQtSingleImageWindow*>(this));
    if (!strcmp(_clname, "ossimConnectableDisplayListener"))
        return static_cast< ossimConnectableDisplayListener*>(const_cast< ossimQtSingleImageWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ossimQtSingleImageWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
