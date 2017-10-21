#ifndef GUI_FACTURAS_H
#define GUI_FACTURAS_H

#include <QDialog>

namespace Ui {
class GUI_Facturas;
}

class GUI_Facturas : public QDialog
{
    Q_OBJECT

public:
    explicit GUI_Facturas(QWidget *parent = 0);
    ~GUI_Facturas();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GUI_Facturas *ui;
};

#endif // GUI_FACTURAS_H
