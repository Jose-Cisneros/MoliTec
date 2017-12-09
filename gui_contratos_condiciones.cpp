#include "gui_contratos_condiciones.h"
#include "ui_gui_contratos_condiciones.h"
#include "gui_contratos_abiertos.h"

GUI_Contratos_Condiciones::GUI_Contratos_Condiciones(QWidget *parent, int numero) :
    QDialog(parent),
    ui(new Ui::GUI_Contratos_Condiciones)
{
    ui->setupUi(this);

    QString filtro;
    filtro= "Contrato="+ QString::number(numero);
    ui->tableView->verticalHeader()->hide();
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    model.setTable("condiciones");
    model.setFilter(filtro);
    model.select();
    ui->tableView->setModel(&model);
    ui->tableView->setColumnHidden(0, true);
}

GUI_Contratos_Condiciones::~GUI_Contratos_Condiciones()
{
    delete ui;
}

