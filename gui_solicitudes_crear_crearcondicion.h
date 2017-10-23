#ifndef GUI_SOLICITUDES_CREAR_CREARCONDICION_H
#define GUI_SOLICITUDES_CREAR_CREARCONDICION_H

#include <QDialog>

namespace Ui {
class GUI_solicitudes_crear_crearCondicion;
}

class GUI_solicitudes_crear_crearCondicion : public QDialog
{
    Q_OBJECT

public:
    explicit GUI_solicitudes_crear_crearCondicion(QWidget *parent = 0);
    ~GUI_solicitudes_crear_crearCondicion();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GUI_solicitudes_crear_crearCondicion *ui;
};

#endif // GUI_SOLICITUDES_CREAR_CREARCONDICION_H
