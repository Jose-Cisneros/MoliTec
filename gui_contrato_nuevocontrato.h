#ifndef GUI_CONTRATO_NUEVOCONTRATO_H
#define GUI_CONTRATO_NUEVOCONTRATO_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class GUI_contrato_nuevoContrato;
}

class GUI_contrato_nuevoContrato : public QDialog
{
    Q_OBJECT

public:
    explicit GUI_contrato_nuevoContrato(QWidget *parent = 0);
    ~GUI_contrato_nuevoContrato();

    void cargarProveedores();




private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::GUI_contrato_nuevoContrato *ui;
};

#endif // GUI_CONTRATO_NUEVOCONTRATO_H
