TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        aktientdepot.cpp \
        bank.cpp \
        buchung.cpp \
        girokonto.cpp \
        konto.cpp \
        main.cpp

HEADERS += \
    aktientdepot.h \
    bank.h \
    buchung.h \
    girokonto.h \
    konto.h
