QT += core gui charts sql multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Projet_Recherche/main_projet.cpp \
    Projet_Recherche/projet_de_rechcerche.cpp \
    Projet_Recherche/qrcode.cpp \
    Projet_Recherche/stats.cpp \
    connction.cpp \
    connect_db.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Projet_Recherche/main_projet.h \
    Projet_Recherche/projet_de_rechcerche.h \
    Projet_Recherche/qrcode.h \
    Projet_Recherche/stats.h \
    connction.h \
    connect_db.h \
    mainwindow.h

FORMS += \
    Projet_Recherche/main_projet.ui \
    Projet_Recherche/qrcode.ui \
    Projet_Recherche/stats.ui \
    connction.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
