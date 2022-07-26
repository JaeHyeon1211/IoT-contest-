/********************************************************************************
** Form generated from reading UI file 'tab6parkinglotlog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB6PARKINGLOTLOG_H
#define UI_TAB6PARKINGLOTLOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab6ParkinglotLog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *pTvParkingLogDb;
    QPushButton *pPbReport;

    void setupUi(QWidget *Tab6ParkinglotLog)
    {
        if (Tab6ParkinglotLog->objectName().isEmpty())
            Tab6ParkinglotLog->setObjectName(QString::fromUtf8("Tab6ParkinglotLog"));
        Tab6ParkinglotLog->resize(790, 410);
        verticalLayoutWidget = new QWidget(Tab6ParkinglotLog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 771, 391));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pTvParkingLogDb = new QTableView(verticalLayoutWidget);
        pTvParkingLogDb->setObjectName(QString::fromUtf8("pTvParkingLogDb"));

        verticalLayout->addWidget(pTvParkingLogDb);

        pPbReport = new QPushButton(verticalLayoutWidget);
        pPbReport->setObjectName(QString::fromUtf8("pPbReport"));

        verticalLayout->addWidget(pPbReport);


        retranslateUi(Tab6ParkinglotLog);

        QMetaObject::connectSlotsByName(Tab6ParkinglotLog);
    } // setupUi

    void retranslateUi(QWidget *Tab6ParkinglotLog)
    {
        Tab6ParkinglotLog->setWindowTitle(QCoreApplication::translate("Tab6ParkinglotLog", "Form", nullptr));
        pPbReport->setText(QCoreApplication::translate("Tab6ParkinglotLog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab6ParkinglotLog: public Ui_Tab6ParkinglotLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB6PARKINGLOTLOG_H
