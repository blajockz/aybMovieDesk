/********************************************************************************
** Form generated from reading UI file 'addfilm.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFILM_H
#define UI_ADDFILM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addfilm
{
public:
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;

    void setupUi(QWidget *addfilm)
    {
        if (addfilm->objectName().isEmpty())
            addfilm->setObjectName("addfilm");
        addfilm->resize(756, 335);
        addfilm->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 61);"));
        textBrowser = new QTextBrowser(addfilm);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(30, 60, 691, 211));
        lineEdit = new QLineEdit(addfilm);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 70, 101, 21));
        lineEdit_3 = new QLineEdit(addfilm);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(130, 200, 101, 21));
        lineEdit_4 = new QLineEdit(addfilm);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(150, 140, 101, 21));
        pushButton = new QPushButton(addfilm);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 190, 101, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"font: 9pt \"Segoe Script\";"));

        retranslateUi(addfilm);

        QMetaObject::connectSlotsByName(addfilm);
    } // setupUi

    void retranslateUi(QWidget *addfilm)
    {
        addfilm->setWindowTitle(QCoreApplication::translate("addfilm", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("addfilm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700; color:#b40000;\">-Film Name:</span><span style=\" color:#b40000;\"> </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#b40000;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-"
                        "right:0px; -qt-block-indent:0; text-indent:0px; color:#b40000;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#b40000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700; color:#b40000;\">-Film Period:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:700; color:#b40000;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:700; color:#b40000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" "
                        "font-size:12pt; font-weight:700; color:#b40000;\">-Film Field:</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("addfilm", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addfilm: public Ui_addfilm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFILM_H
