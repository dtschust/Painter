/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Mon Oct 31 21:40:12 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   11,   12,   11, 0x0a,
      31,   11,   12,   11, 0x0a,
      50,   42,   11,   11, 0x0a,
      76,   68,   11,   11, 0x0a,
      97,   11,   11,   11, 0x08,
     124,  119,   11,   11, 0x08,
     156,   11,   11,   11, 0x08,
     182,   11,   11,   11, 0x08,
     208,   11,   11,   11, 0x08,
     236,   11,   11,   11, 0x08,
     259,   11,   11,   11, 0x08,
     284,   11,   11,   11, 0x08,
     308,   11,   11,   11, 0x08,
     338,   11,   11,   11, 0x08,
     366,   11,   11,   11, 0x08,
     394,   11,   11,   11, 0x08,
     420,   11,   11,   11, 0x08,
     449,   11,   11,   11, 0x08,
     474,   11,   11,   11, 0x08,
     500,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0QString\0getColor()\0"
    "getShape()\0isSaved\0updateSaved(bool)\0"
    "inx,iny\0updateLabel(int,int)\0"
    "on_widget_destroyed()\0link\0"
    "on_label_linkActivated(QString)\0"
    "on_circleButton_pressed()\0"
    "on_squareButton_pressed()\0"
    "on_triangleButton_pressed()\0"
    "on_redButton_pressed()\0on_greenButton_pressed()\0"
    "on_blueButton_pressed()\0"
    "on_actionTriangle_triggered()\0"
    "on_actionSquare_triggered()\0"
    "on_actionCircle_triggered()\0"
    "on_actionExit_triggered()\0"
    "on_actionAbout_3_triggered()\0"
    "on_actionNew_triggered()\0"
    "on_actionSave_triggered()\0"
    "on_actionOpen_triggered()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
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
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QString _r = getColor();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 1: { QString _r = getShape();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: updateSaved((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: updateLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: on_widget_destroyed(); break;
        case 5: on_label_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: on_circleButton_pressed(); break;
        case 7: on_squareButton_pressed(); break;
        case 8: on_triangleButton_pressed(); break;
        case 9: on_redButton_pressed(); break;
        case 10: on_greenButton_pressed(); break;
        case 11: on_blueButton_pressed(); break;
        case 12: on_actionTriangle_triggered(); break;
        case 13: on_actionSquare_triggered(); break;
        case 14: on_actionCircle_triggered(); break;
        case 15: on_actionExit_triggered(); break;
        case 16: on_actionAbout_3_triggered(); break;
        case 17: on_actionNew_triggered(); break;
        case 18: on_actionSave_triggered(); break;
        case 19: on_actionOpen_triggered(); break;
        default: ;
        }
        _id -= 20;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
