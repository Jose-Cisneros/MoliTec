/********************************************************************************
** Form generated from reading UI file 'gui_cartaporte_crear_3.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_CARTAPORTE_CREAR_3_H
#define UI_GUI_CARTAPORTE_CREAR_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI_CartaPorte_Crear_3
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QComboBox *comboBox;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *lineEdit_10;
    QLabel *label_19;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_9;
    QLabel *label_6;
    QPushButton *pushButton_2;

    void setupUi(QWidget *GUI_CartaPorte_Crear_3)
    {
        if (GUI_CartaPorte_Crear_3->objectName().isEmpty())
            GUI_CartaPorte_Crear_3->setObjectName(QStringLiteral("GUI_CartaPorte_Crear_3"));
        GUI_CartaPorte_Crear_3->resize(802, 599);
        pushButton = new QPushButton(GUI_CartaPorte_Crear_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(600, 560, 75, 23));
        label = new QLabel(GUI_CartaPorte_Crear_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 0, 571, 71));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(GUI_CartaPorte_Crear_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 200, 231, 21));
        QFont font1;
        font1.setPointSize(18);
        label_2->setFont(font1);
        label_3 = new QLabel(GUI_CartaPorte_Crear_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 90, 47, 13));
        QFont font2;
        font2.setPointSize(12);
        label_3->setFont(font2);
        label_4 = new QLabel(GUI_CartaPorte_Crear_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 120, 121, 21));
        QFont font3;
        font3.setPointSize(11);
        label_4->setFont(font3);
        label_5 = new QLabel(GUI_CartaPorte_Crear_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 136, 61, 20));
        label_5->setFont(font2);
        verticalLayoutWidget = new QWidget(GUI_CartaPorte_Crear_3);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(270, 80, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        formLayoutWidget_2 = new QWidget(GUI_CartaPorte_Crear_3);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(200, 230, 271, 111));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setVerticalSpacing(20);
        formLayout_2->setContentsMargins(0, 0, 40, 0);
        label_14 = new QLabel(formLayoutWidget_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font2);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_14);

        label_15 = new QLabel(formLayoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font2);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_15);

        label_16 = new QLabel(formLayoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font2);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_16);

        lineEdit_7 = new QLineEdit(formLayoutWidget_2);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_7);

        lineEdit_8 = new QLineEdit(formLayoutWidget_2);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_8);

        comboBox = new QComboBox(formLayoutWidget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, comboBox);

        formLayoutWidget_3 = new QWidget(GUI_CartaPorte_Crear_3);
        formLayoutWidget_3->setObjectName(QStringLiteral("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(200, 430, 271, 121));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setVerticalSpacing(20);
        formLayout_3->setContentsMargins(0, 0, 40, 0);
        label_17 = new QLabel(formLayoutWidget_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font2);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_17);

        label_18 = new QLabel(formLayoutWidget_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setFont(font2);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_18);

        lineEdit_10 = new QLineEdit(formLayoutWidget_3);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEdit_10);

        label_19 = new QLabel(formLayoutWidget_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font2);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_19);

        comboBox_2 = new QComboBox(formLayoutWidget_3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, comboBox_2);

        lineEdit_9 = new QLineEdit(formLayoutWidget_3);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_9);

        label_6 = new QLabel(GUI_CartaPorte_Crear_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 390, 381, 41));
        label_6->setFont(font1);
        pushButton_2 = new QPushButton(GUI_CartaPorte_Crear_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(700, 560, 75, 23));

        retranslateUi(GUI_CartaPorte_Crear_3);

        QMetaObject::connectSlotsByName(GUI_CartaPorte_Crear_3);
    } // setupUi

    void retranslateUi(QWidget *GUI_CartaPorte_Crear_3)
    {
        GUI_CartaPorte_Crear_3->setWindowTitle(QApplication::translate("GUI_CartaPorte_Crear_3", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GUI_CartaPorte_Crear_3", "siguiente", Q_NULLPTR));
        label->setText(QApplication::translate("GUI_CartaPorte_Crear_3", "Datos del destinatario y destino de los granos", Q_NULLPTR));
        label_2->setText(QApplication::translate("GUI_CartaPorte_Crear_3", "Domicilio Fiscal", Q_NULLPTR));
        label_3->setText(QApplication::translate("GUI_CartaPorte_Crear_3", "CUIT", Q_NULLPTR));
        label_4->setText(QApplication::translate("GUI_CartaPorte_Crear_3", "Nombre o razon", Q_NULLPTR));
        label_5->setText(QApplication::translate("GUI_CartaPorte_Crear_3", "social", Q_NULLPTR));
        label_14->setText(QApplication::translate("GUI_CartaPorte_Crear_3", "Direccion", Q_NULLPTR));
        label_15->setText(QApplication::translate("GUI_CartaPorte_Crear_3", "Localidad", Q_NULLPTR));
        label_16->setText(QApplication::translate("GUI_CartaPorte_Crear_3", "Provincia", Q_NULLPTR));
        label_17->setText(QApplication::translate("GUI_CartaPorte_Crear_3", "Direccion", Q_NULLPTR));
        label_18->setText(QApplication::translate("GUI_CartaPorte_Crear_3", "Localidad", Q_NULLPTR));
        label_19->setText(QApplication::translate("GUI_CartaPorte_Crear_3", "Provincia", Q_NULLPTR));
        label_6->setText(QApplication::translate("GUI_CartaPorte_Crear_3", "Lugar de destino de los granos", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GUI_CartaPorte_Crear_3", "Cancelar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUI_CartaPorte_Crear_3: public Ui_GUI_CartaPorte_Crear_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CARTAPORTE_CREAR_3_H
