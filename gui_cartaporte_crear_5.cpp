#include "gui_cartaporte_crear_5.h"
#include "ui_gui_cartaporte_crear_5.h"
#include <QMessageBox>
GUI_CartaPorte_Crear_5::GUI_CartaPorte_Crear_5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GUI_CartaPorte_Crear_5)
{
    ui->setupUi(this);
}

GUI_CartaPorte_Crear_5::~GUI_CartaPorte_Crear_5()
{
    delete ui;
}

void GUI_CartaPorte_Crear_5::on_pushButton_clicked()
{
    QMessageBox msgBox;
     msgBox.setInformativeText("La Carta de Porte fue creada correctamente");
     msgBox.exec();
     close();
}

void GUI_CartaPorte_Crear_5::on_pushButton_2_clicked()
{
    close () ;
}
