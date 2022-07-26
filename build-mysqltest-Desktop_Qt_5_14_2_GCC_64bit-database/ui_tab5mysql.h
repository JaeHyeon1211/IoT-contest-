/********************************************************************************
** Form generated from reading UI file 'tab5mysql.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB5MYSQL_H
#define UI_TAB5MYSQL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab5Mysql
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *pTvNowStatDb;
    QPushButton *pPbReport;

    void setupUi(QWidget *Tab5Mysql)
    {
        if (Tab5Mysql->objectName().isEmpty())
            Tab5Mysql->setObjectName(QString::fromUtf8("Tab5Mysql"));
        Tab5Mysql->resize(790, 410);
        verticalLayoutWidget = new QWidget(Tab5Mysql);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 771, 391));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pTvNowStatDb = new QTableView(verticalLayoutWidget);
        pTvNowStatDb->setObjectName(QString::fromUtf8("pTvNowStatDb"));

        verticalLayout->addWidget(pTvNowStatDb);

        pPbReport = new QPushButton(verticalLayoutWidget);
        pPbReport->setObjectName(QString::fromUtf8("pPbReport"));

        verticalLayout->addWidget(pPbReport);


        retranslateUi(Tab5Mysql);

        QMetaObject::connectSlotsByName(Tab5Mysql);
    } // setupUi

    void retranslateUi(QWidget *Tab5Mysql)
    {
        Tab5Mysql->setWindowTitle(QCoreApplication::translate("Tab5Mysql", "Form", nullptr));
        pPbReport->setText(QCoreApplication::translate("Tab5Mysql", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab5Mysql: public Ui_Tab5Mysql {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB5MYSQL_H
