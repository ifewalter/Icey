/****************************************************************************
** Meta object code from reading C++ file 'contacts.h'
**
** Created: Fri 18. Nov 12:42:11 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../contacts.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contacts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ncdnew[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_ncdnew[] = {
    "ncdnew\0"
};

const QMetaObject ncdnew::staticMetaObject = {
    { &newContactDialog::staticMetaObject, qt_meta_stringdata_ncdnew,
      qt_meta_data_ncdnew, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ncdnew::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ncdnew::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ncdnew::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ncdnew))
        return static_cast<void*>(const_cast< ncdnew*>(this));
    return newContactDialog::qt_metacast(_clname);
}

int ncdnew::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = newContactDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Contacts[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      41,   36,    9,    9, 0x08,
      85,    9,    9,    9, 0x08,
     109,    9,    9,    9, 0x08,
     122,    9,    9,    9, 0x08,
     138,    9,    9,    9, 0x08,
     158,    9,    9,    9, 0x08,
     172,    9,    9,    9, 0x08,
     183,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Contacts[] = {
    "Contacts\0\0on_actionButton_clicked()\0"
    "item\0on_listWidget_itemClicked(QListWidgetItem*)\0"
    "on_backButton_clicked()\0addContact()\0"
    "deleteContact()\0loadPhoneContacts()\0"
    "editContact()\0aboutapp()\0exitapp()\0"
};

const QMetaObject Contacts::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Contacts,
      qt_meta_data_Contacts, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Contacts::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Contacts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Contacts::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Contacts))
        return static_cast<void*>(const_cast< Contacts*>(this));
    return QWidget::qt_metacast(_clname);
}

int Contacts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_actionButton_clicked(); break;
        case 1: on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: on_backButton_clicked(); break;
        case 3: addContact(); break;
        case 4: deleteContact(); break;
        case 5: loadPhoneContacts(); break;
        case 6: editContact(); break;
        case 7: aboutapp(); break;
        case 8: exitapp(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
