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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QTabWidget *tabWidget;
    QWidget *pTab3;
    QWidget *pTab1;
    QWidget *pTab2;
    QWidget *pTab4;
    QWidget *pTab5;
    QWidget *pTab6;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QString::fromUtf8("MainWidget"));
        MainWidget->resize(800, 460);
        tabWidget = new QTabWidget(MainWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 800, 480));
        pTab3 = new QWidget();
        pTab3->setObjectName(QString::fromUtf8("pTab3"));
        tabWidget->addTab(pTab3, QString());
        pTab1 = new QWidget();
        pTab1->setObjectName(QString::fromUtf8("pTab1"));
        tabWidget->addTab(pTab1, QString());
        pTab2 = new QWidget();
        pTab2->setObjectName(QString::fromUtf8("pTab2"));
        tabWidget->addTab(pTab2, QString());
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

        retranslateUi(MainWidget);

        tabWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "MainWidget", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pTab3), QCoreApplication::translate("MainWidget", "Tab 3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pTab1), QCoreApplication::translate("MainWidget", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pTab2), QCoreApplication::translate("MainWidget", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pTab4), QCoreApplication::translate("MainWidget", "Tab 4", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pTab5), QCoreApplication::translate("MainWidget", "Tab 5", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(pTab6), QCoreApplication::translate("MainWidget", "Tab6", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
