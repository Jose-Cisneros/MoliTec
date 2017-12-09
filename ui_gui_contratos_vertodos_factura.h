/********************************************************************************
** Form generated from reading UI file 'gui_contratos_vertodos_factura.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_CONTRATOS_VERTODOS_FACTURA_H
#define UI_GUI_CONTRATOS_VERTODOS_FACTURA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GUI_contratos_vertodos_factura
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListView *listView;

    void setupUi(QDialog *GUI_contratos_vertodos_factura)
    {
        if (GUI_contratos_vertodos_factura->objectName().isEmpty())
            GUI_contratos_vertodos_factura->setObjectName(QStringLiteral("GUI_contratos_vertodos_factura"));
        GUI_contratos_vertodos_factura->resize(400, 300);
        label = new QLabel(GUI_contratos_vertodos_factura);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 0, 231, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        pushButton = new QPushButton(GUI_contratos_vertodos_factura);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 230, 111, 41));
        pushButton_2 = new QPushButton(GUI_contratos_vertodos_factura);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 270, 91, 21));
        listView = new QListView(GUI_contratos_vertodos_factura);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 40, 341, 181));

        retranslateUi(GUI_contratos_vertodos_factura);

        QMetaObject::connectSlotsByName(GUI_contratos_vertodos_factura);
    } // setupUi

    void retranslateUi(QDialog *GUI_contratos_vertodos_factura)
    {
        GUI_contratos_vertodos_factura->setWindowTitle(QApplication::translate("GUI_contratos_vertodos_factura", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("GUI_contratos_vertodos_factura", "Detalles del contrato", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GUI_contratos_vertodos_factura", "facturar", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GUI_contratos_vertodos_factura", "cancelar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUI_contratos_vertodos_factura: public Ui_GUI_contratos_vertodos_factura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CONTRATOS_VERTODOS_FACTURA_H
