#include "gui_contratos.h"
#include "ui_gui_contratos.h"
#include "gui_contratos_abiertos.h"
#include "gui_contratos_cdp_elegir.h"
#include "gui_contrato_nuevocontrato.h"
#include "gui_contratos_vertodos.h"

GUI_Contratos::GUI_Contratos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUI_Contratos)
{
    ui->setupUi(this);
}

GUI_Contratos::~GUI_Contratos()
{
    delete ui;
}

void GUI_Contratos::on_pushButton_clicked()
{
    GUI_Contratos_Abiertos * pushButton =new GUI_Contratos_Abiertos ();
     pushButton -> show();
     close() ;
}

void GUI_Contratos::on_pushButton_4_clicked()
{
    GUI_Contratos_CDP_elegir * pushButton_4 =new GUI_Contratos_CDP_elegir ();
     pushButton_4 -> show();
     close() ;


}

void GUI_Contratos::on_pushButton_2_clicked()
{
    GUI_contrato_nuevoContrato * pushButton_2 = new GUI_contrato_nuevoContrato();
    pushButton_2 -> show() ;
 close () ;

}

void GUI_Contratos::on_pushButton_3_clicked()
{
    GUI_contratos_verTodos * pushButton_3 = new GUI_contratos_verTodos(this);
             pushButton_3 -> setModal(true);
             pushButton_3 -> show() ;

}
