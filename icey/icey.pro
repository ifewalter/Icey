# Add files and directories to ship with the application
# by adapting the examples below.
# file1.source = myfile
# dir1.source = mydir
DEPLOYMENTFOLDERS = # file1 dir1

#of course you have to use a signed uid3 for most of the app features to work
symbian:TARGET.UID3 = 0x20039BA1

# Smart Installer package's UID
# This UID is from the protected range
# and therefore the package will fail to install if self-signed
# By default qmake uses the unprotected range value if unprotected UID is defined for the application
# and 0x2002CCCF value if protected UID is given to the application
#symbian:DEPLOYMENT.installer_header = 0x2002CCCF

# Allow network access on Symbian
symbian {
    TARGET.CAPABILITY += NetworkServices \
                                ReadUserData  \
                                WriteUserData  \
                                LocalServices   \
                                Location \

    my_deployment.pkg_prerules += vendorinfo

    DEPLOYMENT += my_deployment

    vendorinfo += "%{\"ifewalter\"}" ":\"ifewalter\""
}

# If your application uses the Qt Mobility libraries, uncomment
# the following lines and add the respective components to the
# MOBILITY variable.
 CONFIG += mobility
 MOBILITY += location \
            sensors \
            systeminfo \
            messaging \
            multimedia


 QT += core gui network sql

SOURCES += main.cpp\
        lock.cpp \
    unlocker.cpp \
    allergies.cpp \
    conditions.cpp \
    medications.cpp \
    contacts.cpp \
    bioconfig.cpp \
    information.cpp \
    configure.cpp \
    QsKineticScroller.cpp \
    newcontactdialog.cpp \
    appsettings.cpp \
    newmedicationdialog.cpp \
    newcontactfromphone.cpp \
    form.cpp \
    insuranceconfig.cpp

HEADERS += lock.h \
    unlocker.h \
    allergies.h \
    conditions.h \
    medications.h \
    contacts.h \
    bioconfig.h \
    information.h \
    configure.h \
    QsKineticScroller.h \
    newcontactdialog.h \
    appsettings.h \
    newmedicationdialog.h \
    newcontactfromphone.h \
    form.h \
    insuranceconfig.h

FORMS += lock.ui \
    ice.ui \
    unlocker.ui \
    allergies.ui \
    conditions.ui \
    medications.ui \
    contacts.ui \
    bioconfig.ui \
    information.ui \
    configure.ui \
    newcontactdialog.ui \
    appsettings.ui \
    newmedicationdialog.ui \
    newcontactfromphone.ui \
    form.ui \
    insuranceconfig.ui

# Please do not modify the following two lines. Required for deployment.
include(deployment.pri)
qtcAddDeployment()

OTHER_FILES += \
    qtc_packaging/debian_harmattan/rules \
    qtc_packaging/debian_harmattan/README \
    qtc_packaging/debian_harmattan/copyright \
    qtc_packaging/debian_harmattan/control \
    qtc_packaging/debian_harmattan/compat \
    qtc_packaging/debian_harmattan/changelog \
    qtc_packaging/debian_fremantle/rules \
    qtc_packaging/debian_fremantle/README \
    qtc_packaging/debian_fremantle/copyright \
    qtc_packaging/debian_fremantle/control \
    qtc_packaging/debian_fremantle/compat \
    qtc_packaging/debian_fremantle/changelog \
    TODO.txt \
    BUGS.txt \
    README.txt \
    CHANGELOG.txt \
    OVERVIEW.txt

RESOURCES += \
    mainresource.qrc


alarms.path    = $${DESTDIR}/alarms
alarms.files += alarm.wav
INSTALLS += alarms







