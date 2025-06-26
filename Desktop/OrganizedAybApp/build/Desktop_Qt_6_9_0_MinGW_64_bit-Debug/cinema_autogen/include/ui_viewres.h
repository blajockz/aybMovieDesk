/********************************************************************************
** Form generated from reading UI file 'viewres.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWRES_H
#define UI_VIEWRES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_viewres
{
public:
    QTextBrowser *textBrowser;
    QTableView *tableView;

    void setupUi(QWidget *viewres)
    {
        if (viewres->objectName().isEmpty())
            viewres->setObjectName("viewres");
        viewres->resize(759, 334);
        viewres->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 61);"));
        textBrowser = new QTextBrowser(viewres);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(80, 10, 601, 41));
        textBrowser->setStyleSheet(QString::fromUtf8(""));
        tableView = new QTableView(viewres);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 80, 731, 221));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 140, 140);"));

        retranslateUi(viewres);

        QMetaObject::connectSlotsByName(viewres);
    } // setupUi

    void retranslateUi(QWidget *viewres)
    {
        viewres->setWindowTitle(QCoreApplication::translate("viewres", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("viewres", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700; color:#b40000;\"> ----&gt; Reservations &lt;----    </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewres: public Ui_viewres {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWRES_H
