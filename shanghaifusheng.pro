QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    backendmanager.cpp \
    bank.cpp \
    connectus.cpp \
    eventmanager.cpp \
    eventwindow.cpp \
    hospital.cpp \
    item.cpp \
    itemmanager.cpp \
    loading.cpp \
    main.cpp \
    mainwindow.cpp \
    player.cpp \
    post.cpp \
    rent.cpp \
    settlement.cpp \
    start.cpp \
    ranking.cpp \
    uitest.cpp

HEADERS += \
    backendmanager.h \
    bank.h \
    connectus.h \
    eventmanager.h \
    eventwindow.h \
    hospital.h \
    item.h \
    itemmanager.h \
    loading.h \
    mainwindow.h \
    player.h \
    post.h \
    rent.h \
    settlement.h \
    start.h \
    ranking.h \
    uitest.h


FORMS += \
    bank.ui \
    connectus.ui \
    hospital.ui \
    loading.ui \
    mainwindow.ui \
    post.ui \
    rent.ui \
    settlement.ui \
    start.ui \
    ranking.ui \
    uitest.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    items.txt

RESOURCES += \
    txtResource.qrc
