/********************************************************************************
** Form generated from reading UI file 'tab4onoff.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB4ONOFF_H
#define UI_TAB4ONOFF_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab4OnOff
{
public:
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pPBOne;
    QLabel *pcar1;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pPBLamp1;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pPBTwo;
    QLabel *pcar2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pPBLamp2;
    QProgressBar *progressBar_2;

    void setupUi(QWidget *Tab4OnOff)
    {
        if (Tab4OnOff->objectName().isEmpty())
            Tab4OnOff->setObjectName(QString::fromUtf8("Tab4OnOff"));
        Tab4OnOff->resize(790, 410);
        horizontalLayoutWidget_2 = new QWidget(Tab4OnOff);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 10, 741, 381));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pPBOne = new QPushButton(horizontalLayoutWidget_2);
        pPBOne->setObjectName(QString::fromUtf8("pPBOne"));
        pPBOne->setCheckable(true);

        verticalLayout->addWidget(pPBOne);

        pcar1 = new QLabel(horizontalLayoutWidget_2);
        pcar1->setObjectName(QString::fromUtf8("pcar1"));
        pcar1->setTextFormat(Qt::MarkdownText);
        pcar1->setPixmap(QPixmap(QString::fromUtf8(":/IotQtClient/img/areaemp.png")));
        pcar1->setScaledContents(true);
        pcar1->setMargin(-4);
        pcar1->setIndent(-1);

        verticalLayout->addWidget(pcar1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pPBLamp1 = new QPushButton(horizontalLayoutWidget_2);
        pPBLamp1->setObjectName(QString::fromUtf8("pPBLamp1"));
        pPBLamp1->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pPBLamp1->sizePolicy().hasHeightForWidth());
        pPBLamp1->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pPBLamp1->setPalette(palette);
        QFont font;
        font.setStyleStrategy(QFont::NoAntialias);
        pPBLamp1->setFont(font);
        pPBLamp1->setLayoutDirection(Qt::LeftToRight);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/IotQtClient/img/plugout.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/IotQtClient/img/plug.png"), QSize(), QIcon::Normal, QIcon::On);
        pPBLamp1->setIcon(icon);
        pPBLamp1->setIconSize(QSize(60, 60));
        pPBLamp1->setCheckable(true);
        pPBLamp1->setAutoDefault(false);
        pPBLamp1->setFlat(true);

        horizontalLayout_4->addWidget(pPBLamp1);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout);

        progressBar = new QProgressBar(horizontalLayoutWidget_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        horizontalLayout->addWidget(progressBar);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pPBTwo = new QPushButton(horizontalLayoutWidget_2);
        pPBTwo->setObjectName(QString::fromUtf8("pPBTwo"));
        pPBTwo->setCheckable(true);

        verticalLayout_2->addWidget(pPBTwo);

        pcar2 = new QLabel(horizontalLayoutWidget_2);
        pcar2->setObjectName(QString::fromUtf8("pcar2"));
        pcar2->setTextFormat(Qt::MarkdownText);
        pcar2->setPixmap(QPixmap(QString::fromUtf8(":/IotQtClient/img/areaemp.png")));
        pcar2->setScaledContents(true);
        pcar2->setMargin(-4);
        pcar2->setIndent(-1);

        verticalLayout_2->addWidget(pcar2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pPBLamp2 = new QPushButton(horizontalLayoutWidget_2);
        pPBLamp2->setObjectName(QString::fromUtf8("pPBLamp2"));
        sizePolicy.setHeightForWidth(pPBLamp2->sizePolicy().hasHeightForWidth());
        pPBLamp2->setSizePolicy(sizePolicy);
        pPBLamp2->setIcon(icon);
        pPBLamp2->setIconSize(QSize(60, 60));
        pPBLamp2->setCheckable(true);
        pPBLamp2->setFlat(true);

        horizontalLayout_5->addWidget(pPBLamp2);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout_3->addLayout(verticalLayout_2);

        progressBar_2 = new QProgressBar(horizontalLayoutWidget_2);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setValue(24);

        horizontalLayout_3->addWidget(progressBar_2);


        horizontalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(Tab4OnOff);

        pPBLamp1->setDefault(false);


        QMetaObject::connectSlotsByName(Tab4OnOff);
    } // setupUi

    void retranslateUi(QWidget *Tab4OnOff)
    {
        Tab4OnOff->setWindowTitle(QCoreApplication::translate("Tab4OnOff", "Form", nullptr));
        pPBOne->setText(QCoreApplication::translate("Tab4OnOff", "pPBOne", nullptr));
        pcar1->setText(QString());
        pPBLamp1->setText(QString());
        pPBTwo->setText(QCoreApplication::translate("Tab4OnOff", "pPBTwo", nullptr));
        pcar2->setText(QString());
        pPBLamp2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tab4OnOff: public Ui_Tab4OnOff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB4ONOFF_H
