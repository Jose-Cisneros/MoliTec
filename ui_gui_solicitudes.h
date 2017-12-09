/********************************************************************************
** Form generated from reading UI file 'gui_solicitudes.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_SOLICITUDES_H
#define UI_GUI_SOLICITUDES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI_solicitudes
{
public:
    QLabel *label;
    QListView *listView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_4;

    void setupUi(QWidget *GUI_solicitudes)
    {
        if (GUI_solicitudes->objectName().isEmpty())
            GUI_solicitudes->setObjectName(QStringLiteral("GUI_solicitudes"));
        GUI_solicitudes->resize(799, 599);
        label = new QLabel(GUI_solicitudes);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(380, -20, 231, 91));
        QFont font;
        font.setPointSize(26);
        label->setFont(font);
        listView = new QListView(GUI_solicitudes);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(70, 80, 341, 461));
        verticalLayoutWidget = new QWidget(GUI_solicitudes);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(490, 70, 201, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QFont font1;
        font1.setPointSize(20);
        pushButton_2->setFont(font1);

        verticalLayout->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font1);

        verticalLayout->addWidget(pushButton_5);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font1);

        verticalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font1);

        verticalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(GUI_solicitudes);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(700, 560, 75, 23));

        retranslateUi(GUI_solicitudes);

        QMetaObject::connectSlotsByName(GUI_solicitudes);
    } // setupUi

    void retranslateUi(QWidget *GUI_solicitudes)
    {
        GUI_solicitudes->setWindowTitle(QApplication::translate("GUI_solicitudes", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("GUI_solicitudes", "Solicitudes", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GUI_solicitudes", "Crear ", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("GUI_solicitudes", "Detalles", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("GUI_solicitudes", "Modificar", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GUI_solicitudes", "Eliminar", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("GUI_solicitudes", "volver", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUI_solicitudes: public Ui_GUI_solicitudes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_SOLICITUDES_H
