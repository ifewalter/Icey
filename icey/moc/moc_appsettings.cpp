/****************************************************************************
** Meta object code from reading C++ file 'appsettings.h'
**
** Created: Fri 18. Nov 12:42:32 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../appsettings.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_appSettings[] = {

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
      13,   12,   12,   12, 0x08,
      39,   12,   12,   12, 0x08,
      63,   12,   12,   12, 0x08,
      74,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_appSettings[] = {
    "appSettings\0\0on_updateButton_clicked()\0"
    "on_backButton_clicked()\0AboutApp()\0"
    "ExitApp()\0"
};

const QMetaObject appSettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_appSettings,
      qt_meta_data_appSettings, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &appSettings::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *appSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *appSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_appSettings))
        return static_cast<void*>(const_cast< appSettings*>(this));
    return QWidget::qt_metacast(_clname);
}

int appSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_updateButton_clicked(); break;
        case 1: on_backButton_clicked(); break;
        case 2: AboutApp(); break;
        case 3: ExitApp(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
