/********************************************************************************
** Form generated from reading UI file 'gui_contratos_abiertos.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_CONTRATOS_ABIERTOS_H
#define UI_GUI_CONTRATOS_ABIERTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI_Contratos_Abiertos
{
public:
    QListView *listView;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_10;
    QLabel *label_15;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_16;
    QVBoxLayout *verticalLayout_4;
    QPushButton *cond;
    QPushButton *CpGo;
    QPushButton *fact;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_17;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *numero;
    QLabel *cantidad;
    QLabel *tipo;
    QLabel *fechaCreacion;
    QLabel *fechaLimite;
    QLabel *precio;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_11;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_7;
    QLabel *nombre;
    QLabel *razsoc;
    QLabel *condIVA;
    QLabel *cuit;

    void setupUi(QDialog *GUI_Contratos_Abiertos)
    {
        if (GUI_Contratos_Abiertos->objectName().isEmpty())
            GUI_Contratos_Abiertos->setObjectName(QStringLiteral("GUI_Contratos_Abiertos"));
        GUI_Contratos_Abiertos->resize(729, 480);
        GUI_Contratos_Abiertos->setStyleSheet(QStringLiteral(""));
        listView = new QListView(GUI_Contratos_Abiertos);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(30, 50, 191, 361));
        label = new QLabel(GUI_Contratos_Abiertos);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 161, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_3 = new QLabel(GUI_Contratos_Abiertos);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 240, 161, 41));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_10 = new QLabel(GUI_Contratos_Abiertos);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(250, 50, 151, 16));
        label_10->setFont(font1);
        label_15 = new QLabel(GUI_Contratos_Abiertos);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(480, 350, 238, 36));
        layoutWidget = new QWidget(GUI_Contratos_Abiertos);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(450, 40, 232, 180));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        label_16->setFont(font2);

        verticalLayout_5->addWidget(label_16);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        cond = new QPushButton(layoutWidget);
        cond->setObjectName(QStringLiteral("cond"));
        QFont font3;
        font3.setPointSize(20);
        cond->setFont(font3);

        verticalLayout_4->addWidget(cond);

        CpGo = new QPushButton(layoutWidget);
        CpGo->setObjectName(QStringLiteral("CpGo"));
        CpGo->setFont(font3);

        verticalLayout_4->addWidget(CpGo);

        fact = new QPushButton(layoutWidget);
        fact->setObjectName(QStringLiteral("fact"));
        fact->setFont(font3);

        verticalLayout_4->addWidget(fact);


        verticalLayout_5->addLayout(verticalLayout_4);

        layoutWidget1 = new QWidget(GUI_Contratos_Abiertos);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 420, 152, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget1);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout->addWidget(label_17);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_2 = new QPushButton(GUI_Contratos_Abiertos);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(600, 440, 75, 23));
        layoutWidget2 = new QWidget(GUI_Contratos_Abiertos);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(250, 80, 164, 150));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_2->addWidget(label_7);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        numero = new QLabel(layoutWidget2);
        numero->setObjectName(QStringLiteral("numero"));

        verticalLayout_6->addWidget(numero);

        cantidad = new QLabel(layoutWidget2);
        cantidad->setObjectName(QStringLiteral("cantidad"));

        verticalLayout_6->addWidget(cantidad);

        tipo = new QLabel(layoutWidget2);
        tipo->setObjectName(QStringLiteral("tipo"));

        verticalLayout_6->addWidget(tipo);

        fechaCreacion = new QLabel(layoutWidget2);
        fechaCreacion->setObjectName(QStringLiteral("fechaCreacion"));

        verticalLayout_6->addWidget(fechaCreacion);

        fechaLimite = new QLabel(layoutWidget2);
        fechaLimite->setObjectName(QStringLiteral("fechaLimite"));

        verticalLayout_6->addWidget(fechaLimite);

        precio = new QLabel(layoutWidget2);
        precio->setObjectName(QStringLiteral("precio"));

        verticalLayout_6->addWidget(precio);


        horizontalLayout_2->addLayout(verticalLayout_6);

        layoutWidget3 = new QWidget(GUI_Contratos_Abiertos);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(250, 290, 152, 74));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_13 = new QLabel(layoutWidget3);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_3->addWidget(label_13);

        label_14 = new QLabel(layoutWidget3);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_3->addWidget(label_14);

        label_11 = new QLabel(layoutWidget3);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_3->addWidget(label_11);

        label_12 = new QLabel(layoutWidget3);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_3->addWidget(label_12);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        nombre = new QLabel(layoutWidget3);
        nombre->setObjectName(QStringLiteral("nombre"));

        verticalLayout_7->addWidget(nombre);

        razsoc = new QLabel(layoutWidget3);
        razsoc->setObjectName(QStringLiteral("razsoc"));

        verticalLayout_7->addWidget(razsoc);

        condIVA = new QLabel(layoutWidget3);
        condIVA->setObjectName(QStringLiteral("condIVA"));

        verticalLayout_7->addWidget(condIVA);

        cuit = new QLabel(layoutWidget3);
        cuit->setObjectName(QStringLiteral("cuit"));

        verticalLayout_7->addWidget(cuit);


        horizontalLayout_3->addLayout(verticalLayout_7);


        retranslateUi(GUI_Contratos_Abiertos);

        QMetaObject::connectSlotsByName(GUI_Contratos_Abiertos);
    } // setupUi

    void retranslateUi(QDialog *GUI_Contratos_Abiertos)
    {
        GUI_Contratos_Abiertos->setWindowTitle(QApplication::translate("GUI_Contratos_Abiertos", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("GUI_Contratos_Abiertos", "Contratos Abiertos", Q_NULLPTR));
        label_3->setText(QApplication::translate("GUI_Contratos_Abiertos", "Datos del Productor:", Q_NULLPTR));
        label_10->setText(QApplication::translate("GUI_Contratos_Abiertos", "Datos del Contrato:", Q_NULLPTR));
        label_15->setText(QString());
        label_16->setText(QApplication::translate("GUI_Contratos_Abiertos", "Opciones:", Q_NULLPTR));
        cond->setText(QApplication::translate("GUI_Contratos_Abiertos", " Condiciones", Q_NULLPTR));
        CpGo->setText(QApplication::translate("GUI_Contratos_Abiertos", " Cartas de Porte", Q_NULLPTR));
        fact->setText(QApplication::translate("GUI_Contratos_Abiertos", "Facturaci\303\263n", Q_NULLPTR));
        label_17->setText(QApplication::translate("GUI_Contratos_Abiertos", "Buscar:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GUI_Contratos_Abiertos", "Volver", Q_NULLPTR));
        label_6->setText(QApplication::translate("GUI_Contratos_Abiertos", "Numero:", Q_NULLPTR));
        label_2->setText(QApplication::translate("GUI_Contratos_Abiertos", "Cantidad:", Q_NULLPTR));
        label_8->setText(QApplication::translate("GUI_Contratos_Abiertos", "Tipo:", Q_NULLPTR));
        label_4->setText(QApplication::translate("GUI_Contratos_Abiertos", "Fecha creacion:", Q_NULLPTR));
        label_5->setText(QApplication::translate("GUI_Contratos_Abiertos", "Fecha Limite", Q_NULLPTR));
        label_7->setText(QApplication::translate("GUI_Contratos_Abiertos", "Precio:", Q_NULLPTR));
        numero->setText(QString());
        cantidad->setText(QString());
        tipo->setText(QString());
        fechaCreacion->setText(QString());
        fechaLimite->setText(QString());
        precio->setText(QString());
        label_13->setText(QApplication::translate("GUI_Contratos_Abiertos", "Nombre:", Q_NULLPTR));
        label_14->setText(QApplication::translate("GUI_Contratos_Abiertos", "Raz\303\263n Social:", Q_NULLPTR));
        label_11->setText(QApplication::translate("GUI_Contratos_Abiertos", "Condicion IVA:", Q_NULLPTR));
        label_12->setText(QApplication::translate("GUI_Contratos_Abiertos", "CUIT:", Q_NULLPTR));
        nombre->setText(QString());
        razsoc->setText(QString());
        condIVA->setText(QString());
        cuit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GUI_Contratos_Abiertos: public Ui_GUI_Contratos_Abiertos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CONTRATOS_ABIERTOS_H
