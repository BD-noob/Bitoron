/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bitoron/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_Btn_signin_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "on_Btn_signup_clicked"
QT_MOC_LITERAL(4, 56, 25), // "on_Btn_sendParcel_clicked"
QT_MOC_LITERAL(5, 82, 26), // "on_Btn_deliveryMan_clicked"
QT_MOC_LITERAL(6, 109, 20), // "on_Btn_admin_clicked"
QT_MOC_LITERAL(7, 130, 22), // "on_signinBtn_2_clicked"
QT_MOC_LITERAL(8, 153, 22), // "on_signupBtn_2_clicked"
QT_MOC_LITERAL(9, 176, 22), // "on_signinBtn_3_clicked"
QT_MOC_LITERAL(10, 199, 22), // "on_signupBtn_3_clicked"
QT_MOC_LITERAL(11, 222, 20), // "on_signinBtn_clicked"
QT_MOC_LITERAL(12, 243, 20), // "on_signupBtn_clicked"
QT_MOC_LITERAL(13, 264, 23) // "on_pushButton_8_clicked"

    },
    "MainWindow\0on_Btn_signin_clicked\0\0"
    "on_Btn_signup_clicked\0on_Btn_sendParcel_clicked\0"
    "on_Btn_deliveryMan_clicked\0"
    "on_Btn_admin_clicked\0on_signinBtn_2_clicked\0"
    "on_signupBtn_2_clicked\0on_signinBtn_3_clicked\0"
    "on_signupBtn_3_clicked\0on_signinBtn_clicked\0"
    "on_signupBtn_clicked\0on_pushButton_8_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Btn_signin_clicked(); break;
        case 1: _t->on_Btn_signup_clicked(); break;
        case 2: _t->on_Btn_sendParcel_clicked(); break;
        case 3: _t->on_Btn_deliveryMan_clicked(); break;
        case 4: _t->on_Btn_admin_clicked(); break;
        case 5: _t->on_signinBtn_2_clicked(); break;
        case 6: _t->on_signupBtn_2_clicked(); break;
        case 7: _t->on_signinBtn_3_clicked(); break;
        case 8: _t->on_signupBtn_3_clicked(); break;
        case 9: _t->on_signinBtn_clicked(); break;
        case 10: _t->on_signupBtn_clicked(); break;
        case 11: _t->on_pushButton_8_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
