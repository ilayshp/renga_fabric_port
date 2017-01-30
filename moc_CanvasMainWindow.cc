/****************************************************************************
** Meta object code from reading C++ file 'CanvasMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CanvasMainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CanvasMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      29,   11,   11,   11, 0x0a,
      39,   11,   11,   11, 0x0a,
      56,   11,   11,   11, 0x0a,
      83,   77,   11,   11, 0x0a,
     128,  123,   11,   11, 0x0a,
     179,  123,   11,   11, 0x0a,
     227,   11,   11,   11, 0x0a,
     260,  257,   11,   11, 0x0a,
     314,   11,   11,   11, 0x0a,
     327,   11,   11,   11, 0x0a,
     341,   11,   11,   11, 0x0a,
     355,   11,   11,   11, 0x0a,
     377,  371,   11,   11, 0x0a,
     397,   11,   11,   11, 0x0a,
     418,  409,   11,   11, 0x0a,
     473,  455,   11,   11, 0x0a,
     509,  500,   11,   11, 0x0a,
     544,  536,   11,   11, 0x0a,
     583,  566,   11,   11, 0x08,
     637,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0contentChanged()\0onDirty()\0"
    "onValueChanged()\0onStructureChanged()\0"
    "graph\0onGraphSet(FabricUI::GraphView::Graph*)\0"
    "node\0onNodeInspectRequested(FabricUI::GraphView::Node*)\0"
    "onNodeEditRequested(FabricUI::GraphView::Node*)\0"
    "onSidePanelInspectRequested()\0,,\0"
    "onHotkeyPressed(Qt::Key,Qt::KeyboardModifier,QString)\0"
    "onNewGraph()\0onLoadGraph()\0onSaveGraph()\0"
    "onSaveGraphAs()\0frame\0onFrameChanged(int)\0"
    "updateFPS()\0portName\0"
    "onPortManipulationRequested(QString)\0"
    "blockCompilations\0setBlockCompilations(bool)\0"
    "fileName\0onFileNameChanged(QString)\0"
    "enabled\0enableShortCuts(bool)\0"
    "name,menu,prefix\0"
    "onAdditionalMenuActionsRequested(QString,QMenu*,bool)\0"
    "autosave()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->contentChanged(); break;
        case 1: _t->onDirty(); break;
        case 2: _t->onValueChanged(); break;
        case 3: _t->onStructureChanged(); break;
        case 4: _t->onGraphSet((*reinterpret_cast< FabricUI::GraphView::Graph*(*)>(_a[1]))); break;
        case 5: _t->onNodeInspectRequested((*reinterpret_cast< FabricUI::GraphView::Node*(*)>(_a[1]))); break;
        case 6: _t->onNodeEditRequested((*reinterpret_cast< FabricUI::GraphView::Node*(*)>(_a[1]))); break;
        case 7: _t->onSidePanelInspectRequested(); break;
        case 8: _t->onHotkeyPressed((*reinterpret_cast< Qt::Key(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifier(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 9: _t->onNewGraph(); break;
        case 10: _t->onLoadGraph(); break;
        case 11: _t->onSaveGraph(); break;
        case 12: _t->onSaveGraphAs(); break;
        case 13: _t->onFrameChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->updateFPS(); break;
        case 15: _t->onPortManipulationRequested((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->setBlockCompilations((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->onFileNameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->enableShortCuts((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->onAdditionalMenuActionsRequested((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QMenu*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 20: _t->autosave(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &DFG::DFGMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    typedef DFG::DFGMainWindow QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef DFG::DFGMainWindow QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::contentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
