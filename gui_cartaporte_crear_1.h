#ifndef GUI_CARTAPORTE_CREAR_1_H
#define GUI_CARTAPORTE_CREAR_1_H

#include <QWidget>

namespace Ui {
class GUI_CartaPorte_Crear_1;
}

class GUI_CartaPorte_Crear_1 : public QWidget
{
    Q_OBJECT

public:
    explicit GUI_CartaPorte_Crear_1(QWidget *parent = 0);
    ~GUI_CartaPorte_Crear_1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GUI_CartaPorte_Crear_1 *ui;
};

#endif // GUI_CARTAPORTE_CREAR_1_H
