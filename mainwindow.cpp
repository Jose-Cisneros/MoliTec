#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gui_contratos.h"
#include "gui_ver.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_contrato_clicked()
{

    GUI_Contratos a;

    a.exec();


}

void MainWindow::on_pushButton_clicked()
{
    gui_ver e;
    e.exec();
}