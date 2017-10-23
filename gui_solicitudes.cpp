#include "gui_solicitudes.h"
#include "ui_gui_solicitudes.h"
#include "gui_solicitudes_crear.h"
GUI_solicitudes::GUI_solicitudes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GUI_solicitudes)
{
    ui->setupUi(this);
}

GUI_solicitudes::~GUI_solicitudes()
{
    delete ui;
}

void GUI_solicitudes::on_pushButton_4_clicked()
{
    close() ;
}

void GUI_solicitudes::on_pushButton_2_clicked()
{
    GUI_solicitudes_crear * pushButton_2 = new GUI_solicitudes_crear(this);
    pushButton_2 -> setModal(true);
             pushButton_2 -> show() ;

}
