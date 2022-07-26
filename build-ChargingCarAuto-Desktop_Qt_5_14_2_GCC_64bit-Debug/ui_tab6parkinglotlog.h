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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab6ParkinglotLog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableView *pTvParkingLogDb;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pPbReport;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Tab6ParkinglotLog)
    {
        if (Tab6ParkinglotLog->objectName().isEmpty())
            Tab6ParkinglotLog->setObjectName(QString::fromUtf8("Tab6ParkinglotLog"));
        Tab6ParkinglotLog->resize(780, 410);
        gridLayout = new QGridLayout(Tab6ParkinglotLog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pTvParkingLogDb = new QTableView(Tab6ParkinglotLog);
        pTvParkingLogDb->setObjectName(QString::fromUtf8("pTvParkingLogDb"));

        verticalLayout->addWidget(pTvParkingLogDb);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pPbReport = new QPushButton(Tab6ParkinglotLog);
        pPbReport->setObjectName(QString::fromUtf8("pPbReport"));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        pPbReport->setFont(font);
        pPbReport->setFlat(true);

        horizontalLayout_2->addWidget(pPbReport);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Tab6ParkinglotLog);

        QMetaObject::connectSlotsByName(Tab6ParkinglotLog);
    } // setupUi

    void retranslateUi(QWidget *Tab6ParkinglotLog)
    {
        Tab6ParkinglotLog->setWindowTitle(QCoreApplication::translate("Tab6ParkinglotLog", "Form", nullptr));
        pPbReport->setText(QCoreApplication::translate("Tab6ParkinglotLog", "Serch", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab6ParkinglotLog: public Ui_Tab6ParkinglotLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB6PARKINGLOTLOG_H
