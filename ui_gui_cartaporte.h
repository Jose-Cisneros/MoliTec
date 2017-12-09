/********************************************************************************
** Form generated from reading UI file 'gui_cartaporte.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_CARTAPORTE_H
#define UI_GUI_CARTAPORTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gui_CartaPorte
{
public:
    QLabel *label;
    QPushButton *crearCp;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QWidget *Gui_CartaPorte)
    {
        if (Gui_CartaPorte->objectName().isEmpty())
            Gui_CartaPorte->setObjectName(QStringLiteral("Gui_CartaPorte"));
        Gui_CartaPorte->resize(821, 471);
        label = new QLabel(Gui_CartaPorte);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 20, 281, 61));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label->setScaledContents(false);
        crearCp = new QPushButton(Gui_CartaPorte);
        crearCp->setObjectName(QStringLiteral("crearCp"));
        crearCp->setGeometry(QRect(20, 400, 191, 51));
        pushButton_2 = new QPushButton(Gui_CartaPorte);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 400, 191, 51));
        pushButton_3 = new QPushButton(Gui_CartaPorte);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(440, 400, 191, 51));
        tableView = new QTableView(Gui_CartaPorte);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 90, 681, 281));
        pushButton = new QPushButton(Gui_CartaPorte);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(730, 440, 75, 23));
#ifndef QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT

        retranslateUi(Gui_CartaPorte);

        QMetaObject::connectSlotsByName(Gui_CartaPorte);
    } // setupUi

    void retranslateUi(QWidget *Gui_CartaPorte)
    {
        Gui_CartaPorte->setWindowTitle(QApplication::translate("Gui_CartaPorte", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Gui_CartaPorte", "CARTAS DE PORTE", Q_NULLPTR));
        crearCp->setText(QApplication::translate("Gui_CartaPorte", "Crear ", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Gui_CartaPorte", "Modificar", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Gui_CartaPorte", "ELIMINAR", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Gui_CartaPorte", "volver", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Gui_CartaPorte: public Ui_Gui_CartaPorte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_CARTAPORTE_H
