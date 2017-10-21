#ifndef GUI_SOLICITUDES_CREAR_H
#define GUI_SOLICITUDES_CREAR_H

#include <QDialog>

namespace Ui {
class GUI_solicitudes_crear;
}

class GUI_solicitudes_crear : public QDialog
{
    Q_OBJECT

public:
    explicit GUI_solicitudes_crear(QWidget *parent = 0);
    ~GUI_solicitudes_crear();

private slots:
    void on_commandLinkButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::GUI_solicitudes_crear *ui;
};

#endif // GUI_SOLICITUDES_CREAR_H
