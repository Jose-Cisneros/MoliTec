/********************************************************************************
** Form generated from reading UI file 'gui_ver.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_VER_H
#define UI_GUI_VER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_gui_ver
{
public:
    QDialogButtonBox *buttonBox;
    QTableView *tableView;
    QListView *listView;

    void setupUi(QDialog *gui_ver)
    {
        if (gui_ver->objectName().isEmpty())
            gui_ver->setObjectName(QStringLiteral("gui_ver"));
        gui_ver->resize(640, 480);
        buttonBox = new QDialogButtonBox(gui_ver);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 440, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tableView = new QTableView(gui_ver);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 220, 601, 201));
        listView = new QListView(gui_ver);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(190, 20, 256, 192));

        retranslateUi(gui_ver);
        QObject::connect(buttonBox, SIGNAL(accepted()), gui_ver, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), gui_ver, SLOT(reject()));

        QMetaObject::connectSlotsByName(gui_ver);
    } // setupUi

    void retranslateUi(QDialog *gui_ver)
    {
        gui_ver->setWindowTitle(QApplication::translate("gui_ver", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gui_ver: public Ui_gui_ver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_VER_H
