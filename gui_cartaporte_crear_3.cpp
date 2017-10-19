#include "gui_cartaporte_crear_3.h"
#include "ui_gui_cartaporte_crear_3.h"
#include "gui_cartaporte_crear_4.h"
GUI_CartaPorte_Crear_3::GUI_CartaPorte_Crear_3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GUI_CartaPorte_Crear_3)
{
    ui->setupUi(this);
}

GUI_CartaPorte_Crear_3::~GUI_CartaPorte_Crear_3()
{
    delete ui;
}

void GUI_CartaPorte_Crear_3::on_pushButton_clicked()
{
    GUI_CartaPorte_Crear_4 * pushButton = new GUI_CartaPorte_Crear_4();
             pushButton -> show() ;
                    close () ;
}
