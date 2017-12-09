#include "gui_contrato_nuevocontrato.h"
#include "ui_gui_contrato_nuevocontrato.h"
#include "gui_contratos_vertodos.h"
#include <QMessageBox>
#include "gui_contratos.h"
#include "gui_contratos_condicion_nueva.h"


GUI_contrato_nuevoContrato::GUI_contrato_nuevoContrato(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GUI_contrato_nuevoContrato)
{
    ui->setupUi(this);
    cargarProveedores();


    ui->tableWidget->verticalHeader()->hide();
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

GUI_contrato_nuevoContrato::~GUI_contrato_nuevoContrato()
{
    delete ui;
}

void GUI_contrato_nuevoContrato::cargarProveedores()
{
    QSqlQuery query("SELECT razonSocial FROM productor");
        while (query.next()) {
            QString prod = query.value(0).toString();
            ui->comboProd->addItem(prod);
        }
}

void GUI_contrato_nuevoContrato::on_pushButton_clicked()
{   QMessageBox msgBox;


    QSqlQuery queryProd;
    queryProd.prepare("SELECT ID FROM productor WHERE razonSocial=:x");
    QString prov = ui->comboProd->currentText();

    queryProd.bindValue(":x",prov);
    queryProd.exec();

    while (queryProd.next()) {
         prov = queryProd.value(0).toString();

       }


    QSqlQuery queryUnidad;
    QString unidad = ui->comboUnidad->currentText();

    queryUnidad.prepare("select id from unidadCantidadGrano where descripcion=:x");
    queryUnidad.bindValue(":x",unidad);
    queryUnidad.exec();
    while (queryUnidad.next()) {
       unidad = queryUnidad.value(0).toString();
    }



    QSqlQuery query;
    query.prepare("INSERT INTO "
                  "contratoCompra "
                  "(cantidad,fecha,fechaLimite,numero,precio,productor_ID,unidadCantidadGrano_ID,estadoCartaPorte_ID)"
                  "values (:c,:f,:f,:n,:p,:prod,:uni,1)"
                  );
    QDate date;

    QString fechaAct = date.currentDate().toString("yyyyMMdd");
    QString fechaLimite = ui->dateEdit->date().toString("yyyyMMdd");
    QString nro=ui->spinBox_Nro->text();

    query.bindValue(0,ui->spinBox_Cantidad->text());
    query.bindValue(1,fechaAct);
    query.bindValue(2,fechaLimite);
    query.bindValue(3,nro);
    query.bindValue(4,ui->doubleSpinBox_precio->text());
    query.bindValue(5,prov);
    query.bindValue(6,unidad);


    query.exec();

    QSqlQuery contrato;
    contrato.prepare("SELECT ID FROM contratoCompra WHERE numero=:a");
    contrato.bindValue(":a",nro);
    contrato.exec();
    QString idContrato;
    while (contrato.next()) {
       idContrato = contrato.value(0).toString();
    }


    QString condicion;
    QString cantidad;
    QSqlQuery condicionQuery;
    QString idCondicion;
    QSqlQuery insertar;



    for (int i=0; i < ui->tableWidget->rowCount();i++)
    {
        condicion = ui->tableWidget->item(i,0)->text();
        cantidad = ui->tableWidget->item(i,1)->text();


        condicionQuery.prepare("SELECT ID FROM condicion WHERE nombre=:c");
        condicionQuery.bindValue(":c",condicion);
        condicionQuery.exec();
        while (condicionQuery.next()) {
           idCondicion = condicionQuery.value(0).toString();
        }

        insertar.prepare("INSERT INTO "
                         "condicionDetalle (cantidad,contratoCompra_ID,condicion_ID)"
                         "VALUES (:c,:contrato,:cond)");
        insertar.bindValue(":c",cantidad.toInt());
        insertar.bindValue(":contrato",idContrato.toInt());
        insertar.bindValue(":cond",idCondicion.toInt());
        insertar.exec();

        qDebug() << insertar.lastError();

    }


    msgBox.setInformativeText("El contrato fue creado correctamente");
    msgBox.exec();

    close();
}

void GUI_contrato_nuevoContrato::on_pushButton_2_clicked()
{    GUI_Contratos* pushButton_2 = new GUI_Contratos();
     pushButton_2 -> show() ;
    close();
}


void GUI_contrato_nuevoContrato::on_pushButton_3_clicked()
{
    gui_contratos_condicion_nueva P;
    int res = P.exec();
    if (res==QDialog::Accepted)
    {
        QString cond=P.getCondicion();
        float valor=P.getValor();
        QString unidad=P.getUnidad();

        ui->tableWidget->insertRow (ui->tableWidget->rowCount() );
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0, new QTableWidgetItem(cond));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1, new QTableWidgetItem(QString::number(valor)));
        ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,2, new QTableWidgetItem(unidad));
    }
}


