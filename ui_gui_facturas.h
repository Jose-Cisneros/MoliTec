/********************************************************************************
** Form generated from reading UI file 'gui_facturas.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_FACTURAS_H
#define UI_GUI_FACTURAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_GUI_Facturas
{
public:
    QLabel *label;
    QListView *listView;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_3;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QDateEdit *dateEdit;
    QLabel *label_8;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_3;
    QDateEdit *dateEdit_2;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QPushButton *pushButton_3;

    void setupUi(QDialog *GUI_Facturas)
    {
        if (GUI_Facturas->objectName().isEmpty())
            GUI_Facturas->setObjectName(QStringLiteral("GUI_Facturas"));
        GUI_Facturas->resize(800, 593);
        QFont font;
        font.setPointSize(28);
        GUI_Facturas->setFont(font);
        label = new QLabel(GUI_Facturas);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 0, 181, 61));
        QFont font1;
        font1.setPointSize(22);
        label->setFont(font1);
        listView = new QListView(GUI_Facturas);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 100, 421, 211));
        label_2 = new QLabel(GUI_Facturas);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 51, 21));
        QFont font2;
        font2.setPointSize(12);
        label_2->setFont(font2);
        lineEdit = new QLineEdit(GUI_Facturas);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 60, 113, 21));
        pushButton = new QPushButton(GUI_Facturas);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(690, 550, 75, 23));
        QFont font3;
        font3.setPointSize(8);
        pushButton->setFont(font3);
        label_3 = new QLabel(GUI_Facturas);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(580, 30, 171, 31));
        label_3->setFont(font2);
        formLayoutWidget = new QWidget(GUI_Facturas);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(440, 90, 171, 98));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setVerticalSpacing(25);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setFont(font3);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        dateEdit = new QDateEdit(formLayoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setFont(font3);

        formLayout->setWidget(0, QFormLayout::FieldRole, dateEdit);

        label_8 = new QLabel(GUI_Facturas);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 350, 301, 101));
        formLayoutWidget_2 = new QWidget(GUI_Facturas);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(620, 90, 171, 98));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setVerticalSpacing(25);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font2);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(formLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font2);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        lineEdit_3 = new QLineEdit(formLayoutWidget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setFont(font3);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_3);

        dateEdit_2 = new QDateEdit(formLayoutWidget_2);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setFont(font3);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, dateEdit_2);

        lineEdit_4 = new QLineEdit(GUI_Facturas);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(610, 200, 113, 20));
        label_4 = new QLabel(GUI_Facturas);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(520, 200, 81, 21));
        label_4->setFont(font2);
        pushButton_2 = new QPushButton(GUI_Facturas);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(580, 250, 131, 41));
        pushButton_2->setFont(font2);
        label_5 = new QLabel(GUI_Facturas);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 470, 191, 41));
        QFont font4;
        font4.setPointSize(14);
        label_5->setFont(font4);
        pushButton_3 = new QPushButton(GUI_Facturas);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 330, 101, 23));
        QFont font5;
        font5.setPointSize(10);
        pushButton_3->setFont(font5);

        retranslateUi(GUI_Facturas);

        QMetaObject::connectSlotsByName(GUI_Facturas);
    } // setupUi

    void retranslateUi(QDialog *GUI_Facturas)
    {
        GUI_Facturas->setWindowTitle(QApplication::translate("GUI_Facturas", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("GUI_Facturas", "Facturas", Q_NULLPTR));
        label_2->setText(QApplication::translate("GUI_Facturas", "Buscar", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GUI_Facturas", "volver", Q_NULLPTR));
        label_3->setText(QApplication::translate("GUI_Facturas", "Aplicar filtros", Q_NULLPTR));
        label_6->setText(QApplication::translate("GUI_Facturas", "Desde:", Q_NULLPTR));
        label_7->setText(QApplication::translate("GUI_Facturas", "Precio Min", Q_NULLPTR));
        label_8->setText(QApplication::translate("GUI_Facturas", "Total Facturado:", Q_NULLPTR));
        label_9->setText(QApplication::translate("GUI_Facturas", "Hasta", Q_NULLPTR));
        label_10->setText(QApplication::translate("GUI_Facturas", "Precio Max", Q_NULLPTR));
        label_4->setText(QApplication::translate("GUI_Facturas", "Proveedor", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GUI_Facturas", "Filtrar", Q_NULLPTR));
        label_5->setText(QApplication::translate("GUI_Facturas", "cantidad de Facturas:", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("GUI_Facturas", "Calcular total", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUI_Facturas: public Ui_GUI_Facturas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_FACTURAS_H
