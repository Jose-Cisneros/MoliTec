#include "gui_solicitudes_crear.h"
#include "ui_gui_solicitudes_crear.h"
#include "gui_solicitudes_crear_crearcondicion.h"
GUI_solicitudes_crear::GUI_solicitudes_crear(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUI_solicitudes_crear)
{
    ui->setupUi(this);
}

GUI_solicitudes_crear::~GUI_solicitudes_crear()
{
    delete ui;
}

void GUI_solicitudes_crear::on_commandLinkButton_clicked()
{
    GUI_solicitudes_crear_crearCondicion * commandLinkButton = new GUI_solicitudes_crear_crearCondicion(this);
    commandLinkButton -> setModal(true) ;
    commandLinkButton -> show() ;

}

void GUI_solicitudes_crear::on_pushButton_clicked()
{
    close();
}
