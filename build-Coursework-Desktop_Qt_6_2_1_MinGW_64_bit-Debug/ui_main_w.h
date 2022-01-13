/********************************************************************************
** Form generated from reading UI file 'main_w.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_W_H
#define UI_MAIN_W_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_W
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QWidget *centralwidget;
    QTableView *tableView;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QListView *listView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Main_W)
    {
        if (Main_W->objectName().isEmpty())
            Main_W->setObjectName(QString::fromUtf8("Main_W"));
        Main_W->resize(693, 574);
        actionNew = new QAction(Main_W);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(Main_W);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(Main_W);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        centralwidget = new QWidget(Main_W);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 10, 641, 371));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 420, 317, 21));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(345, 420, 316, 21));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 390, 641, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(20, 440, 317, 91));
        Main_W->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Main_W);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 693, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        Main_W->setMenuBar(menubar);
        statusbar = new QStatusBar(Main_W);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Main_W->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);

        retranslateUi(Main_W);

        QMetaObject::connectSlotsByName(Main_W);
    } // setupUi

    void retranslateUi(QMainWindow *Main_W)
    {
        Main_W->setWindowTitle(QCoreApplication::translate("Main_W", "Main_W", nullptr));
        actionNew->setText(QCoreApplication::translate("Main_W", "New...", nullptr));
        actionOpen->setText(QCoreApplication::translate("Main_W", "Open...", nullptr));
        actionSave->setText(QCoreApplication::translate("Main_W", "Save", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Main_W", "Search", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Main_W", "Add product", nullptr));
        pushButton->setText(QCoreApplication::translate("Main_W", "Dell product", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Main_W", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main_W: public Ui_Main_W {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_W_H
