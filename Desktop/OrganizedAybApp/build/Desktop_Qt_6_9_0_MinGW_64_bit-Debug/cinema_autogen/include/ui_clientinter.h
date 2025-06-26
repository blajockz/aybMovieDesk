/********************************************************************************
** Form generated from reading UI file 'clientinter.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTINTER_H
#define UI_CLIENTINTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientinter
{
public:
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QWidget *clientinter)
    {
        if (clientinter->objectName().isEmpty())
            clientinter->setObjectName("clientinter");
        clientinter->resize(762, 350);
        clientinter->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 61);"));
        textBrowser = new QTextBrowser(clientinter);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(90, 10, 601, 41));
        textBrowser->setStyleSheet(QString::fromUtf8(""));
        textBrowser_2 = new QTextBrowser(clientinter);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(40, 80, 711, 241));
        textBrowser_2->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 61);"));
        pushButton = new QPushButton(clientinter);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 180, 131, 51));
        pushButton->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe Print\";\n"
"background-color: rgb(85, 0, 0);"));
        pushButton_2 = new QPushButton(clientinter);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(300, 180, 131, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe Print\";\n"
"background-color: rgb(85, 0, 0);"));
        pushButton_3 = new QPushButton(clientinter);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(480, 180, 131, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe Print\";\n"
"background-color: rgb(85, 0, 0);"));
        pushButton_4 = new QPushButton(clientinter);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(660, 270, 80, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe Script\";\n"
"background-color: rgb(33, 33, 33);"));

        retranslateUi(clientinter);

        QMetaObject::connectSlotsByName(clientinter);
    } // setupUi

    void retranslateUi(QWidget *clientinter)
    {
        clientinter->setWindowTitle(QCoreApplication::translate("clientinter", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("clientinter", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700; color:#b40000;\">Welcome to Cinema</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:16pt; font-weight:700; color:#b40000;\"><br /></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("clientinter", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700; color:#d3d3d3;\">Choisir une option \303\240 appliquer: </span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("clientinter", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700; color:#ff0000;\">Add Film</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("clientinter", "View Films", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_2->setToolTip(QCoreApplication::translate("clientinter", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700; color:#ff0000;\">Add Film</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_2->setText(QCoreApplication::translate("clientinter", "Create Reservation", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QCoreApplication::translate("clientinter", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700; color:#ff0000;\">Add Film</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QCoreApplication::translate("clientinter", "Request Res Cancel", nullptr));
        pushButton_4->setText(QCoreApplication::translate("clientinter", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientinter: public Ui_clientinter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTINTER_H
