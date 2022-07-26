/********************************************************************************
** Form generated from reading UI file 'qfilesocket.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFILESOCKET_H
#define UI_QFILESOCKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QfileSocket
{
public:
    QWidget *widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QTextEdit *pTeLogData;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pPbclear;
    QPushButton *pPbQfileRead;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *QfileSocket)
    {
        if (QfileSocket->objectName().isEmpty())
            QfileSocket->setObjectName(QString::fromUtf8("QfileSocket"));
        QfileSocket->resize(790, 460);
        widget = new QWidget(QfileSocket);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 790, 451));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 771, 411));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pTeLogData = new QTextEdit(verticalLayoutWidget);
        pTeLogData->setObjectName(QString::fromUtf8("pTeLogData"));
        pTeLogData->setMouseTracking(false);
        pTeLogData->setFocusPolicy(Qt::NoFocus);

        horizontalLayout->addWidget(pTeLogData);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pPbclear = new QPushButton(verticalLayoutWidget);
        pPbclear->setObjectName(QString::fromUtf8("pPbclear"));

        horizontalLayout_2->addWidget(pPbclear);

        pPbQfileRead = new QPushButton(verticalLayoutWidget);
        pPbQfileRead->setObjectName(QString::fromUtf8("pPbQfileRead"));

        horizontalLayout_2->addWidget(pPbQfileRead);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(QfileSocket);

        QMetaObject::connectSlotsByName(QfileSocket);
    } // setupUi

    void retranslateUi(QWidget *QfileSocket)
    {
        QfileSocket->setWindowTitle(QCoreApplication::translate("QfileSocket", "Form", nullptr));
        label->setText(QCoreApplication::translate("QfileSocket", "Total Log", nullptr));
        pPbclear->setText(QCoreApplication::translate("QfileSocket", "clear", nullptr));
        pPbQfileRead->setText(QCoreApplication::translate("QfileSocket", "Read", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QfileSocket: public Ui_QfileSocket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFILESOCKET_H
