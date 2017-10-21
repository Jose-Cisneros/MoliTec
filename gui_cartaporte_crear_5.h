#ifndef GUI_CARTAPORTE_CREAR_5_H
#define GUI_CARTAPORTE_CREAR_5_H

#include <QWidget>

namespace Ui {
class GUI_CartaPorte_Crear_5;
}

class GUI_CartaPorte_Crear_5 : public QWidget
{
    Q_OBJECT

public:
    explicit GUI_CartaPorte_Crear_5(QWidget *parent = 0);
    ~GUI_CartaPorte_Crear_5();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::GUI_CartaPorte_Crear_5 *ui;
};

#endif // GUI_CARTAPORTE_CREAR_5_H
