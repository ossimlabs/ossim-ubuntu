/****************************************************************************
** Meta object code from reading C++ file 'ossimQtVectorEditorDialogController.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ossim-qt4/include/ossimQt/ossimQtVectorEditorDialogController.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ossimQtVectorEditorDialogController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ossimQtVectorEditorDialogController[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      37,   36,   36,   36, 0x0a,
      45,   36,   36,   36, 0x0a,
      58,   36,   36,   36, 0x0a,
      70,   36,   36,   36, 0x0a,
      85,   36,   36,   36, 0x0a,
      97,   36,   36,   36, 0x0a,
     119,   36,   36,   36, 0x0a,
     140,   36,   36,   36, 0x0a,
     164,   36,   36,   36, 0x0a,
     185,   36,   36,   36, 0x0a,
     208,   36,   36,   36, 0x0a,
     234,   36,   36,   36, 0x0a,
     255,   36,   36,   36, 0x0a,
     278,   36,   36,   36, 0x0a,
     295,   36,   36,   36, 0x0a,
     307,   36,   36,   36, 0x0a,
     323,   36,   36,   36, 0x0a,
     338,   36,   36,   36, 0x0a,
     350,   36,   36,   36, 0x0a,
     362,   36,   36,   36, 0x0a,
     375,   36,   36,   36, 0x0a,
     387,   36,   36,   36, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ossimQtVectorEditorDialogController[] = {
    "ossimQtVectorEditorDialogController\0"
    "\0apply()\0pointColor()\0lineColor()\0"
    "polygonColor()\0fontColor()\0"
    "pointEnabledToggled()\0lineEnabledToggled()\0"
    "polygonEnabledToggled()\0fontEnabledToggled()\0"
    "lineThicknessChanged()\0polygonThicknessChanged()\0"
    "pointFilledToggled()\0polygonFilledToggled()\0"
    "fontFamilyName()\0fontStyle()\0"
    "fontPointSize()\0fontRotation()\0"
    "fontShear()\0fontScale()\0disableAll()\0"
    "enableAll()\0transferFromDialogCurrent()\0"
};

void ossimQtVectorEditorDialogController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ossimQtVectorEditorDialogController *_t = static_cast<ossimQtVectorEditorDialogController *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->pointColor(); break;
        case 2: _t->lineColor(); break;
        case 3: _t->polygonColor(); break;
        case 4: _t->fontColor(); break;
        case 5: _t->pointEnabledToggled(); break;
        case 6: _t->lineEnabledToggled(); break;
        case 7: _t->polygonEnabledToggled(); break;
        case 8: _t->fontEnabledToggled(); break;
        case 9: _t->lineThicknessChanged(); break;
        case 10: _t->polygonThicknessChanged(); break;
        case 11: _t->pointFilledToggled(); break;
        case 12: _t->polygonFilledToggled(); break;
        case 13: _t->fontFamilyName(); break;
        case 14: _t->fontStyle(); break;
        case 15: _t->fontPointSize(); break;
        case 16: _t->fontRotation(); break;
        case 17: _t->fontShear(); break;
        case 18: _t->fontScale(); break;
        case 19: _t->disableAll(); break;
        case 20: _t->enableAll(); break;
        case 21: _t->transferFromDialogCurrent(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ossimQtVectorEditorDialogController::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ossimQtVectorEditorDialogController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ossimQtVectorEditorDialogController,
      qt_meta_data_ossimQtVectorEditorDialogController, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ossimQtVectorEditorDialogController::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ossimQtVectorEditorDialogController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ossimQtVectorEditorDialogController::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ossimQtVectorEditorDialogController))
        return static_cast<void*>(const_cast< ossimQtVectorEditorDialogController*>(this));
    return QObject::qt_metacast(_clname);
}

int ossimQtVectorEditorDialogController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
