/********************************************************************************
** Form generated from reading UI file 'modifyfilm.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYFILM_H
#define UI_MODIFYFILM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modifyfilm
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *modifyfilm)
    {
        if (modifyfilm->objectName().isEmpty())
            modifyfilm->setObjectName("modifyfilm");
        modifyfilm->resize(765, 337);
        modifyfilm->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 61);"));
        textBrowser = new QTextBrowser(modifyfilm);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 0, 781, 351));
        textBrowser->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(modifyfilm);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(400, 100, 91, 41));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe Print\";\n"
"background-color: rgb(85, 0, 0);"));
        pushButton_2 = new QPushButton(modifyfilm);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(520, 100, 91, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe Print\";\n"
"background-color: rgb(85, 0, 0);"));
        pushButton_3 = new QPushButton(modifyfilm);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(650, 100, 91, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe Print\";\n"
"background-color: rgb(85, 0, 0);"));

        retranslateUi(modifyfilm);

        QMetaObject::connectSlotsByName(modifyfilm);
    } // setupUi

    void retranslateUi(QWidget *modifyfilm)
    {
        modifyfilm->setWindowTitle(QCoreApplication::translate("modifyfilm", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("modifyfilm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; color:#8eb4a5;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; color:#8eb4a"
                        "5;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#8eb4a5;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:700; color:#8eb4a5;\">Clicker sur le champs \303\240 modifier: </span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("modifyfilm", "Name", nullptr));
        pushButton_2->setText(QCoreApplication::translate("modifyfilm", "Period", nullptr));
        pushButton_3->setText(QCoreApplication::translate("modifyfilm", "Field", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifyfilm: public Ui_modifyfilm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYFILM_H
