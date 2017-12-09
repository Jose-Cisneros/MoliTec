/********************************************************************************
** Form generated from reading UI file 'gui_contratos.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_CONTRATOS_H
#define UI_GUI_CONTRATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI_Contratos
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;

    void setupUi(QDialog *GUI_Contratos)
    {
        if (GUI_Contratos->objectName().isEmpty())
            GUI_Contratos->setObjectName(QStringLiteral("GUI_Contratos"));
        GUI_Contratos->resize(640, 480);
        label = new QLabel(GUI_Contratos);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 20, 341, 61));
        QFont font;
        font.setPointSize(23);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setFrameShape(QFrame::Panel);
        layoutWidget = new QWidget(GUI_Contratos);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 120, 321, 251));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        QFont font1;
        font1.setPointSize(16);
        pushButton->setFont(font1);
        pushButton->setIconSize(QSize(29, 400));

        verticalLayout->addWidget(pushButton);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font1);

        verticalLayout->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font1);

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font1);

        verticalLayout->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(GUI_Contratos);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(540, 440, 75, 23));

        retranslateUi(GUI_Contratos);

        QMetaObject::connectSlotsByName(GUI_Contratos);
    } // setupUi

    void retranslateUi(QDialog *GUI_Contratos)
    {
        GUI_Contratos->setWindowTitle(QApplication::translate("GUI_Contratos", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("GUI_Contratos", "Contratos de compra", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GUI_Contratos", "Contratos Abiertos", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("GUI_Contratos", "Cargar Carta de Porte", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GUI_Contratos", "Nuevo Contrato", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("GUI_Contratos", "Ver todos", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("GUI_Contratos", "Volver", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUI_Contratos: public Ui_GUI_Contratos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CONTRATOS_H
