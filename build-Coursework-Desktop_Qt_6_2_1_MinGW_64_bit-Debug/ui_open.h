/********************************************************************************
** Form generated from reading UI file 'open.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPEN_H
#define UI_OPEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Open
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Open)
    {
        if (Open->objectName().isEmpty())
            Open->setObjectName(QString::fromUtf8("Open"));
        Open->resize(400, 90);
        buttonBox = new QDialogButtonBox(Open);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(50, 40, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        pushButton = new QPushButton(Open);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 20, 81, 21));
        lineEdit = new QLineEdit(Open);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 20, 301, 21));

        retranslateUi(Open);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Open, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Open, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Open);
    } // setupUi

    void retranslateUi(QDialog *Open)
    {
        Open->setWindowTitle(QCoreApplication::translate("Open", "Open database", nullptr));
        pushButton->setText(QCoreApplication::translate("Open", "Brows...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Open: public Ui_Open {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPEN_H
