#include "gui_cartaporte_crear_1.h"
#include "ui_gui_cartaporte_crear_1.h"
#include "gui_cartaporte_crear_2.h"
GUI_CartaPorte_Crear_1::GUI_CartaPorte_Crear_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GUI_CartaPorte_Crear_1)
{
    ui->setupUi(this);
}

GUI_CartaPorte_Crear_1::~GUI_CartaPorte_Crear_1()
{
    delete ui;
}

void GUI_CartaPorte_Crear_1::on_pushButton_clicked()
{
    GUI_CartaPorte_Crear_2 * pushButton = new GUI_CartaPorte_Crear_2();
             pushButton -> show() ;
                    close () ;
}
