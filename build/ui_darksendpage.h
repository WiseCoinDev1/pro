/********************************************************************************
** Form generated from reading UI file 'darksendpage.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DARKSENDPAGE_H
#define UI_DARKSENDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DarksendPage
{
public:
    QFrame *frameDarksend;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *labelDarksendSyncStatus;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *runAutoDenom;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLabel *darksendEnabled;
    QLabel *label_7;
    QProgressBar *darksendProgress;
    QLabel *denominatedBalanceLabel;
    QLabel *denominatedBalanceValue;
    QLabel *label_8;
    QLabel *labelAmountRounds;
    QLabel *label_9;
    QLabel *labelSubmittedDenom;
    QLabel *labelAnonymizedText;
    QLabel *labelAnonymized;
    QFrame *lineLastMessage;
    QLabel *darksendStatus;
    QPushButton *darksendAuto;
    QPushButton *toggleDarksend;
    QPushButton *darksendReset;
    QLabel *darksendMessageLog;
    QTextEdit *messageLog;

    void setupUi(QWidget *DarksendPage)
    {
        if (DarksendPage->objectName().isEmpty())
            DarksendPage->setObjectName(QStringLiteral("DarksendPage"));
        DarksendPage->resize(1189, 566);
        frameDarksend = new QFrame(DarksendPage);
        frameDarksend->setObjectName(QStringLiteral("frameDarksend"));
        frameDarksend->setGeometry(QRect(0, 0, 465, 350));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameDarksend->sizePolicy().hasHeightForWidth());
        frameDarksend->setSizePolicy(sizePolicy);
        frameDarksend->setMinimumSize(QSize(0, 350));
        frameDarksend->setLayoutDirection(Qt::LeftToRight);
        frameDarksend->setFrameShape(QFrame::NoFrame);
        frameDarksend->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frameDarksend);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(frameDarksend);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout_5->addWidget(label_2);

        labelDarksendSyncStatus = new QLabel(frameDarksend);
        labelDarksendSyncStatus->setObjectName(QStringLiteral("labelDarksendSyncStatus"));
        labelDarksendSyncStatus->setStyleSheet(QStringLiteral("QLabel { color: red; }"));
        labelDarksendSyncStatus->setText(QStringLiteral("(out of sync)"));
        labelDarksendSyncStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(labelDarksendSyncStatus);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_5);

        runAutoDenom = new QPushButton(frameDarksend);
        runAutoDenom->setObjectName(QStringLiteral("runAutoDenom"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(239, 238, 238, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(247, 246, 246, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 119, 119, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 159, 159, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        runAutoDenom->setPalette(palette);
        runAutoDenom->setFocusPolicy(Qt::NoFocus);
        runAutoDenom->setAutoFillBackground(true);
        runAutoDenom->setFlat(true);

        verticalLayout_5->addWidget(runAutoDenom);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(11);
        formLayout->setVerticalSpacing(12);
        label_6 = new QLabel(frameDarksend);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        darksendEnabled = new QLabel(frameDarksend);
        darksendEnabled->setObjectName(QStringLiteral("darksendEnabled"));

        formLayout->setWidget(0, QFormLayout::FieldRole, darksendEnabled);

        label_7 = new QLabel(frameDarksend);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        darksendProgress = new QProgressBar(frameDarksend);
        darksendProgress->setObjectName(QStringLiteral("darksendProgress"));
        darksendProgress->setMaximumSize(QSize(154, 16777215));
        darksendProgress->setValue(0);

        formLayout->setWidget(1, QFormLayout::FieldRole, darksendProgress);

        denominatedBalanceLabel = new QLabel(frameDarksend);
        denominatedBalanceLabel->setObjectName(QStringLiteral("denominatedBalanceLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, denominatedBalanceLabel);

        denominatedBalanceValue = new QLabel(frameDarksend);
        denominatedBalanceValue->setObjectName(QStringLiteral("denominatedBalanceValue"));
        denominatedBalanceValue->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, denominatedBalanceValue);

        label_8 = new QLabel(frameDarksend);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_8);

        labelAmountRounds = new QLabel(frameDarksend);
        labelAmountRounds->setObjectName(QStringLiteral("labelAmountRounds"));

        formLayout->setWidget(5, QFormLayout::FieldRole, labelAmountRounds);

        label_9 = new QLabel(frameDarksend);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_9);

        labelSubmittedDenom = new QLabel(frameDarksend);
        labelSubmittedDenom->setObjectName(QStringLiteral("labelSubmittedDenom"));

        formLayout->setWidget(6, QFormLayout::FieldRole, labelSubmittedDenom);

        labelAnonymizedText = new QLabel(frameDarksend);
        labelAnonymizedText->setObjectName(QStringLiteral("labelAnonymizedText"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelAnonymizedText);

        labelAnonymized = new QLabel(frameDarksend);
        labelAnonymized->setObjectName(QStringLiteral("labelAnonymized"));
        labelAnonymized->setFont(font);
        labelAnonymized->setText(QStringLiteral("0.00 ILM"));

        formLayout->setWidget(3, QFormLayout::FieldRole, labelAnonymized);


        verticalLayout_5->addLayout(formLayout);

        lineLastMessage = new QFrame(frameDarksend);
        lineLastMessage->setObjectName(QStringLiteral("lineLastMessage"));
        lineLastMessage->setFrameShape(QFrame::HLine);
        lineLastMessage->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(lineLastMessage);

        darksendStatus = new QLabel(frameDarksend);
        darksendStatus->setObjectName(QStringLiteral("darksendStatus"));
        darksendStatus->setMinimumSize(QSize(288, 43));
        darksendStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        darksendStatus->setWordWrap(true);

        verticalLayout_5->addWidget(darksendStatus);

        darksendAuto = new QPushButton(DarksendPage);
        darksendAuto->setObjectName(QStringLiteral("darksendAuto"));
        darksendAuto->setGeometry(QRect(480, 130, 131, 23));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(darksendAuto->sizePolicy().hasHeightForWidth());
        darksendAuto->setSizePolicy(sizePolicy1);
        toggleDarksend = new QPushButton(DarksendPage);
        toggleDarksend->setObjectName(QStringLiteral("toggleDarksend"));
        toggleDarksend->setGeometry(QRect(480, 170, 131, 23));
        sizePolicy1.setHeightForWidth(toggleDarksend->sizePolicy().hasHeightForWidth());
        toggleDarksend->setSizePolicy(sizePolicy1);
        darksendReset = new QPushButton(DarksendPage);
        darksendReset->setObjectName(QStringLiteral("darksendReset"));
        darksendReset->setGeometry(QRect(480, 210, 131, 23));
        sizePolicy1.setHeightForWidth(darksendReset->sizePolicy().hasHeightForWidth());
        darksendReset->setSizePolicy(sizePolicy1);
        darksendReset->setAutoFillBackground(false);
        darksendMessageLog = new QLabel(DarksendPage);
        darksendMessageLog->setObjectName(QStringLiteral("darksendMessageLog"));
        darksendMessageLog->setGeometry(QRect(710, 10, 121, 20));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        darksendMessageLog->setFont(font1);
        messageLog = new QTextEdit(DarksendPage);
        messageLog->setObjectName(QStringLiteral("messageLog"));
        messageLog->setGeometry(QRect(630, 50, 281, 351));
        messageLog->setUndoRedoEnabled(false);
        messageLog->setReadOnly(true);

        retranslateUi(DarksendPage);

        QMetaObject::connectSlotsByName(DarksendPage);
    } // setupUi

    void retranslateUi(QWidget *DarksendPage)
    {
        DarksendPage->setWindowTitle(QApplication::translate("DarksendPage", "Form", 0));
        label_2->setText(QApplication::translate("DarksendPage", "Darksend", 0));
#ifndef QT_NO_TOOLTIP
        labelDarksendSyncStatus->setToolTip(QApplication::translate("DarksendPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Illuminum network after a connection is established, but this process has not completed yet.", 0));
#endif // QT_NO_TOOLTIP
        runAutoDenom->setText(QString());
        label_6->setText(QApplication::translate("DarksendPage", "Status:", 0));
        darksendEnabled->setText(QApplication::translate("DarksendPage", "Enabled/Disabled", 0));
        label_7->setText(QApplication::translate("DarksendPage", "Completion:", 0));
        denominatedBalanceLabel->setText(QApplication::translate("DarksendPage", "Denominated Balance", 0));
        denominatedBalanceValue->setText(QApplication::translate("DarksendPage", "0.00 ILM", 0));
        label_8->setText(QApplication::translate("DarksendPage", "Amount and Rounds:", 0));
        labelAmountRounds->setText(QApplication::translate("DarksendPage", "0 ILM / 0 Rounds", 0));
        label_9->setText(QApplication::translate("DarksendPage", "Submitted Denom:", 0));
#ifndef QT_NO_TOOLTIP
        labelSubmittedDenom->setToolTip(QApplication::translate("DarksendPage", "The denominations you submitted to the Masternode.<br>To mix, other users must submit the exact same denominations.", 0));
#endif // QT_NO_TOOLTIP
        labelSubmittedDenom->setText(QApplication::translate("DarksendPage", "N/A", 0));
        labelAnonymizedText->setText(QApplication::translate("DarksendPage", "Darksend Balance:", 0));
        darksendStatus->setText(QString());
#ifndef QT_NO_TOOLTIP
        darksendAuto->setToolTip(QApplication::translate("DarksendPage", "Try to manually submit a Darksend request.", 0));
#endif // QT_NO_TOOLTIP
        darksendAuto->setText(QApplication::translate("DarksendPage", "Try Mix", 0));
        toggleDarksend->setText(QApplication::translate("DarksendPage", "Start Mixing", 0));
#ifndef QT_NO_TOOLTIP
        darksendReset->setToolTip(QApplication::translate("DarksendPage", "Reset the current status of Darksend (can interrupt Darksend if it's in the process of Mixing, which can cost you money!)", 0));
#endif // QT_NO_TOOLTIP
        darksendReset->setText(QApplication::translate("DarksendPage", "Reset", 0));
        darksendMessageLog->setText(QApplication::translate("DarksendPage", "Message Log", 0));
        messageLog->setPlaceholderText(QApplication::translate("DarksendPage", "Updates for the current Darksend session will appear here.", 0));
    } // retranslateUi

};

namespace Ui {
    class DarksendPage: public Ui_DarksendPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DARKSENDPAGE_H
