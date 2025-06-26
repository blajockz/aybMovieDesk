/********************************************************************************
** Form generated from reading UI file 'reqdel.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQDEL_H
#define UI_REQDEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reqdel
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QWidget *reqdel)
    {
        if (reqdel->objectName().isEmpty())
            reqdel->setObjectName("reqdel");
        reqdel->resize(764, 351);
        reqdel->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 61);"));
        textBrowser = new QTextBrowser(reqdel);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(20, 30, 731, 291));

        retranslateUi(reqdel);

        QMetaObject::connectSlotsByName(reqdel);
    } // setupUi

    void retranslateUi(QWidget *reqdel)
    {
        reqdel->setWindowTitle(QCoreApplication::translate("reqdel", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("reqdel", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#000000;\">Deleting any of your reservation should be approved by the </span><span style=\" font-size:14pt; font-weight:700; color:#b40000;\">Administrators</span><span style=\" font-size:14pt; font-weight:700; color:#000000;\"> of the cinema, in order to avoid any kind of abuses/trolls, we require from you sending a short e-mail to </span><span st"
                        "yle=\" font-size:14pt; font-weight:700; color:#b40000;\">cinemaadmin@gmail.com</span><span style=\" font-size:14pt; font-weight:700; color:#000000;\">, elaborating the reason why you're attempting to cancel your reservation, followed with your Identifier and the ID of the reservartion.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt; font-weight:700; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#000000;\">Our team will get back to you as quick as they can, and leave with a decision depending on the date of the reservation and the informations provided by you.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14"
                        "pt; font-weight:700; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#000000;\">Sincerly AYB, </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reqdel: public Ui_reqdel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQDEL_H
