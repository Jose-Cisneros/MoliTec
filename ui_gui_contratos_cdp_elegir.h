/********************************************************************************
** Form generated from reading UI file 'gui_contratos_cdp_elegir.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_CONTRATOS_CDP_ELEGIR_H
#define UI_GUI_CONTRATOS_CDP_ELEGIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI_Contratos_CDP_elegir
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QListWidget *listWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_3;

    void setupUi(QDialog *GUI_Contratos_CDP_elegir)
    {
        if (GUI_Contratos_CDP_elegir->objectName().isEmpty())
            GUI_Contratos_CDP_elegir->setObjectName(QStringLiteral("GUI_Contratos_CDP_elegir"));
        GUI_Contratos_CDP_elegir->resize(506, 480);
        buttonBox = new QDialogButtonBox(GUI_Contratos_CDP_elegir);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(0, 430, 331, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(GUI_Contratos_CDP_elegir);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 10, 251, 61));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        listWidget = new QListWidget(GUI_Contratos_CDP_elegir);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(40, 100, 256, 301));
        layoutWidget = new QWidget(GUI_Contratos_CDP_elegir);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 330, 141, 72));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_3->addWidget(label_13);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_3->addWidget(label_14);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_3->addWidget(label_11);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_3->addWidget(label_12);

        layoutWidget_2 = new QWidget(GUI_Contratos_CDP_elegir);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(310, 130, 151, 161));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(GUI_Contratos_CDP_elegir);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(310, 100, 151, 16));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_10->setFont(font1);
        label_3 = new QLabel(GUI_Contratos_CDP_elegir);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 290, 161, 41));
        label_3->setFont(font1);

        retranslateUi(GUI_Contratos_CDP_elegir);
        QObject::connect(buttonBox, SIGNAL(accepted()), GUI_Contratos_CDP_elegir, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GUI_Contratos_CDP_elegir, SLOT(reject()));

        QMetaObject::connectSlotsByName(GUI_Contratos_CDP_elegir);
    } // setupUi

    void retranslateUi(QDialog *GUI_Contratos_CDP_elegir)
    {
        GUI_Contratos_CDP_elegir->setWindowTitle(QApplication::translate("GUI_Contratos_CDP_elegir", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("GUI_Contratos_CDP_elegir", "Elija el contrato:", Q_NULLPTR));
        label_13->setText(QApplication::translate("GUI_Contratos_CDP_elegir", "Nombre:", Q_NULLPTR));
        label_14->setText(QApplication::translate("GUI_Contratos_CDP_elegir", "Raz\303\263n Social:", Q_NULLPTR));
        label_11->setText(QApplication::translate("GUI_Contratos_CDP_elegir", "Condicion IVA:", Q_NULLPTR));
        label_12->setText(QApplication::translate("GUI_Contratos_CDP_elegir", "CUIT:", Q_NULLPTR));
        label_2->setText(QApplication::translate("GUI_Contratos_CDP_elegir", "Cantidad:", Q_NULLPTR));
        label_4->setText(QApplication::translate("GUI_Contratos_CDP_elegir", "Fecha creacion:", Q_NULLPTR));
        label_5->setText(QApplication::translate("GUI_Contratos_CDP_elegir", "Fecha Limite", Q_NULLPTR));
        label_6->setText(QApplication::translate("GUI_Contratos_CDP_elegir", "Numero:", Q_NULLPTR));
        label_7->setText(QApplication::translate("GUI_Contratos_CDP_elegir", "Precio:", Q_NULLPTR));
        label_8->setText(QApplication::translate("GUI_Contratos_CDP_elegir", "Tipo:", Q_NULLPTR));
        label_9->setText(QApplication::translate("GUI_Contratos_CDP_elegir", "Toneladas:", Q_NULLPTR));
        label_10->setText(QApplication::translate("GUI_Contratos_CDP_elegir", "Datos del Contrato:", Q_NULLPTR));
        label_3->setText(QApplication::translate("GUI_Contratos_CDP_elegir", "Datos del Productor:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUI_Contratos_CDP_elegir: public Ui_GUI_Contratos_CDP_elegir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CONTRATOS_CDP_ELEGIR_H
