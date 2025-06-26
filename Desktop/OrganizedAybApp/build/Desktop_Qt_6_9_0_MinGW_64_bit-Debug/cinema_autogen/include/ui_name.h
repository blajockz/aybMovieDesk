/********************************************************************************
** Form generated from reading UI file 'name.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAME_H
#define UI_NAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Name
{
public:
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *Name)
    {
        if (Name->objectName().isEmpty())
            Name->setObjectName("Name");
        Name->resize(758, 344);
        Name->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 61);"));
        textBrowser = new QTextBrowser(Name);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 110, 721, 151));
        lineEdit = new QLineEdit(Name);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(90, 130, 161, 31));
        pushButton = new QPushButton(Name);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 180, 80, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"font: 9pt \"Segoe Script\";"));
        lineEdit_2 = new QLineEdit(Name);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(120, 180, 161, 31));

        retranslateUi(Name);

        QMetaObject::connectSlotsByName(Name);
    } // setupUi

    void retranslateUi(QWidget *Name)
    {
        Name->setWindowTitle(QCoreApplication::translate("Name", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Name", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#aa0000;\">New name:</span><span style=\" font-size:14pt; font-weight:700;\"> </span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Name", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Name: public Ui_Name {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAME_H
