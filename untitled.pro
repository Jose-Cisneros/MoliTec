#-------------------------------------------------
#
# Project created by QtCreator 2017-10-02T11:15:24
#
#-------------------------------------------------

QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    gui_contratos.cpp \
    gui_contratos_abiertos.cpp \
    gui_contratos_condiciones.cpp \
    gui_contratos_cdp_elegir.cpp \
    gui_ver.cpp \
    db_manager.cpp \
    gui_cartaporte.cpp \
    gui_cartaporte_crear_1.cpp \
    gui_cartaporte_crear_2.cpp \
    gui_cartaporte_crear_3.cpp \
    gui_cartaporte_crear_4.cpp \
    gui_cartaporte_crear_5.cpp \
    gui_solicitudes.cpp \
    gui_solicitudes_crear.cpp \
    gui_solicitudes_crear_crearcondicion.cpp \
    gui_contratos_vertodos.cpp \
    gui_contrato_nuevocontrato.cpp

HEADERS  += mainwindow.h \
    gui_contratos.h \
    gui_contratos_abiertos.h \
    gui_contratos_condiciones.h \
    gui_contratos_cdp_elegir.h \
    gui_ver.h \
    db_manager.h \
    head.h \
    gui_cartaporte.h \
    gui_cartaporte_crear_1.h \
    gui_cartaporte_crear_2.h \
    gui_cartaporte_crear_3.h \
    gui_cartaporte_crear_4.h \
    gui_cartaporte_crear_5.h \
    gui_solicitudes.h \
    gui_solicitudes_crear.h \
    gui_solicitudes_crear_crearcondicion.h \
    gui_contrato_nuevocontrato.h \
    gui_contratos_vertodos.h

FORMS    += mainwindow.ui \
    gui_contratos.ui \
    gui_contratos_abiertos.ui \
    gui_contratos_condiciones.ui \
    gui_contratos_cdp_elegir.ui \
    gui_ver.ui \
    gui_cartaporte.ui \
    gui_cartaporte_crear_1.ui \
    gui_cartaporte_crear_2.ui \
    gui_cartaporte_crear_3.ui \
    gui_cartaporte_crear_4.ui \
    gui_cartaporte_crear_5.ui \
    gui_solicitudes.ui \
    gui_solicitudes_crear.ui \
    gui_solicitudes_crear_crearcondicion.ui \
    gui_contrato_nuevocontrato.ui \
    gui_contratos_vertodos.ui
