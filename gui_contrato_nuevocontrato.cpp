#include "gui_contrato_nuevocontrato.h"
#include "ui_gui_contrato_nuevocontrato.h"
#include "gui_contratos_vertodos.h"
#include <QMessageBox>
#include "gui_contratos.h"
GUI_contrato_nuevoContrato::GUI_contrato_nuevoContrato(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUI_contrato_nuevoContrato)
{
    ui->setupUi(this);
}

GUI_contrato_nuevoContrato::~GUI_contrato_nuevoContrato()
{
    delete ui;
}

void GUI_contrato_nuevoContrato::on_pushButton_clicked()
{   QMessageBox msgBox;
    msgBox.setInformativeText("El contrato fue creado correctamente");
    msgBox.exec();

    close();
}

void GUI_contrato_nuevoContrato::on_pushButton_2_clicked()
{    GUI_Contratos* pushButton_2 = new GUI_Contratos();
     pushButton_2 -> show() ;
    close();
}
