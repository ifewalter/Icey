/****************************************************************************
** Meta object code from reading C++ file 'configure.h'
**
** Created: Sat 26. Nov 17:28:07 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../configure.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configure.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Configure[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      48,   10,   10,   10, 0x08,
      84,   10,   10,   10, 0x08,
     117,   10,   10,   10, 0x08,
     152,   10,   10,   10, 0x08,
     185,   10,   10,   10, 0x08,
     209,   10,   10,   10, 0x08,
     238,   10,   10,   10, 0x08,
     249,   10,   10,   10, 0x08,
     259,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Configure[] = {
    "Configure\0\0on_appsettingsconfigButton_clicked()\0"
    "on_medicationconfigButton_clicked()\0"
    "on_contactconfigButton_clicked()\0"
    "on_conditionconfigButton_clicked()\0"
    "on_allergyconfigButton_clicked()\0"
    "on_exitButton_clicked()\0"
    "on_bioconfigButton_clicked()\0AboutApp()\0"
    "ExitApp()\0on_insuranceconfigButton_clicked()\0"
};

const QMetaObject Configure::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Configure,
      qt_meta_data_Configure, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Configure::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Configure::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Configure::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Configure))
        return static_cast<void*>(const_cast< Configure*>(this));
    return QWidget::qt_metacast(_clname);
}

int Configure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_appsettingsconfigButton_clicked(); break;
        case 1: on_medicationconfigButton_clicked(); break;
        case 2: on_contactconfigButton_clicked(); break;
        case 3: on_conditionconfigButton_clicked(); break;
        case 4: on_allergyconfigButton_clicked(); break;
        case 5: on_exitButton_clicked(); break;
        case 6: on_bioconfigButton_clicked(); break;
        case 7: AboutApp(); break;
        case 8: ExitApp(); break;
        case 9: on_insuranceconfigButton_clicked(); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
