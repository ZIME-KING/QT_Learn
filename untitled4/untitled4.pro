QT       += core gui
QT       += serialport
QT       += core
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
CONFIG += console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialog.cpp \
    dialog_argon_protected_welding.cpp \
    dialog_double_pulse.cpp \
    dialog_hand.cpp \
    dialog_pulse.cpp \
    function.cpp \
    function_double_pulse.cpp \
    function_pulse.cpp \
    main.cpp \
    set_code.cpp \
    widget.cpp

HEADERS += \
    dialog.h \
    dialog_argon_protected_welding.h \
    dialog_double_pulse.h \
    dialog_hand.h \
    dialog_pulse.h \
    function.h \
    function_double_pulse.h \
    function_pulse.h \
    set_code.h \
    widget.h

FORMS += \
    dialog.ui \
    dialog_argon_protected_welding.ui \
    dialog_double_pulse.ui \
    dialog_hand.ui \
    dialog_pulse.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
