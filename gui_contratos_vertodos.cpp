#include "gui_contratos_vertodos.h"
#include "ui_gui_contratos_vertodos.h"
#include "gui_contrato_nuevocontrato.h"
#include "gui_contratos.h"
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
                    close () ;
}
