/********************************************************************************
** Form generated from reading UI file 'start_w.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_START_W_H
#define UI_START_W_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Start_w
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *Start_w)
    {
        if (Start_w->objectName().isEmpty())
            Start_w->setObjectName(QString::fromUtf8("Start_w"));
        Start_w->resize(253, 298);
        pushButton = new QPushButton(Start_w);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 200, 171, 31));
        pushButton_2 = new QPushButton(Start_w);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 230, 171, 31));
        label = new QLabel(Start_w);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 201, 161));
        label->setStyleSheet(QString::fromUtf8("image: url(:/Img/Untitled-1.png);"));

        retranslateUi(Start_w);

        QMetaObject::connectSlotsByName(Start_w);
    } // setupUi

    void retranslateUi(QDialog *Start_w)
    {
        Start_w->setWindowTitle(QCoreApplication::translate("Start_w", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Start_w", "Open...", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Start_w", "Create new", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Start_w: public Ui_Start_w {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_W_H
