/****************************************************************************
** Meta object code from reading C++ file 'bioconfig.h'
**
** Created: Fri 18. Nov 12:42:05 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bioconfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bioconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BioConfig[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      37,   10,   10,   10, 0x08,
      48,   10,   10,   10, 0x08,
      58,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BioConfig[] = {
    "BioConfig\0\0on_cancelButton_clicked()\0"
    "AboutApp()\0ExitApp()\0SaveAction()\0"
};

const QMetaObject BioConfig::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BioConfig,
      qt_meta_data_BioConfig, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BioConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BioConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BioConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BioConfig))
        return static_cast<void*>(const_cast< BioConfig*>(this));
    return QWidget::qt_metacast(_clname);
}

int BioConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_cancelButton_clicked(); break;
        case 1: AboutApp(); break;
        case 2: ExitApp(); break;
        case 3: SaveAction(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
