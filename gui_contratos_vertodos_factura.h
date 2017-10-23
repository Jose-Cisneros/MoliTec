#ifndef GUI_CONTRATOS_VERTODOS_FACTURA_H
#define GUI_CONTRATOS_VERTODOS_FACTURA_H

#include <QDialog>

namespace Ui {
class GUI_contratos_vertodos_factura;
}

class GUI_contratos_vertodos_factura : public QDialog
{
    Q_OBJECT

public:
    explicit GUI_contratos_vertodos_factura(QWidget *parent = 0);
    ~GUI_contratos_vertodos_factura();

private:
    Ui::GUI_contratos_vertodos_factura *ui;
};

#endif // GUI_CONTRATOS_VERTODOS_FACTURA_H
