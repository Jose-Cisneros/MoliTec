/********************************************************************************
** Form generated from reading UI file 'gui_solicitudes_crear_crearcondicion.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_SOLICITUDES_CREAR_CREARCONDICION_H
#define UI_GUI_SOLICITUDES_CREAR_CREARCONDICION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI_solicitudes_crear_crearCondicion
{
public:
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *GUI_solicitudes_crear_crearCondicion)
    {
        if (GUI_solicitudes_crear_crearCondicion->objectName().isEmpty())
            GUI_solicitudes_crear_crearCondicion->setObjectName(QStringLiteral("GUI_solicitudes_crear_crearCondicion"));
        GUI_solicitudes_crear_crearCondicion->resize(452, 356);
        label = new QLabel(GUI_solicitudes_crear_crearCondicion);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 0, 201, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        formLayoutWidget = new QWidget(GUI_solicitudes_crear_crearCondicion);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(100, 80, 231, 151));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(25);
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

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox);

        pushButton = new QPushButton(GUI_solicitudes_crear_crearCondicion);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 310, 75, 23));
        pushButton_2 = new QPushButton(GUI_solicitudes_crear_crearCondicion);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 310, 75, 23));

        retranslateUi(GUI_solicitudes_crear_crearCondicion);

        QMetaObject::connectSlotsByName(GUI_solicitudes_crear_crearCondicion);
    } // setupUi

    void retranslateUi(QDialog *GUI_solicitudes_crear_crearCondicion)
    {
        GUI_solicitudes_crear_crearCondicion->setWindowTitle(QApplication::translate("GUI_solicitudes_crear_crearCondicion", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("GUI_solicitudes_crear_crearCondicion", "Crear Condicion", Q_NULLPTR));
        label_2->setText(QApplication::translate("GUI_solicitudes_crear_crearCondicion", "Nombre", Q_NULLPTR));
        label_3->setText(QApplication::translate("GUI_solicitudes_crear_crearCondicion", "Unidad", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GUI_solicitudes_crear_crearCondicion", "crear", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GUI_solicitudes_crear_crearCondicion", "cancelar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUI_solicitudes_crear_crearCondicion: public Ui_GUI_solicitudes_crear_crearCondicion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_SOLICITUDES_CREAR_CREARCONDICION_H
