#ifndef GUI_CONTRATOS_ABIERTOS_H
#define GUI_CONTRATOS_ABIERTOS_H

#include <QDialog>
#include <QTSql>

namespace Ui {
class GUI_Contratos_Abiertos;
}

class GUI_Contratos_Abiertos : public QDialog
{
    Q_OBJECT

public:
    explicit GUI_Contratos_Abiertos(QWidget *parent = 0);
    ~GUI_Contratos_Abiertos();
    int getNumeroClickeado();

    int numero;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();



    void on_CpGo_clicked();

    void on_listView_clicked(const QModelIndex &index);

    void on_cond_clicked();

private:
    Ui::GUI_Contratos_Abiertos *ui;
    QSqlQueryModel lista;
};

#endif // GUI_CONTRATOS_ABIERTOS_H
