#ifndef GUI_CARTAPORTE_CREAR_3_H
#define GUI_CARTAPORTE_CREAR_3_H

#include <QWidget>

namespace Ui {
class GUI_CartaPorte_Crear_3;
}

class GUI_CartaPorte_Crear_3 : public QWidget
{
    Q_OBJECT

public:
    explicit GUI_CartaPorte_Crear_3(QWidget *parent = 0);
    ~GUI_CartaPorte_Crear_3();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GUI_CartaPorte_Crear_3 *ui;
};

#endif // GUI_CARTAPORTE_CREAR_3_H
