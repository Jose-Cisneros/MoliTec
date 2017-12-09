/********************************************************************************
** Form generated from reading UI file 'gui_solicitudes_crear.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_SOLICITUDES_CREAR_H
#define UI_GUI_SOLICITUDES_CREAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI_solicitudes_crear
{
public:
    QLabel *label;
    QLabel *label_2;
    QListView *listView;
    QCommandLinkButton *commandLinkButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox;
    QDateEdit *dateEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QDialog *GUI_solicitudes_crear)
    {
        if (GUI_solicitudes_crear->objectName().isEmpty())
            GUI_solicitudes_crear->setObjectName(QStringLiteral("GUI_solicitudes_crear"));
        GUI_solicitudes_crear->resize(801, 600);
        label = new QLabel(GUI_solicitudes_crear);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 10, 221, 41));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label_2 = new QLabel(GUI_solicitudes_crear);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 250, 181, 51));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        listView = new QListView(GUI_solicitudes_crear);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(20, 290, 631, 141));
        commandLinkButton = new QCommandLinkButton(GUI_solicitudes_crear);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(20, 430, 172, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe UI"));
        font2.setPointSize(10);
        commandLinkButton->setFont(font2);
        formLayoutWidget = new QWidget(GUI_solicitudes_crear);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(160, 90, 319, 141));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setVerticalSpacing(15);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit = new QLineEdit(formLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox);

        dateEdit = new QDateEdit(formLayoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, dateEdit);

        pushButton = new QPushButton(GUI_solicitudes_crear);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(590, 550, 75, 23));
        pushButton_3 = new QPushButton(GUI_solicitudes_crear);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(690, 550, 75, 23));

        retranslateUi(GUI_solicitudes_crear);

        QMetaObject::connectSlotsByName(GUI_solicitudes_crear);
    } // setupUi

    void retranslateUi(QDialog *GUI_solicitudes_crear)
    {
        GUI_solicitudes_crear->setWindowTitle(QApplication::translate("GUI_solicitudes_crear", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("GUI_solicitudes_crear", "Crear solicitud", Q_NULLPTR));
        label_2->setText(QApplication::translate("GUI_solicitudes_crear", "Elija una condicion ", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("GUI_solicitudes_crear", "crear nueva condicion", Q_NULLPTR));
        label_3->setText(QApplication::translate("GUI_solicitudes_crear", "cantidad", Q_NULLPTR));
        label_4->setText(QApplication::translate("GUI_solicitudes_crear", "Tipo grano", Q_NULLPTR));
        label_5->setText(QApplication::translate("GUI_solicitudes_crear", "Fecha limite", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GUI_solicitudes_crear", "Crear", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("GUI_solicitudes_crear", "Cancelar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUI_solicitudes_crear: public Ui_GUI_solicitudes_crear {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_SOLICITUDES_CREAR_H
