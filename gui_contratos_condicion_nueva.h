#ifndef GUI_CONTRATOS_CONDICION_NUEVA_H
#define GUI_CONTRATOS_CONDICION_NUEVA_H
#include <QtSql>
#include <QDialog>

namespace Ui {
class gui_contratos_condicion_nueva;
}

class gui_contratos_condicion_nueva : public QDialog
{
    Q_OBJECT

public:
    explicit gui_contratos_condicion_nueva(QWidget *parent = 0);
    ~gui_contratos_condicion_nueva();
    QString getCondicion();
    float getValor();
    QString getUnidad();




private:
    Ui::gui_contratos_condicion_nueva *ui;

    QSqlTableModel lista;
};

#endif // GUI_CONTRATOS_CONDICION_NUEVA_H
