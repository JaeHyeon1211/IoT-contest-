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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab5Mysql
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableView *pTvNowStatDb;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pPbclear;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pPbReport;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Tab5Mysql)
    {
        if (Tab5Mysql->objectName().isEmpty())
            Tab5Mysql->setObjectName(QString::fromUtf8("Tab5Mysql"));
        Tab5Mysql->resize(780, 410);
        gridLayout = new QGridLayout(Tab5Mysql);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pTvNowStatDb = new QTableView(Tab5Mysql);
        pTvNowStatDb->setObjectName(QString::fromUtf8("pTvNowStatDb"));

        verticalLayout->addWidget(pTvNowStatDb);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pPbclear = new QPushButton(Tab5Mysql);
        pPbclear->setObjectName(QString::fromUtf8("pPbclear"));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        pPbclear->setFont(font);
        pPbclear->setFlat(true);

        horizontalLayout_2->addWidget(pPbclear);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pPbReport = new QPushButton(Tab5Mysql);
        pPbReport->setObjectName(QString::fromUtf8("pPbReport"));
        pPbReport->setEnabled(true);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Ubuntu"));
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setStyleStrategy(QFont::NoAntialias);
        pPbReport->setFont(font1);
        pPbReport->setFocusPolicy(Qt::NoFocus);
        pPbReport->setContextMenuPolicy(Qt::DefaultContextMenu);
        pPbReport->setCheckable(false);
        pPbReport->setAutoDefault(false);
        pPbReport->setFlat(true);

        horizontalLayout_2->addWidget(pPbReport);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(3, 1);
        horizontalLayout_2->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Tab5Mysql);

        QMetaObject::connectSlotsByName(Tab5Mysql);
    } // setupUi

    void retranslateUi(QWidget *Tab5Mysql)
    {
        Tab5Mysql->setWindowTitle(QCoreApplication::translate("Tab5Mysql", "Form", nullptr));
        pPbclear->setText(QCoreApplication::translate("Tab5Mysql", "Clear", nullptr));
        pPbReport->setText(QCoreApplication::translate("Tab5Mysql", "Serch", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab5Mysql: public Ui_Tab5Mysql {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB5MYSQL_H
