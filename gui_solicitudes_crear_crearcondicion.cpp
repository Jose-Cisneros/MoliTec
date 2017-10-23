#include "gui_solicitudes_crear_crearcondicion.h"
#include "ui_gui_solicitudes_crear_crearcondicion.h"

GUI_solicitudes_crear_crearCondicion::GUI_solicitudes_crear_crearCondicion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUI_solicitudes_crear_crearCondicion)
{
    ui->setupUi(this);
}

GUI_solicitudes_crear_crearCondicion::~GUI_solicitudes_crear_crearCondicion()
{
    delete ui;
}

void GUI_solicitudes_crear_crearCondicion::on_pushButton_clicked()
{
    close();
}
