/********************************************************************************
** Form generated from reading UI file 'createres.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATERES_H
#define UI_CREATERES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createres
{
public:
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;

    void setupUi(QWidget *createres)
    {
        if (createres->objectName().isEmpty())
            createres->setObjectName("createres");
        createres->resize(762, 330);
        createres->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 61);"));
        textBrowser = new QTextBrowser(createres);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 90, 721, 191));
        lineEdit = new QLineEdit(createres);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(160, 180, 113, 31));
        lineEdit_2 = new QLineEdit(createres);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(130, 230, 113, 31));
        pushButton = new QPushButton(createres);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 230, 80, 31));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe Print\";\n"
"background-color: rgb(85, 0, 0);"));
        lineEdit_3 = new QLineEdit(createres);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(160, 120, 113, 31));

        retranslateUi(createres);

        QMetaObject::connectSlotsByName(createres);
    } // setupUi

    void retranslateUi(QWidget *createres)
    {
        createres->setWindowTitle(QCoreApplication::translate("createres", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("createres", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#aa0000;\">Your full name: <"
                        "/span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#aa0000;\">Your Identifier:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:700; color:#aa0000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#aa0000;\">Film_Name:</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("createres", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createres: public Ui_createres {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATERES_H
