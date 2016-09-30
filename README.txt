NOTICE
********************
The ICEY project was developed for the symbian and meego platform and has been long deprecated and unsupported.
The project is only kept alive for reference purposes and to remind myself how much my programming style has grown
and improved in 5 years.


General Information
********************

Icey is an auto crash detection application. That is, it is a mobile application,
that can be used to detect motor vehicle accidents.

Icey has been tested and actually works, provided the following conditions are met
    1.The device must be fastened to the chasis of the car,
    or placed in the drivers pocket (Since the force acted on the car will be passed on to the driver)

    2. Sufficient text messaging units to alert the configured contacts.


Development Environment
************************

Qt is currently being maintained under the following conditions

Mac OSX 10.7.3
Qt Creator 2.4.1
Qt 4.7.4 (64 bit)
xCode 4.3.1


Porting
*******

Icey has been fully tested on Symbian ANNA deveices, and Nokia Meego (Harmattan) devices

You may wish to port this to other platforms and are welcome to do so.

HOW ICEY WORKS
***************

Here i'll try to explain the files and structure of Icey


Because this is Qt, File names without any extension denoted UI classes (*.cpp, *.h, *.ui)
Any standalone class or file may be identified with the extension.





files
******

Allergies.cpp.h.ui - allows management of allergies

AppSettings.cpp.h.ui - Should allows the customisation of application features when they are enabled

BioConfig.cpp.h.ui - Allows the setting of personal informaion, such as the name, age

conditions.cpp.h.ui - configuration on medical conditions

configure.cpp.h.ui - configuration menu

contacts.cpp.h.ui - configuration of emergency contacts

form.cpp.h.ui - test form to show the udpdate status (kinda useless now actually)

ice.cpp.h.ui - old application ui

information.cpp.h.ui - new application ui (displays a summary of the persons biodata)

insuranceconfig.cpp.h.ui - coonfiguration of health insurance

lock.cpp.h.ui - custom application lock screen, so that the application still work and displays some
                   information in case of accident, even when the phone is locked(really not in use)

medication.cpp.h.ui - configure the medications the person should be taking

newcontactdialog.cpp.h.ui - custom dialog for adding contact information

newcontactfromphone.cpp.h.ui - custom dialog to import contacts from the phone book (Not implemented)

newmedicationdialog.cpp.h.ui - custom dialog to add medications.
