/********************************************************************************
** Form generated from reading UI file 'gui_cartaporte_crear_5.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_CARTAPORTE_CREAR_5_H
#define UI_GUI_CARTAPORTE_CREAR_5_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI_CartaPorte_Crear_5
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QTimeEdit *timeEdit;
    QTimeEdit *timeEdit_2;

    void setupUi(QWidget *GUI_CartaPorte_Crear_5)
    {
        if (GUI_CartaPorte_Crear_5->objectName().isEmpty())
            GUI_CartaPorte_Crear_5->setObjectName(QStringLiteral("GUI_CartaPorte_Crear_5"));
        GUI_CartaPorte_Crear_5->resize(799, 601);
        pushButton = new QPushButton(GUI_CartaPorte_Crear_5);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 560, 75, 23));
        label = new QLabel(GUI_CartaPorte_Crear_5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 0, 561, 81));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton_2 = new QPushButton(GUI_CartaPorte_Crear_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(670, 560, 75, 23));
        formLayoutWidget = new QWidget(GUI_CartaPorte_Crear_5);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(110, 80, 271, 421));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setVerticalSpacing(50);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        dateEdit = new QDateEdit(formLayoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, dateEdit);

        dateEdit_2 = new QDateEdit(formLayoutWidget);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, dateEdit_2);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_2);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_3);

        timeEdit = new QTimeEdit(GUI_CartaPorte_Crear_5);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(390, 80, 118, 21));
        timeEdit_2 = new QTimeEdit(GUI_CartaPorte_Crear_5);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));
        timeEdit_2->setGeometry(QRect(390, 152, 118, 20));

        retranslateUi(GUI_CartaPorte_Crear_5);

        QMetaObject::connectSlotsByName(GUI_CartaPorte_Crear_5);
    } // setupUi

    void retranslateUi(QWidget *GUI_CartaPorte_Crear_5)
    {
        GUI_CartaPorte_Crear_5->setWindowTitle(QApplication::translate("GUI_CartaPorte_Crear_5", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GUI_CartaPorte_Crear_5", "siguiente", Q_NULLPTR));
        label->setText(QApplication::translate("GUI_CartaPorte_Crear_5", "Datos a completar en el lugar de descarga", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GUI_CartaPorte_Crear_5", "Cancelar", Q_NULLPTR));
        label_2->setText(QApplication::translate("GUI_CartaPorte_Crear_5", "Arribo", Q_NULLPTR));
        label_3->setText(QApplication::translate("GUI_CartaPorte_Crear_5", "Descarga", Q_NULLPTR));
        label_4->setText(QApplication::translate("GUI_CartaPorte_Crear_5", "Turno", Q_NULLPTR));
        label_5->setText(QApplication::translate("GUI_CartaPorte_Crear_5", "Peso bruto(Kgrs)", Q_NULLPTR));
        label_6->setText(QApplication::translate("GUI_CartaPorte_Crear_5", "Peso tara(Kgrs)", Q_NULLPTR));
        label_7->setText(QApplication::translate("GUI_CartaPorte_Crear_5", "Peso neto(Kgrs)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUI_CartaPorte_Crear_5: public Ui_GUI_CartaPorte_Crear_5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CARTAPORTE_CREAR_5_H
