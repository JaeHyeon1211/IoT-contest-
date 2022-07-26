/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwidget
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *pTab1;
    QWidget *pTab4;
    QWidget *pTab5;
    QWidget *pTab6;

    void setupUi(QWidget *mainwidget)
    {
        if (mainwidget->objectName().isEmpty())
            mainwidget->setObjectName(QString::fromUtf8("mainwidget"));
        mainwidget->resize(790, 480);
        gridLayout = new QGridLayout(mainwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(mainwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        pTab1 = new QWidget();
        pTab1->setObjectName(QString::fromUtf8("pTab1"));
        tabWidget->addTab(pTab1, QString());
        pTab4 = new QWidget();
        pTab4->setObjectName(QString::fromUtf8("pTab4"));
        tabWidget->addTab(pTab4, QString());
        pTab5 = new QWidget();
        pTab5->setObjectName(QString::fromUtf8("pTab5"));
        pTab5->setContextMenuPolicy(Qt::DefaultContextMenu);
        tabWidget->addTab(pTab5, QString());
        pTab6 = new QWidget();
        pTab6->setObjectName(QString::fromUtf8("pTab6"));
        tabWidget->addTab(pTab6, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(mainwidget);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(mainwidget);
    } // setupUi

    void retranslateUi(QWidget *mainwidget)
    {
        mainwidget->setWindowTitle(QCoreApplication::translate("mainwidget", "mainwidget", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pTab1), QCoreApplication::translate("mainwidget", "Home", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pTab4), QCoreApplication::translate("mainwidget", "Control", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pTab5), QCoreApplication::translate("mainwidget", "Space_status", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pTab6), QCoreApplication::translate("mainwidget", "InOutData", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwidget: public Ui_mainwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
