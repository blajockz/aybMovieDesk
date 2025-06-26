/********************************************************************************
** Form generated from reading UI file 'period.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERIOD_H
#define UI_PERIOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Period
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Period)
    {
        if (Period->objectName().isEmpty())
            Period->setObjectName("Period");
        Period->resize(762, 334);
        Period->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 61);"));
        textBrowser = new QTextBrowser(Period);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 100, 721, 131));
        pushButton = new QPushButton(Period);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 170, 80, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe Print\";\n"
"background-color: rgb(85, 0, 0);"));
        lineEdit_2 = new QLineEdit(Period);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(130, 170, 161, 31));
        lineEdit = new QLineEdit(Period);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(90, 120, 161, 31));

        retranslateUi(Period);

        QMetaObject::connectSlotsByName(Period);
    } // setupUi

    void retranslateUi(QWidget *Period)
    {
        Period->setWindowTitle(QCoreApplication::translate("Period", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Period", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#aa0000;\">Film ID:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:"
                        "14pt; font-weight:700; color:#aa0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#aa0000;\">New Period:</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Period", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Period: public Ui_Period {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERIOD_H
