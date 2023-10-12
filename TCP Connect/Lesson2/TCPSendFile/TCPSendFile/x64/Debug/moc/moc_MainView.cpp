/****************************************************************************
** Meta object code from reading C++ file 'MainView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../MainView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CMainView_t {
    QByteArrayData data[14];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CMainView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CMainView_t qt_meta_stringdata_CMainView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CMainView"
QT_MOC_LITERAL(1, 10, 16), // "SignalStartSever"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "strIP"
QT_MOC_LITERAL(4, 34, 4), // "port"
QT_MOC_LITERAL(5, 39, 17), // "SignalSendMessage"
QT_MOC_LITERAL(6, 57, 7), // "strPath"
QT_MOC_LITERAL(7, 65, 15), // "SlotStartServer"
QT_MOC_LITERAL(8, 81, 14), // "SlotSelectPath"
QT_MOC_LITERAL(9, 96, 15), // "SlotSendMessage"
QT_MOC_LITERAL(10, 112, 17), // "SlotConnectStatus"
QT_MOC_LITERAL(11, 130, 9), // "isSuccess"
QT_MOC_LITERAL(12, 140, 18), // "SlotChangeprogress"
QT_MOC_LITERAL(13, 159, 11) // "currpercent"

    },
    "CMainView\0SignalStartSever\0\0strIP\0"
    "port\0SignalSendMessage\0strPath\0"
    "SlotStartServer\0SlotSelectPath\0"
    "SlotSendMessage\0SlotConnectStatus\0"
    "isSuccess\0SlotChangeprogress\0currpercent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CMainView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   57,    2, 0x08 /* Private */,
       8,    0,   58,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,
      10,    1,   60,    2, 0x08 /* Private */,
      12,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void CMainView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CMainView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalStartSever((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< unsigned short(*)>(_a[2]))); break;
        case 1: _t->SignalSendMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SlotStartServer(); break;
        case 3: _t->SlotSelectPath(); break;
        case 4: _t->SlotSendMessage(); break;
        case 5: _t->SlotConnectStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->SlotChangeprogress((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CMainView::*)(QString , unsigned short );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CMainView::SignalStartSever)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CMainView::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CMainView::SignalSendMessage)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CMainView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CMainView.data,
    qt_meta_data_CMainView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CMainView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CMainView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CMainView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CMainView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CMainView::SignalStartSever(QString _t1, unsigned short _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CMainView::SignalSendMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
