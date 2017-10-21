#ifndef GUI_SOLICITUDES_H
#define GUI_SOLICITUDES_H

#include <QWidget>

namespace Ui {
class GUI_solicitudes;
}

class GUI_solicitudes : public QWidget
{
    Q_OBJECT

public:
    explicit GUI_solicitudes(QWidget *parent = 0);
    ~GUI_solicitudes();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::GUI_solicitudes *ui;
};

#endif // GUI_SOLICITUDES_H
