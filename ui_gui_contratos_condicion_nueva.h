/********************************************************************************
** Form generated from reading UI file 'gui_contratos_condicion_nueva.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_CONTRATOS_CONDICION_NUEVA_H
#define UI_GUI_CONTRATOS_CONDICION_NUEVA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gui_contratos_condicion_nueva
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QTableView *tableView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;

    void setupUi(QDialog *gui_contratos_condicion_nueva)
    {
        if (gui_contratos_condicion_nueva->objectName().isEmpty())
            gui_contratos_condicion_nueva->setObjectName(QStringLiteral("gui_contratos_condicion_nueva"));
        gui_contratos_condicion_nueva->resize(320, 240);
        buttonBox = new QDialogButtonBox(gui_contratos_condicion_nueva);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 200, 301, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_2 = new QLabel(gui_contratos_condicion_nueva);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 10, 181, 16));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        tableView = new QTableView(gui_contratos_condicion_nueva);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 40, 256, 121));
        widget = new QWidget(gui_contratos_condicion_nueva);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 170, 181, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        doubleSpinBox = new QDoubleSpinBox(widget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));

        horizontalLayout->addWidget(doubleSpinBox);


        retranslateUi(gui_contratos_condicion_nueva);
        QObject::connect(buttonBox, SIGNAL(accepted()), gui_contratos_condicion_nueva, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), gui_contratos_condicion_nueva, SLOT(reject()));

        QMetaObject::connectSlotsByName(gui_contratos_condicion_nueva);
    } // setupUi

    void retranslateUi(QDialog *gui_contratos_condicion_nueva)
    {
        gui_contratos_condicion_nueva->setWindowTitle(QApplication::translate("gui_contratos_condicion_nueva", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("gui_contratos_condicion_nueva", "Seleccionar Condicion", Q_NULLPTR));
        label->setText(QApplication::translate("gui_contratos_condicion_nueva", "VALOR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gui_contratos_condicion_nueva: public Ui_gui_contratos_condicion_nueva {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CONTRATOS_CONDICION_NUEVA_H
