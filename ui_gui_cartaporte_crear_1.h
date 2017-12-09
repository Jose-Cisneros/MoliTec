/********************************************************************************
** Form generated from reading UI file 'gui_cartaporte_crear_1.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_CARTAPORTE_CREAR_1_H
#define UI_GUI_CARTAPORTE_CREAR_1_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI_CartaPorte_Crear_1
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox;
    QPushButton *pushButton_2;

    void setupUi(QWidget *GUI_CartaPorte_Crear_1)
    {
        if (GUI_CartaPorte_Crear_1->objectName().isEmpty())
            GUI_CartaPorte_Crear_1->setObjectName(QStringLiteral("GUI_CartaPorte_Crear_1"));
        GUI_CartaPorte_Crear_1->resize(794, 599);
        label = new QLabel(GUI_CartaPorte_Crear_1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 0, 461, 71));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        pushButton = new QPushButton(GUI_CartaPorte_Crear_1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(600, 540, 75, 23));
        formLayoutWidget = new QWidget(GUI_CartaPorte_Crear_1);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(120, 70, 381, 401));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setVerticalSpacing(50);
        formLayout->setContentsMargins(20, 20, 70, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(11);
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

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        lineEdit_4 = new QLineEdit(formLayoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox);

        pushButton_2 = new QPushButton(GUI_CartaPorte_Crear_1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(710, 540, 75, 23));

        retranslateUi(GUI_CartaPorte_Crear_1);

        QMetaObject::connectSlotsByName(GUI_CartaPorte_Crear_1);
    } // setupUi

    void retranslateUi(QWidget *GUI_CartaPorte_Crear_1)
    {
        GUI_CartaPorte_Crear_1->setWindowTitle(QApplication::translate("GUI_CartaPorte_Crear_1", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("GUI_CartaPorte_Crear_1", "Datos del remitente y domicilio fiscal", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GUI_CartaPorte_Crear_1", "seguiente", Q_NULLPTR));
        label_2->setText(QApplication::translate("GUI_CartaPorte_Crear_1", "CUIT", Q_NULLPTR));
        label_3->setText(QApplication::translate("GUI_CartaPorte_Crear_1", "Nombre ", Q_NULLPTR));
        label_4->setText(QApplication::translate("GUI_CartaPorte_Crear_1", "Direccion", Q_NULLPTR));
        label_5->setText(QApplication::translate("GUI_CartaPorte_Crear_1", "Localidad", Q_NULLPTR));
        label_6->setText(QApplication::translate("GUI_CartaPorte_Crear_1", "Provincia", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("GUI_CartaPorte_Crear_1", "Buenos Aires", Q_NULLPTR)
         << QApplication::translate("GUI_CartaPorte_Crear_1", "Cordoba", Q_NULLPTR)
        );
        pushButton_2->setText(QApplication::translate("GUI_CartaPorte_Crear_1", "Cancelar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUI_CartaPorte_Crear_1: public Ui_GUI_CartaPorte_Crear_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CARTAPORTE_CREAR_1_H
