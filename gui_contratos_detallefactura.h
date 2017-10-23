#ifndef GUI_CONTRATOS_DETALLEFACTURA_H
#define GUI_CONTRATOS_DETALLEFACTURA_H

#include <QDialog>

namespace Ui {
class GUI_contratos_detalleFactura;
}

class GUI_contratos_detalleFactura : public QDialog
{
    Q_OBJECT

public:
    explicit GUI_contratos_detalleFactura(QWidget *parent = 0);
    ~GUI_contratos_detalleFactura();

private:
    Ui::GUI_contratos_detalleFactura *ui;
};

#endif // GUI_CONTRATOS_DETALLEFACTURA_H
