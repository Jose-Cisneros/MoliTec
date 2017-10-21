#include "gui_contratos_detallefactura.h"
#include "ui_gui_contratos_detallefactura.h"

GUI_contratos_detalleFactura::GUI_contratos_detalleFactura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUI_contratos_detalleFactura)
{
    ui->setupUi(this);
}

GUI_contratos_detalleFactura::~GUI_contratos_detalleFactura()
{
    delete ui;
}
