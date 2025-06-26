/********************************************************************************
** Form generated from reading UI file 'viewfilms.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWFILMS_H
#define UI_VIEWFILMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewFilms
{
public:
    QTableView *tableView;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *ViewFilms)
    {
        if (ViewFilms->objectName().isEmpty())
            ViewFilms->setObjectName("ViewFilms");
        ViewFilms->resize(762, 352);
        ViewFilms->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 61, 61);"));
        tableView = new QTableView(ViewFilms);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 80, 731, 221));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(140, 140, 140);"));
        textBrowser = new QTextBrowser(ViewFilms);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(90, 20, 601, 41));
        textBrowser->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(ViewFilms);

        QMetaObject::connectSlotsByName(ViewFilms);
    } // setupUi

    void retranslateUi(QWidget *ViewFilms)
    {
        ViewFilms->setWindowTitle(QCoreApplication::translate("ViewFilms", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("ViewFilms", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700; color:#b40000;\"> ----&gt; Liste of Films &lt;----    </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewFilms: public Ui_ViewFilms {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWFILMS_H
