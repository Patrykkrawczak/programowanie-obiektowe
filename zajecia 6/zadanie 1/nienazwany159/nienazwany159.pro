TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../punkt/build-punkt-Desktop_Qt_5_8_0_clang_64bit-Debug/release/ -lpunkt.1.0.0
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../punkt/build-punkt-Desktop_Qt_5_8_0_clang_64bit-Debug/debug/ -lpunkt.1.0.0
else:unix: LIBS += -L$$PWD/../punkt/build-punkt-Desktop_Qt_5_8_0_clang_64bit-Debug/ -lpunkt.1.0.0

INCLUDEPATH += $$PWD/../punkt/punkt
DEPENDPATH += $$PWD/../punkt/punkt
