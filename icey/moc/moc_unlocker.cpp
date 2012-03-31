/****************************************************************************
** Meta object code from reading C++ file 'unlocker.h'
**
** Created: Sat 26. Nov 17:27:26 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../unlocker.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'unlocker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Unlocker[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      33,    9,    9,    9, 0x08,
      54,    9,    9,    9, 0x08,
      75,    9,    9,    9, 0x08,
      96,    9,    9,    9, 0x08,
     117,    9,    9,    9, 0x08,
     138,    9,    9,    9, 0x08,
     159,    9,    9,    9, 0x08,
     180,    9,    9,    9, 0x08,
     201,    9,    9,    9, 0x08,
     222,    9,    9,    9, 0x08,
     243,    9,    9,    9, 0x08,
     268,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Unlocker[] = {
    "Unlocker\0\0on_sosButton_clicked()\0"
    "on_button0_clicked()\0on_button9_clicked()\0"
    "on_button8_clicked()\0on_button7_clicked()\0"
    "on_button6_clicked()\0on_button5_clicked()\0"
    "on_button4_clicked()\0on_button3_clicked()\0"
    "on_button2_clicked()\0on_button1_clicked()\0"
    "on_clearButton_clicked()\0"
    "on_exitButton_clicked()\0"
};

const QMetaObject Unlocker::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Unlocker,
      qt_meta_data_Unlocker, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Unlocker::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Unlocker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Unlocker::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Unlocker))
        return static_cast<void*>(const_cast< Unlocker*>(this));
    return QWidget::qt_metacast(_clname);
}

int Unlocker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_sosButton_clicked(); break;
        case 1: on_button0_clicked(); break;
        case 2: on_button9_clicked(); break;
        case 3: on_button8_clicked(); break;
        case 4: on_button7_clicked(); break;
        case 5: on_button6_clicked(); break;
        case 6: on_button5_clicked(); break;
        case 7: on_button4_clicked(); break;
        case 8: on_button3_clicked(); break;
        case 9: on_button2_clicked(); break;
        case 10: on_button1_clicked(); break;
        case 11: on_clearButton_clicked(); break;
        case 12: on_exitButton_clicked(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
