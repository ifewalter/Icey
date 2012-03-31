/****************************************************************************
** Meta object code from reading C++ file 'medications.h'
**
** Created: Fri 18. Nov 12:42:11 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../medications.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'medications.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Medications[] = {

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
      18,   13,   12,   12, 0x08,
      62,   12,   12,   12, 0x08,
      88,   12,   12,   12, 0x08,
     112,   12,   12,   12, 0x08,
     123,   12,   12,   12, 0x08,
     133,   12,   12,   12, 0x08,
     149,   12,   12,   12, 0x08,
     168,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Medications[] = {
    "Medications\0\0item\0"
    "on_listWidget_itemClicked(QListWidgetItem*)\0"
    "on_actionButton_clicked()\0"
    "on_backButton_clicked()\0AboutApp()\0"
    "ExitApp()\0addMedication()\0deleteMedication()\0"
    "editMedication()\0"
};

const QMetaObject Medications::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Medications,
      qt_meta_data_Medications, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Medications::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Medications::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Medications::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Medications))
        return static_cast<void*>(const_cast< Medications*>(this));
    return QWidget::qt_metacast(_clname);
}

int Medications::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: on_actionButton_clicked(); break;
        case 2: on_backButton_clicked(); break;
        case 3: AboutApp(); break;
        case 4: ExitApp(); break;
        case 5: addMedication(); break;
        case 6: deleteMedication(); break;
        case 7: editMedication(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
