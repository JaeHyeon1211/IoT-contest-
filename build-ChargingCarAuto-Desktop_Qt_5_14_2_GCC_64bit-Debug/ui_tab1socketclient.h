/********************************************************************************
** Form generated from reading UI file 'tab1socketclient.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB1SOCKETCLIENT_H
#define UI_TAB1SOCKETCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab1SocketClient
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *pLabel;
    QPushButton *pPbRecvDataClear;
    QPushButton *pPbServerConnect;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *pTeRecvData1;
    QTextEdit *pTeRecvData2;

    void setupUi(QWidget *Tab1SocketClient)
    {
        if (Tab1SocketClient->objectName().isEmpty())
            Tab1SocketClient->setObjectName(QString::fromUtf8("Tab1SocketClient"));
        Tab1SocketClient->resize(790, 410);
        gridLayout = new QGridLayout(Tab1SocketClient);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 5, 5);
        pLabel = new QLabel(Tab1SocketClient);
        pLabel->setObjectName(QString::fromUtf8("pLabel"));
        QFont font;
        font.setPointSize(16);
        pLabel->setFont(font);

        horizontalLayout->addWidget(pLabel);

        pPbRecvDataClear = new QPushButton(Tab1SocketClient);
        pPbRecvDataClear->setObjectName(QString::fromUtf8("pPbRecvDataClear"));

        horizontalLayout->addWidget(pPbRecvDataClear);

        pPbServerConnect = new QPushButton(Tab1SocketClient);
        pPbServerConnect->setObjectName(QString::fromUtf8("pPbServerConnect"));
        pPbServerConnect->setCheckable(true);

        horizontalLayout->addWidget(pPbServerConnect);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pTeRecvData1 = new QTextEdit(Tab1SocketClient);
        pTeRecvData1->setObjectName(QString::fromUtf8("pTeRecvData1"));
        pTeRecvData1->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(pTeRecvData1);

        pTeRecvData2 = new QTextEdit(Tab1SocketClient);
        pTeRecvData2->setObjectName(QString::fromUtf8("pTeRecvData2"));
        pTeRecvData2->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(pTeRecvData2);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Tab1SocketClient);

        QMetaObject::connectSlotsByName(Tab1SocketClient);
    } // setupUi

    void retranslateUi(QWidget *Tab1SocketClient)
    {
        Tab1SocketClient->setWindowTitle(QCoreApplication::translate("Tab1SocketClient", "Form", nullptr));
        pLabel->setText(QCoreApplication::translate("Tab1SocketClient", "Log", nullptr));
        pPbRecvDataClear->setText(QCoreApplication::translate("Tab1SocketClient", "Clear", nullptr));
        pPbServerConnect->setText(QCoreApplication::translate("Tab1SocketClient", "Connent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tab1SocketClient: public Ui_Tab1SocketClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB1SOCKETCLIENT_H
