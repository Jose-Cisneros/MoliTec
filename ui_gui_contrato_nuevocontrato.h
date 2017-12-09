/********************************************************************************
** Form generated from reading UI file 'gui_contrato_nuevocontrato.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_CONTRATO_NUEVOCONTRATO_H
#define UI_GUI_CONTRATO_NUEVOCONTRATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI_contrato_nuevoContrato
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *comboProd;
    QLabel *label_3;
    QLabel *label_6;
    QComboBox *comboUnidad;
    QLabel *label_5;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QSpinBox *spinBox_Nro;
    QLabel *label_8;
    QSpinBox *spinBox_Cantidad;
    QDoubleSpinBox *doubleSpinBox_precio;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;

    void setupUi(QDialog *GUI_contrato_nuevoContrato)
    {
        if (GUI_contrato_nuevoContrato->objectName().isEmpty())
            GUI_contrato_nuevoContrato->setObjectName(QStringLiteral("GUI_contrato_nuevoContrato"));
        GUI_contrato_nuevoContrato->resize(668, 459);
        label = new QLabel(GUI_contrato_nuevoContrato);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, -10, 271, 81));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        formLayoutWidget = new QWidget(GUI_contrato_nuevoContrato);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 80, 241, 331));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setVerticalSpacing(25);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        comboProd = new QComboBox(formLayoutWidget);
        comboProd->setObjectName(QStringLiteral("comboProd"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboProd);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        comboUnidad = new QComboBox(formLayoutWidget);
        comboUnidad->setObjectName(QStringLiteral("comboUnidad"));

        formLayout->setWidget(5, QFormLayout::FieldRole, comboUnidad);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_5);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_4);

        dateEdit = new QDateEdit(formLayoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, dateEdit);

        spinBox_Nro = new QSpinBox(formLayoutWidget);
        spinBox_Nro->setObjectName(QStringLiteral("spinBox_Nro"));
        spinBox_Nro->setMaximum(1000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBox_Nro);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_8);

        spinBox_Cantidad = new QSpinBox(formLayoutWidget);
        spinBox_Cantidad->setObjectName(QStringLiteral("spinBox_Cantidad"));
        spinBox_Cantidad->setMaximum(1000000);

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBox_Cantidad);

        doubleSpinBox_precio = new QDoubleSpinBox(formLayoutWidget);
        doubleSpinBox_precio->setObjectName(QStringLiteral("doubleSpinBox_precio"));
        doubleSpinBox_precio->setMaximum(1e+7);

        formLayout->setWidget(6, QFormLayout::FieldRole, doubleSpinBox_precio);

        pushButton = new QPushButton(GUI_contrato_nuevoContrato);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 410, 75, 23));
        pushButton_2 = new QPushButton(GUI_contrato_nuevoContrato);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 410, 75, 23));
        label_7 = new QLabel(GUI_contrato_nuevoContrato);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(320, 130, 171, 31));
        QFont font2;
        font2.setPointSize(14);
        label_7->setFont(font2);
        pushButton_3 = new QPushButton(GUI_contrato_nuevoContrato);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(310, 340, 111, 31));
        tableWidget = new QTableWidget(GUI_contrato_nuevoContrato);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(300, 170, 311, 161));

        retranslateUi(GUI_contrato_nuevoContrato);

        QMetaObject::connectSlotsByName(GUI_contrato_nuevoContrato);
    } // setupUi

    void retranslateUi(QDialog *GUI_contrato_nuevoContrato)
    {
        GUI_contrato_nuevoContrato->setWindowTitle(QApplication::translate("GUI_contrato_nuevoContrato", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("GUI_contrato_nuevoContrato", "Crear contrato", Q_NULLPTR));
        label_2->setText(QApplication::translate("GUI_contrato_nuevoContrato", "Productor", Q_NULLPTR));
        label_3->setText(QApplication::translate("GUI_contrato_nuevoContrato", "Cantidad", Q_NULLPTR));
        label_6->setText(QApplication::translate("GUI_contrato_nuevoContrato", "Unidad", Q_NULLPTR));
        comboUnidad->clear();
        comboUnidad->insertItems(0, QStringList()
         << QApplication::translate("GUI_contrato_nuevoContrato", "Toneladas", Q_NULLPTR)
         << QApplication::translate("GUI_contrato_nuevoContrato", "Camiones", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("GUI_contrato_nuevoContrato", "Precio", Q_NULLPTR));
        label_4->setText(QApplication::translate("GUI_contrato_nuevoContrato", "fecha Limite", Q_NULLPTR));
        label_8->setText(QApplication::translate("GUI_contrato_nuevoContrato", "N\303\272mero", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GUI_contrato_nuevoContrato", "Crear", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GUI_contrato_nuevoContrato", "Cancelar", Q_NULLPTR));
        label_7->setText(QApplication::translate("GUI_contrato_nuevoContrato", "Lista de condiciones", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("GUI_contrato_nuevoContrato", "Agregar condicion", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("GUI_contrato_nuevoContrato", "Condicion", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("GUI_contrato_nuevoContrato", "Valor", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("GUI_contrato_nuevoContrato", "Unidad", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUI_contrato_nuevoContrato: public Ui_GUI_contrato_nuevoContrato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CONTRATO_NUEVOCONTRATO_H
