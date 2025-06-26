/********************************************************************************
** Form generated from reading UI file 'admincmd.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCMD_H
#define UI_ADMINCMD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admincmd
{
public:
    QTextBrowser *textBrowser;
    QLineEdit *lineEditInt;
    QPushButton *pushButton;

    void setupUi(QWidget *admincmd)
    {
        if (admincmd->objectName().isEmpty())
            admincmd->setObjectName("admincmd");
        admincmd->resize(764, 333);
        admincmd->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 61);"));
        textBrowser = new QTextBrowser(admincmd);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 90, 751, 71));
        lineEditInt = new QLineEdit(admincmd);
        lineEditInt->setObjectName("lineEditInt");
        lineEditInt->setGeometry(QRect(160, 110, 111, 21));
        pushButton = new QPushButton(admincmd);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(300, 110, 81, 24));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"font: 9pt \"Segoe Script\";"));

        retranslateUi(admincmd);

        QMetaObject::connectSlotsByName(admincmd);
    } // setupUi

    void retranslateUi(QWidget *admincmd)
    {
        admincmd->setWindowTitle(QCoreApplication::translate("admincmd", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("admincmd", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700; color:#e1ffd3;\">Entrez l'ID du Film: </span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("admincmd", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admincmd: public Ui_admincmd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCMD_H
