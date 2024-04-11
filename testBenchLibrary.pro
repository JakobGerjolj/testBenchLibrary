QT -= gui
QT += serialport
QT += serialbus
TEMPLATE = lib
CONFIG += staticlib

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    buttons.cpp \
    camera.cpp \
    keycardsactuator.cpp \
    leversactuator.cpp \
    testbenchlibrary.cpp

HEADERS += \
    buttons.h \
    camera.h \
    keycardsactuator.h \
    leversactuator.h \
    testbenchlibrary.h


# Default rules for deployment.
# unix {
#     target.path = $$[QT_INSTALL_PLUGINS]/generic
# }
# !isEmpty(target.path):

INSTALLS += target



unix:!macx: LIBS += -L$$PWD/../rpi-sysroot/usr/lib/ -lwiringPi

INCLUDEPATH += $$PWD/../rpi-sysroot/usr/include
DEPENDPATH += $$PWD/../rpi-sysroot/usr/include
