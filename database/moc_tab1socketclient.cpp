/****************************************************************************
** Meta object code from reading C++ file 'tab1socketclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "tab1socketclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tab1socketclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Tab1SocketClient_t {
    QByteArrayData data[9];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tab1SocketClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tab1SocketClient_t qt_meta_stringdata_Tab1SocketClient = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Tab1SocketClient"
QT_MOC_LITERAL(1, 17, 15), // "sigTab2RecvData"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "sigQfileRecvData"
QT_MOC_LITERAL(4, 51, 15), // "sigTab4RecvData"
QT_MOC_LITERAL(5, 67, 16), // "sigTab4InOutData"
QT_MOC_LITERAL(6, 84, 19), // "slotConnectToServer"
QT_MOC_LITERAL(7, 104, 20), // "slotSocketRecvUpdate"
QT_MOC_LITERAL(8, 125, 18) // "slotSocketSendData"

    },
    "Tab1SocketClient\0sigTab2RecvData\0\0"
    "sigQfileRecvData\0sigTab4RecvData\0"
    "sigTab4InOutData\0slotConnectToServer\0"
    "slotSocketRecvUpdate\0slotSocketSendData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tab1SocketClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,
       4,    1,   55,    2, 0x06 /* Public */,
       5,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   61,    2, 0x08 /* Private */,
       7,    1,   64,    2, 0x08 /* Private */,
       8,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Tab1SocketClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Tab1SocketClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigTab2RecvData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sigQfileRecvData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sigTab4RecvData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->sigTab4InOutData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->slotConnectToServer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slotSocketRecvUpdate((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->slotSocketSendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Tab1SocketClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tab1SocketClient::sigTab2RecvData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Tab1SocketClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tab1SocketClient::sigQfileRecvData)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Tab1SocketClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tab1SocketClient::sigTab4RecvData)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Tab1SocketClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Tab1SocketClient::sigTab4InOutData)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Tab1SocketClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Tab1SocketClient.data,
    qt_meta_data_Tab1SocketClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Tab1SocketClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tab1SocketClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Tab1SocketClient.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Tab1SocketClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Tab1SocketClient::sigTab2RecvData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Tab1SocketClient::sigQfileRecvData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Tab1SocketClient::sigTab4RecvData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Tab1SocketClient::sigTab4InOutData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
