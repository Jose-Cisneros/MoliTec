#include "gui_contratos_vertodos.h"
#include "ui_gui_contratos_vertodos.h"
#include "gui_contrato_nuevocontrato.h"
#include "gui_contratos.h"
#include "gui_contratos_vertodos_factura.h"

GUI_contratos_verTodos::GUI_contratos_verTodos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUI_contratos_verTodos)
{
    ui->setupUi(this);
}

GUI_contratos_verTodos::~GUI_contratos_verTodos()
{
    delete ui;
}

void GUI_contratos_verTodos::on_pushButton_4_clicked()
{ GUI_Contratos* pushButton_4 = new GUI_Contratos();
             pushButton_4 -> show() ;
    close();
}

void GUI_contratos_verTodos::on_pushButton_clicked()
{
    GUI_contrato_nuevoContrato* pushButton = new GUI_contrato_nuevoContrato(this);
    pushButton ->setModal(true);
             pushButton -> show() ;

}







void GUI_contratos_verTodos::on_pushButton_3_clicked()
{
    //GUI_contrato_nuevoContrato* pushButton_3 = new GUI_contrato_nuevoContrato(this);
    //pushButton_3 ->setModal(true);
      //       pushButton_3 -> show() ;
}


void GUI_contratos_verTodos::on_pushButton_2_clicked()
{
    GUI_contratos_vertodos_factura* pushButton_2 = new GUI_contratos_vertodos_factura(this);
    pushButton_2 ->setModal(true);
             pushButton_2 -> show() ;
}
