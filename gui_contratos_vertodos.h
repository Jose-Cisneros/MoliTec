#ifndef GUI_CONTRATOS_VERTODOS_H
#define GUI_CONTRATOS_VERTODOS_H

#include <QDialog>

namespace Ui {
class GUI_contratos_verTodos;
}

class GUI_contratos_verTodos : public QDialog
{
    Q_OBJECT

public:
    explicit GUI_contratos_verTodos(QWidget *parent = 0);
    ~GUI_contratos_verTodos();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::GUI_contratos_verTodos *ui;
};

#endif // GUI_CONTRATOS_VERTODOS_H
