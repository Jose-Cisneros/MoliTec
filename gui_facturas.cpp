#include "gui_facturas.h"
#include "ui_gui_facturas.h"

GUI_Facturas::GUI_Facturas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUI_Facturas)
{
    ui->setupUi(this);
}

GUI_Facturas::~GUI_Facturas()
{
    delete ui;
}

void GUI_Facturas::on_pushButton_clicked()
{
    close ();
}
