#include "gui_cartaporte_crear_2.h"
#include "ui_gui_cartaporte_crear_2.h"
#include "gui_cartaporte_crear_3.h"
GUI_CartaPorte_Crear_2::GUI_CartaPorte_Crear_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GUI_CartaPorte_Crear_2)
{
    ui->setupUi(this);
}

GUI_CartaPorte_Crear_2::~GUI_CartaPorte_Crear_2()
{
    delete ui;
}

void GUI_CartaPorte_Crear_2::on_pushButton_clicked()
{
    GUI_CartaPorte_Crear_3 * pushButton = new GUI_CartaPorte_Crear_3();
             pushButton -> show() ;
                    close () ;
}

void GUI_CartaPorte_Crear_2::on_pushButton_2_clicked()
{
    close () ;
}
