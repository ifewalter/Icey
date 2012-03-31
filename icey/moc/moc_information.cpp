/****************************************************************************
** Meta object code from reading C++ file 'information.h'
**
** Created: Sat 26. Nov 17:27:52 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../information.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'information.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Information[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      37,   12,   12,   12, 0x08,
      48,   12,   12,   12, 0x08,
      58,   12,   12,   12, 0x08,
      84,   68,   12,   12, 0x08,
     118,   12,   12,   12, 0x08,
     125,   12,   12,   12, 0x08,
     148,   12,  142,   12, 0x08,
     170,   12,   12,   12, 0x08,
     182,   12,   12,   12, 0x08,
     199,   12,   12,   12, 0x08,
     227,  215,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Information[] = {
    "Information\0\0on_exitButton_clicked()\0"
    "aboutApp()\0exitApp()\0confApp()\0"
    "geoPotitionInfo\0positionUpdated(QGeoPositionInfo)\0"
    "lock()\0updateRotation()\0float\0"
    "updateAccelerometer()\0playAlarm()\0"
    "startDetection()\0stopDetection()\0"
    "phoneNumber\0sendSMS(QString)\0"
};

const QMetaObject Information::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Information,
      qt_meta_data_Information, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Information::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Information::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Information::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Information))
        return static_cast<void*>(const_cast< Information*>(this));
    return QWidget::qt_metacast(_clname);
}

int Information::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_exitButton_clicked(); break;
        case 1: aboutApp(); break;
        case 2: exitApp(); break;
        case 3: confApp(); break;
        case 4: positionUpdated((*reinterpret_cast< QGeoPositionInfo(*)>(_a[1]))); break;
        case 5: lock(); break;
        case 6: updateRotation(); break;
        case 7: { float _r = updateAccelerometer();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = _r; }  break;
        case 8: playAlarm(); break;
        case 9: startDetection(); break;
        case 10: stopDetection(); break;
        case 11: sendSMS((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
