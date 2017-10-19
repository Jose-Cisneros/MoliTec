#ifndef GUI_CARTAPORTE_CREAR_4_H
#define GUI_CARTAPORTE_CREAR_4_H

#include <QWidget>

namespace Ui {
class GUI_CartaPorte_Crear_4;
}

class GUI_CartaPorte_Crear_4 : public QWidget
{
    Q_OBJECT

public:
    explicit GUI_CartaPorte_Crear_4(QWidget *parent = 0);
    ~GUI_CartaPorte_Crear_4();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GUI_CartaPorte_Crear_4 *ui;
};

#endif // GUI_CARTAPORTE_CREAR_4_H
