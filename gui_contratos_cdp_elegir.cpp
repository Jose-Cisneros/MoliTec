#include "gui_contratos_cdp_elegir.h"
#include "ui_gui_contratos_cdp_elegir.h"
#include "gui_cartaporte_crear_1.h"
#include "gui_contratos.h".h"
GUI_Contratos_CDP_elegir::GUI_Contratos_CDP_elegir(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUI_Contratos_CDP_elegir)
{
    ui->setupUi(this);
}

GUI_Contratos_CDP_elegir::~GUI_Contratos_CDP_elegir()
{
    delete ui;
}

void GUI_Contratos_CDP_elegir::on_buttonBox_accepted()
{
    GUI_CartaPorte_Crear_1 * buttonBox_accepted = new GUI_CartaPorte_Crear_1();
             buttonBox_accepted -> show() ;
                    close () ;
}

void GUI_Contratos_CDP_elegir::on_buttonBox_rejected()
{
    close () ;
    GUI_Contratos g;
        g.exec();
}
