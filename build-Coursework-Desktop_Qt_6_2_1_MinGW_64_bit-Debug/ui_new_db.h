/********************************************************************************
** Form generated from reading UI file 'new_db.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_DB_H
#define UI_NEW_DB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_New_DB
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QFrame *line_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget2;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QComboBox *comboBox;
    QListView *listView;

    void setupUi(QDialog *New_DB)
    {
        if (New_DB->objectName().isEmpty())
            New_DB->setObjectName(QString::fromUtf8("New_DB"));
        New_DB->resize(400, 203);
        lineEdit = new QLineEdit(New_DB);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 40, 221, 21));
        label = new QLabel(New_DB);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 111, 16));
        label_2 = new QLabel(New_DB);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 20, 101, 16));
        line = new QFrame(New_DB);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 70, 231, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(New_DB);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 150, 401, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(New_DB);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 170, 168, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        layoutWidget1 = new QWidget(New_DB);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 170, 168, 23));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        layoutWidget2 = new QWidget(New_DB);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(6, 90, 231, 52));
        formLayout = new QFormLayout(layoutWidget2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(layoutWidget2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        comboBox = new QComboBox(layoutWidget2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox);

        listView = new QListView(New_DB);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(240, 40, 151, 101));

        retranslateUi(New_DB);

        QMetaObject::connectSlotsByName(New_DB);
    } // setupUi

    void retranslateUi(QDialog *New_DB)
    {
        New_DB->setWindowTitle(QCoreApplication::translate("New_DB", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("New_DB", "Enter Database name:", nullptr));
        label_2->setText(QCoreApplication::translate("New_DB", "Table columns:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("New_DB", "OK", nullptr));
        pushButton_4->setText(QCoreApplication::translate("New_DB", "Default", nullptr));
        pushButton->setText(QCoreApplication::translate("New_DB", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("New_DB", "Delete", nullptr));
        label_3->setText(QCoreApplication::translate("New_DB", "Column name:", nullptr));
        label_4->setText(QCoreApplication::translate("New_DB", "Column type:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("New_DB", "INT", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("New_DB", "DATE", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("New_DB", "TEXT", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("New_DB", "COUNT", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("New_DB", "IMAGE", nullptr));

    } // retranslateUi

};

namespace Ui {
    class New_DB: public Ui_New_DB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_DB_H
