/********************************************************************************
** Form generated from reading UI file 'gui_contratos_condiciones.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_CONTRATOS_CONDICIONES_H
#define UI_GUI_CONTRATOS_CONDICIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_GUI_Contratos_Condiciones
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTableView *tableView;

    void setupUi(QDialog *GUI_Contratos_Condiciones)
    {
        if (GUI_Contratos_Condiciones->objectName().isEmpty())
            GUI_Contratos_Condiciones->setObjectName(QStringLiteral("GUI_Contratos_Condiciones"));
        GUI_Contratos_Condiciones->resize(360, 313);
        buttonBox = new QDialogButtonBox(GUI_Contratos_Condiciones);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(50, 260, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(GUI_Contratos_Condiciones);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 20, 111, 16));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        tableView = new QTableView(GUI_Contratos_Condiciones);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 50, 301, 192));

        retranslateUi(GUI_Contratos_Condiciones);
        QObject::connect(buttonBox, SIGNAL(accepted()), GUI_Contratos_Condiciones, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GUI_Contratos_Condiciones, SLOT(reject()));

        QMetaObject::connectSlotsByName(GUI_Contratos_Condiciones);
    } // setupUi

    void retranslateUi(QDialog *GUI_Contratos_Condiciones)
    {
        GUI_Contratos_Condiciones->setWindowTitle(QApplication::translate("GUI_Contratos_Condiciones", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("GUI_Contratos_Condiciones", "Condiciones:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GUI_Contratos_Condiciones: public Ui_GUI_Contratos_Condiciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CONTRATOS_CONDICIONES_H
