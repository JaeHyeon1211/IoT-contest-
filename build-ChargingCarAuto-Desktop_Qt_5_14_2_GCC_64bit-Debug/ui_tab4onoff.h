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
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *SPOT1;
    QLabel *pcar1;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pPBLamp1;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *pcar2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pPBLamp2;
    QProgressBar *progressBar_2;

    void setupUi(QWidget *Tab4OnOff)
    {
        if (Tab4OnOff->objectName().isEmpty())
            Tab4OnOff->setObjectName(QString::fromUtf8("Tab4OnOff"));
        Tab4OnOff->resize(780, 410);
        gridLayout = new QGridLayout(Tab4OnOff);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        SPOT1 = new QLabel(Tab4OnOff);
        SPOT1->setObjectName(QString::fromUtf8("SPOT1"));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        SPOT1->setFont(font);
        SPOT1->setContextMenuPolicy(Qt::NoContextMenu);
        SPOT1->setLayoutDirection(Qt::LeftToRight);
        SPOT1->setFrameShape(QFrame::NoFrame);
        SPOT1->setTextFormat(Qt::AutoText);
        SPOT1->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(SPOT1);

        pcar1 = new QLabel(Tab4OnOff);
        pcar1->setObjectName(QString::fromUtf8("pcar1"));
        pcar1->setTextFormat(Qt::AutoText);
        pcar1->setPixmap(QPixmap(QString::fromUtf8(":/IotQtClient/img/areaemp.png")));
        pcar1->setScaledContents(true);
        pcar1->setMargin(-4);
        pcar1->setIndent(-1);

        verticalLayout->addWidget(pcar1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pPBLamp1 = new QPushButton(Tab4OnOff);
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
        QFont font1;
        font1.setStyleStrategy(QFont::NoAntialias);
        pPBLamp1->setFont(font1);
        pPBLamp1->setLayoutDirection(Qt::LeftToRight);
        pPBLamp1->setIconSize(QSize(60, 60));
        pPBLamp1->setCheckable(true);
        pPBLamp1->setAutoDefault(false);
        pPBLamp1->setFlat(true);

        horizontalLayout_4->addWidget(pPBLamp1);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout);

        progressBar = new QProgressBar(Tab4OnOff);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(Tab4OnOff);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        pcar2 = new QLabel(Tab4OnOff);
        pcar2->setObjectName(QString::fromUtf8("pcar2"));
        pcar2->setTextFormat(Qt::PlainText);
        pcar2->setPixmap(QPixmap(QString::fromUtf8(":/IotQtClient/img/areaemp.png")));
        pcar2->setScaledContents(true);
        pcar2->setMargin(-4);
        pcar2->setIndent(-1);

        verticalLayout_2->addWidget(pcar2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pPBLamp2 = new QPushButton(Tab4OnOff);
        pPBLamp2->setObjectName(QString::fromUtf8("pPBLamp2"));
        sizePolicy.setHeightForWidth(pPBLamp2->sizePolicy().hasHeightForWidth());
        pPBLamp2->setSizePolicy(sizePolicy);
        pPBLamp2->setIconSize(QSize(60, 60));
        pPBLamp2->setCheckable(true);
        pPBLamp2->setFlat(true);

        horizontalLayout_5->addWidget(pPBLamp2);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout_3->addLayout(verticalLayout_2);

        progressBar_2 = new QProgressBar(Tab4OnOff);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setValue(0);

        horizontalLayout_3->addWidget(progressBar_2);


        horizontalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        retranslateUi(Tab4OnOff);

        pPBLamp1->setDefault(false);


        QMetaObject::connectSlotsByName(Tab4OnOff);
    } // setupUi

    void retranslateUi(QWidget *Tab4OnOff)
    {
        Tab4OnOff->setWindowTitle(QCoreApplication::translate("Tab4OnOff", "Form", nullptr));
        SPOT1->setText(QCoreApplication::translate("Tab4OnOff", "SPOT1", nullptr));
        pcar1->setText(QString());
        pPBLamp1->setText(QString());
        label->setText(QCoreApplication::translate("Tab4OnOff", "SPOT2", nullptr));
        pcar2->setText(QString());
        pPBLamp2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tab4OnOff: public Ui_Tab4OnOff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB4ONOFF_H
