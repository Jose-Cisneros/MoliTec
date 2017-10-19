#include "gui_cartaporte.h"
#include "ui_gui_cartaporte.h"
#include "gui_cartaporte_crear_1.h"
Gui_CartaPorte::Gui_CartaPorte(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Gui_CartaPorte)
{
    ui->setupUi(this);
}

Gui_CartaPorte::~Gui_CartaPorte()
{
    delete ui;
}

void Gui_CartaPorte::on_crearCp_clicked()
{
    GUI_CartaPorte_Crear_1 * crearCp = new GUI_CartaPorte_Crear_1();
             crearCp -> show() ;
                    close () ;
}
