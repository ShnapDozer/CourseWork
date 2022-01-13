QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 debug

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    main_w.cpp \
    new_db.cpp \
    open.cpp \
    start_w.cpp \
    table_type_model.cpp

HEADERS += \
    main_w.h \
    new_db.h \
    open.h \
    start_w.h \
    table_type_model.h

FORMS += \
    main_w.ui \
    new_db.ui \
    open.ui \
    start_w.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    ../Image/Logo.qrc
