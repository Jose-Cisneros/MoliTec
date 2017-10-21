
#ifndef GUI_CARTAPORTE_H
#define GUI_CARTAPORTE_H

#include <QWidget>

namespace Ui {
class Gui_CartaPorte;
}

class Gui_CartaPorte : public QWidget
{
    Q_OBJECT

public:
    explicit Gui_CartaPorte(QWidget *parent = 0);
    ~Gui_CartaPorte();

private slots:
    void on_crearCp_clicked();

private:
    Ui::Gui_CartaPorte *ui;
};

#endif // GUI_CARTAPORTE_H
