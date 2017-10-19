#ifndef GUI_CARTAPORTE_CREAR_2_H
#define GUI_CARTAPORTE_CREAR_2_H

#include <QWidget>

namespace Ui {
class GUI_CartaPorte_Crear_2;
}

class GUI_CartaPorte_Crear_2 : public QWidget
{
    Q_OBJECT

public:
    explicit GUI_CartaPorte_Crear_2(QWidget *parent = 0);
    ~GUI_CartaPorte_Crear_2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GUI_CartaPorte_Crear_2 *ui;
};

#endif // GUI_CARTAPORTE_CREAR_2_H
