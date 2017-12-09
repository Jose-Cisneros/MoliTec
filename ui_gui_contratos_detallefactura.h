/********************************************************************************
** Form generated from reading UI file 'gui_contratos_detallefactura.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_CONTRATOS_DETALLEFACTURA_H
#define UI_GUI_CONTRATOS_DETALLEFACTURA_H

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

class Ui_GUI_contratos_detalleFactura
{
public:
    QLabel *label;
    QListView *listView;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *GUI_contratos_detalleFactura)
    {
        if (GUI_contratos_detalleFactura->objectName().isEmpty())
            GUI_contratos_detalleFactura->setObjectName(QStringLiteral("GUI_contratos_detalleFactura"));
        GUI_contratos_detalleFactura->resize(400, 300);
        label = new QLabel(GUI_contratos_detalleFactura);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 0, 231, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        listView = new QListView(GUI_contratos_detalleFactura);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 40, 341, 181));
        pushButton_2 = new QPushButton(GUI_contratos_detalleFactura);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 270, 91, 21));
        pushButton = new QPushButton(GUI_contratos_detalleFactura);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 230, 111, 41));

        retranslateUi(GUI_contratos_detalleFactura);

        QMetaObject::connectSlotsByName(GUI_contratos_detalleFactura);
    } // setupUi

    void retranslateUi(QDialog *GUI_contratos_detalleFactura)
    {
        GUI_contratos_detalleFactura->setWindowTitle(QApplication::translate("GUI_contratos_detalleFactura", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("GUI_contratos_detalleFactura", "Detalles del contrato", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GUI_contratos_detalleFactura", "cancelar", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GUI_contratos_detalleFactura", "facturar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUI_contratos_detalleFactura: public Ui_GUI_contratos_detalleFactura {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CONTRATOS_DETALLEFACTURA_H
