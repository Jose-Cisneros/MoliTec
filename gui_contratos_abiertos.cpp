#include "gui_contratos_abiertos.h"
#include "ui_gui_contratos_abiertos.h"
#include "gui_contratos_condiciones.h"
#include "gui_cartaporte.h"
#include "gui_contratos.h"
#include "gui_contratos_condiciones.h"

GUI_Contratos_Abiertos::GUI_Contratos_Abiertos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUI_Contratos_Abiertos)
{
    ui->setupUi(this);
    ui->CpGo->setEnabled(false);
    ui->cond->setEnabled(false);
    ui->fact->setEnabled(false);




    lista.setQuery("SELECT numero FROM contratoCompra");
    ui->listView->setModel(&lista);
    ui->listView->setModelColumn(1);
}

GUI_Contratos_Abiertos::~GUI_Contratos_Abiertos()
{
    delete ui;
}

int GUI_Contratos_Abiertos::getNumeroClickeado()
{
    return numero;

}

void GUI_Contratos_Abiertos::on_pushButton_clicked()
{
    GUI_Contratos_Condiciones a;
    a.exec();

}



void GUI_Contratos_Abiertos::on_CpGo_clicked()
{
  Gui_CartaPorte * CpGo =new Gui_CartaPorte() ;
            CpGo -> show() ;




}

void GUI_Contratos_Abiertos::on_pushButton_2_clicked()
{
    close () ;
    GUI_Contratos g;
        g.exec();

}

void GUI_Contratos_Abiertos::on_listView_clicked(const QModelIndex &index)
{
    numero=index.data(Qt::DisplayRole).toInt();
    QSqlQuery queryContrato;
    queryContrato.prepare("SELECT * FROM contratoCompra WHERE numero=:a and estadoCartaPorte_ID=1");
    queryContrato.bindValue(":a",index.data(Qt::DisplayRole).toInt());
    queryContrato.exec();

    int prov;

    while (queryContrato.next()){

        ui->numero->setText(queryContrato.value(4).toString());
        ui->cantidad->setText(queryContrato.value(1).toString());
        if ((queryContrato.value(8).toInt()) == 1){
            ui->tipo->setText("Toneladas");
        }
        else {
            ui->tipo->setText("Camiones");
        }
        ui->fechaCreacion->setText(queryContrato.value(2).toString());
        ui->fechaLimite->setText(queryContrato.value(3).toString());
        ui->precio->setText(queryContrato.value(5).toString());

        prov = queryContrato.value(7).toInt();

    }
 ;

    QSqlQuery queryProductor;
    queryProductor.prepare("SELECT * FROM productor where ID=:b");
    queryProductor.bindValue(":b",prov);
    queryProductor.exec();
    while (queryProductor.next()) {

        ui->nombre->setText(queryProductor.value(3).toString());
        ui->razsoc->setText(queryProductor.value(4).toString());
        ui->condIVA->setText(queryProductor.value(1).toString());
        ui->cuit->setText(queryProductor.value(2).toString());
    }
     ui->CpGo->setEnabled(true);
     ui->cond->setEnabled(true);
     ui->fact->setEnabled(true);

}

void GUI_Contratos_Abiertos::on_cond_clicked()
{
    GUI_Contratos_Condiciones a(0,numero);
    a.exec();
}
