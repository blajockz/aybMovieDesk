/********************************************************************************
** Form generated from reading UI file 'seanceaffich.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEANCEAFFICH_H
#define UI_SEANCEAFFICH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeanceAffich
{
public:
    QTableView *viewSeances;

    void setupUi(QWidget *SeanceAffich)
    {
        if (SeanceAffich->objectName().isEmpty())
            SeanceAffich->setObjectName("SeanceAffich");
        SeanceAffich->resize(663, 337);
        viewSeances = new QTableView(SeanceAffich);
        viewSeances->setObjectName("viewSeances");
        viewSeances->setGeometry(QRect(200, 70, 256, 192));

        retranslateUi(SeanceAffich);

        QMetaObject::connectSlotsByName(SeanceAffich);
    } // setupUi

    void retranslateUi(QWidget *SeanceAffich)
    {
        SeanceAffich->setWindowTitle(QCoreApplication::translate("SeanceAffich", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SeanceAffich: public Ui_SeanceAffich {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEANCEAFFICH_H
