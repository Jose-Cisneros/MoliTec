#include "gui_contratos_condicion_nueva.h"
#include "ui_gui_contratos_condicion_nueva.h"


gui_contratos_condicion_nueva::gui_contratos_condicion_nueva(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gui_contratos_condicion_nueva)
{
    ui->setupUi(this);

    lista.setTable("condicion");
    lista.select();

    ui->tableView->setModel(&lista);
    ui->tableView->hideColumn(0);
    ui->tableView->verticalHeader()->hide();
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);



}

gui_contratos_condicion_nueva::~gui_contratos_condicion_nueva()
{
    delete ui;
}

QString gui_contratos_condicion_nueva::getCondicion()
{
    int row = ui->tableView->selectionModel()->currentIndex().row();
    return lista.record(row).value(1).toString();
}

float gui_contratos_condicion_nueva::getValor()
{
    return ui->doubleSpinBox->value();
}

QString gui_contratos_condicion_nueva::getUnidad()
{
    int row = ui->tableView->selectionModel()->currentIndex().row();
    return lista.record(row).value(2).toString();
}


