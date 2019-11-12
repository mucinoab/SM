QT      += core gui
QT      += qml
QT      += printsupport
QT      += gui


greaterThan(QT_MAJOR_VERSION, 4)QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    biseccion.cpp \
    crout.cpp \
    dolittle.cpp \
    ecuacionesnolineales.cpp \
    falsaposicion.cpp \
    gauss.cpp \
    gaussjordan.cpp \
    gaussseidel.cpp \
    jacobi.cpp \
    main.cpp \
    mainwindow.cpp \
    mensajeintroduccion.cpp \
    mensajesalida.cpp \
    menu.cpp \
    menuecuacionesnolineales.cpp \
    menufactorizacion.cpp \
    menusel.cpp \
    newton.cpp \
    resumenbiseccion.cpp \
    resumencrout.cpp \
    resumendolittle.cpp \
    resumenfalsa.cpp \
    resumengauss.cpp \
    resumengaussjordan.cpp \
    resumengaussseidel.cpp \
    resumenjacobi.cpp \
    resumenlu.cpp \
    resumennewton.cpp \
    resumensecante.cpp \
    secante.cpp \
    sel.cpp

HEADERS += \
    /home/bruno/Downloads/GraficaDeFunciones/DuPlot.h \
    /home/bruno/Downloads/qcustomplot-source/qcustomplot.h \
    biseccion.h \
    crout.h \
    dolittle.h \
    ecuacionesnolineales.h \
    falsaposicion.h \
    gauss.h \
    gaussjordan.h \
    gaussseidel.h \
    jacobi.h \
    mainwindow.h \
    mensajeintroduccion.h \
    mensajesalida.h \
    menu.h \
    menuecuacionesnolineales.h \
    menufactorizacion.h \
    menusel.h \
    newton.h \
    resumenbiseccion.h \
    resumencrout.h \
    resumendolittle.h \
    resumenfalsa.h \
    resumengauss.h \
    resumengaussjordan.h \
    resumengaussseidel.h \
    resumenjacobi.h \
    resumenlu.h \
    resumennewton.h \
    resumensecante.h \
    secante.h \
    sel.h

FORMS += \
    biseccion.ui \
    crout.ui \
    dolittle.ui \
    ecuacionesnolineales.ui \
    falsaposicion.ui \
    gauss.ui \
    gaussjordan.ui \
    gaussseidel.ui \
    grafica.ui \
    jacobi.ui \
    mainwindow.ui \
    mensajeintroduccion.ui \
    mensajesalida.ui \
    menu.ui \
    menuecuacionesnolineales.ui \
    menufactorizacion.ui \
    menusel.ui \
    newton.ui \
    resumenbiseccion.ui \
    resumencrout.ui \
    resumendolittle.ui \
    resumenfalsa.ui \
    resumengauss.ui \
    resumengaussjordan.ui \
    resumengaussseidel.ui \
    resumenjacobi.ui \
    resumenlu.ui \
    resumennewton.ui \
    resumensecante.ui \
    secante.ui \
    sel.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
