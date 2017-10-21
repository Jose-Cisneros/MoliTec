#include "gui_contratos_vertodos_factura.h"
#include "ui_gui_contratos_vertodos_factura.h"

GUI_contratos_vertodos_factura::GUI_contratos_vertodos_factura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUI_contratos_vertodos_factura)
{
    ui->setupUi(this);
}

GUI_contratos_vertodos_factura::~GUI_contratos_vertodos_factura()
{
    delete ui;
}
