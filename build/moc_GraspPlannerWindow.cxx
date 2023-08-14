/****************************************************************************
** Meta object code from reading C++ file 'GraspPlannerWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GraspPlannerWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraspPlannerWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GraspPlannerWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      33,   27,   19,   19, 0x0a,
      58,   19,   19,   19, 0x0a,
      76,   19,   19,   19, 0x0a,
      87,   19,   19,   19, 0x0a,
      97,   19,   19,   19, 0x0a,
     108,   19,   19,   19, 0x0a,
     127,   19,   19,   19, 0x0a,
     140,   19,   19,   19, 0x0a,
     152,   19,   19,   19, 0x0a,
     159,   19,   19,   19, 0x0a,
     166,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GraspPlannerWindow[] = {
    "GraspPlannerWindow\0\0quit()\0event\0"
    "closeEvent(QCloseEvent*)\0resetSceneryAll()\0"
    "closeEEF()\0openEEF()\0colModel()\0"
    "frictionConeVisu()\0showGrasps()\0"
    "buildVisu()\0plan()\0save()\0planObjectBatch()\0"
};

void GraspPlannerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GraspPlannerWindow *_t = static_cast<GraspPlannerWindow *>(_o);
        switch (_id) {
        case 0: _t->quit(); break;
        case 1: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 2: _t->resetSceneryAll(); break;
        case 3: _t->closeEEF(); break;
        case 4: _t->openEEF(); break;
        case 5: _t->colModel(); break;
        case 6: _t->frictionConeVisu(); break;
        case 7: _t->showGrasps(); break;
        case 8: _t->buildVisu(); break;
        case 9: _t->plan(); break;
        case 10: _t->save(); break;
        case 11: _t->planObjectBatch(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GraspPlannerWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GraspPlannerWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GraspPlannerWindow,
      qt_meta_data_GraspPlannerWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GraspPlannerWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GraspPlannerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GraspPlannerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraspPlannerWindow))
        return static_cast<void*>(const_cast< GraspPlannerWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GraspPlannerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
