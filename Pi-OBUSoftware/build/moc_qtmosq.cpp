/****************************************************************************
** Meta object code from reading C++ file 'qtmosq.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Terminal1/qtmosq.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtmosq.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qtmosq[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
       7,   19,   19,   19, 0x05,
      20,   19,   19,   19, 0x05,
      38,   19,   19,   19, 0x05,
      63,   19,   19,   19, 0x05,
      79,   19,   19,   19, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_qtmosq[] = {
    "qtmosq\0connected()\0\0messageSent(bool)\0"
    "messageReceived(QString)\0connectEnable()\0"
    "subscribed()\0"
};

void qtmosq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        qtmosq *_t = static_cast<qtmosq *>(_o);
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->messageSent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->messageReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->connectEnable(); break;
        case 4: _t->subscribed(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData qtmosq::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qtmosq::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qtmosq,
      qt_meta_data_qtmosq, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qtmosq::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qtmosq::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qtmosq::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qtmosq))
        return static_cast<void*>(const_cast< qtmosq*>(this));
    if (!strcmp(_clname, "mosquittopp"))
        return static_cast< mosquittopp*>(const_cast< qtmosq*>(this));
    return QObject::qt_metacast(_clname);
}

int qtmosq::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void qtmosq::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void qtmosq::messageSent(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qtmosq::messageReceived(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qtmosq::connectEnable()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void qtmosq::subscribed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
