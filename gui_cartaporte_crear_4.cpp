#include "gui_cartaporte_crear_4.h"
#include "ui_gui_cartaporte_crear_4.h"
#include "gui_cartaporte_crear_5.h"
GUI_CartaPorte_Crear_4::GUI_CartaPorte_Crear_4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GUI_CartaPorte_Crear_4)
{
    ui->setupUi(this);
}

GUI_CartaPorte_Crear_4::~GUI_CartaPorte_Crear_4()
{
    delete ui;
}

void GUI_CartaPorte_Crear_4::on_pushButton_clicked()
{
    GUI_CartaPorte_Crear_5 * pushButton = new GUI_CartaPorte_Crear_5();
             pushButton -> show() ;
                    close () ;
}
