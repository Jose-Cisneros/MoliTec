/********************************************************************************
** Form generated from reading UI file 'gui_contratos_vertodos.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_CONTRATOS_VERTODOS_H
#define UI_GUI_CONTRATOS_VERTODOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI_contratos_verTodos
{
public:
    QLabel *label;
    QListView *listView;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;

    void setupUi(QDialog *GUI_contratos_verTodos)
    {
        if (GUI_contratos_verTodos->objectName().isEmpty())
            GUI_contratos_verTodos->setObjectName(QStringLiteral("GUI_contratos_verTodos"));
        GUI_contratos_verTodos->resize(796, 599);
        label = new QLabel(GUI_contratos_verTodos);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 0, 161, 61));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        listView = new QListView(GUI_contratos_verTodos);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 120, 451, 431));
        lineEdit = new QLineEdit(GUI_contratos_verTodos);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 80, 113, 20));
        label_2 = new QLabel(GUI_contratos_verTodos);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 80, 61, 21));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        verticalLayoutWidget = new QWidget(GUI_contratos_verTodos);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(530, 130, 231, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font2;
        font2.setPointSize(16);
        pushButton->setFont(font2);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setFont(font2);

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);
        pushButton_3->setFont(font2);
        pushButton_3->setCheckable(false);
        pushButton_3->setAutoDefault(false);

        verticalLayout->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QFont font3;
        font3.setPointSize(14);
        pushButton_5->setFont(font3);

        verticalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(GUI_contratos_verTodos);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(690, 560, 75, 23));

        retranslateUi(GUI_contratos_verTodos);

        QMetaObject::connectSlotsByName(GUI_contratos_verTodos);
    } // setupUi

    void retranslateUi(QDialog *GUI_contratos_verTodos)
    {
        GUI_contratos_verTodos->setWindowTitle(QApplication::translate("GUI_contratos_verTodos", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("GUI_contratos_verTodos", "Contratos", Q_NULLPTR));
        label_2->setText(QApplication::translate("GUI_contratos_verTodos", "Buscar", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GUI_contratos_verTodos", "Crear nuevo contrato", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GUI_contratos_verTodos", "Cerrar Contrato", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("GUI_contratos_verTodos", "Ver detalles", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("GUI_contratos_verTodos", "Cargar Factura", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("GUI_contratos_verTodos", "volver", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUI_contratos_verTodos: public Ui_GUI_contratos_verTodos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CONTRATOS_VERTODOS_H
