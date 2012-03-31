/****************************************************************************
** Meta object code from reading C++ file 'insuranceconfig.h'
**
** Created: Sat 26. Nov 17:28:18 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../insuranceconfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'insuranceconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InsuranceConfig[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      43,   16,   16,   16, 0x08,
      69,   16,   16,   16, 0x08,
      85,   16,   16,   16, 0x08,
     101,   16,   16,   16, 0x08,
     117,   16,   16,   16, 0x08,
     128,   16,   16,   16, 0x08,
     181,  146,  138,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InsuranceConfig[] = {
    "InsuranceConfig\0\0on_optionButton_clicked()\0"
    "on_cancelButton_clicked()\0saveInsurance()\0"
    "loadInsurance()\0createActions()\0"
    "AboutApp()\0ExitApp()\0QString\0"
    "realString,defText,preText,appText\0"
    "defaultText(QString,QString,QString,QString)\0"
};

const QMetaObject InsuranceConfig::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InsuranceConfig,
      qt_meta_data_InsuranceConfig, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InsuranceConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InsuranceConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InsuranceConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InsuranceConfig))
        return static_cast<void*>(const_cast< InsuranceConfig*>(this));
    return QWidget::qt_metacast(_clname);
}

int InsuranceConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_optionButton_clicked(); break;
        case 1: on_cancelButton_clicked(); break;
        case 2: saveInsurance(); break;
        case 3: loadInsurance(); break;
        case 4: createActions(); break;
        case 5: AboutApp(); break;
        case 6: ExitApp(); break;
        case 7: { QString _r = defaultText((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
