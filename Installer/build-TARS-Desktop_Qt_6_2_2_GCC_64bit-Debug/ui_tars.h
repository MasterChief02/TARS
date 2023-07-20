/********************************************************************************
** Form generated from reading UI file 'tars.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TARS_H
#define UI_TARS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TARS
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *welcomeButton;
    QPushButton *partitionButton;
    QPushButton *downloadButton;
    QPushButton *modeButton;
    QPushButton *installButton;
    QFrame *frame_3;
    QFrame *welcomeFrame;
    QLabel *label_3;
    QFrame *line;
    QLabel *label_4;
    QTextBrowser *hostTextBrowser;
    QLabel *label_5;
    QTextBrowser *hostErrTextBrowser;
    QPushButton *hostNextButton;
    QPushButton *hostCancelButton;
    QFrame *partitionFrame;
    QLabel *label_6;
    QToolBox *partitionToolBox;
    QWidget *partition1Page;
    QLabel *label_7;
    QLineEdit *partition1RootLineEdit;
    QLabel *label_8;
    QLineEdit *partition1SwapLineEdit;
    QWidget *partition2Page;
    QLabel *label_9;
    QLineEdit *partition2RootLineEdit;
    QLabel *label_10;
    QLineEdit *partition2SwapLineEdit;
    QLabel *label_11;
    QLineEdit *partition2HomeLineEdit;
    QLabel *label_12;
    QPushButton *partitionNextButton;
    QFrame *downloadFrame;
    QLabel *label_13;
    QProgressBar *downloadProgressBar;
    QTextBrowser *downloadTextBrowser;
    QPushButton *downloadNextButton;
    QFrame *modeFrame;
    QLabel *label_15;
    QFrame *modeTerminalFrame;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *modeNextButton;
    QFrame *installFrame;
    QLabel *label_14;
    QProgressBar *installProgressBar;
    QTextBrowser *installTextBrowser;

    void setupUi(QDialog *TARS)
    {
        if (TARS->objectName().isEmpty())
            TARS->setObjectName(QString::fromUtf8("TARS"));
        TARS->resize(800, 600);
        TARS->setMinimumSize(QSize(800, 600));
        TARS->setMaximumSize(QSize(800, 600));
        QPalette palette;
        TARS->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/tars-logo-trials.png"), QSize(), QIcon::Normal, QIcon::Off);
        TARS->setWindowIcon(icon);
        TARS->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	border:0;\n"
"}\n"
"#frame_3 {\n"
"	background: rgb(2,0,36);\n"
"	border-color: qlineargradient(1spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"#frame_2 {\n"
"	background: rgb(2,0,36);\n"
"	\n"
"	background-color: qlineargradient(spread:pad, x1:0.529647, y1:0.301, x2:0.515, y2:1, stop:0 rgba(0, 104, 0, 255), stop:1 rgba(30, 116, 37, 255));\n"
"	color: rgb(0, 0, 0);\n"
"	font: 700 16pt \"Verdana\";\n"
"}\n"
"\n"
"#welcomeButton,\n"
"#modeButton,\n"
"#downloadButton,\n"
"#installButton,\n"
"#partitionButton {\n"
"	border-radius: 0px;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 700 italic 14pt \"Roboto Slab\";\n"
"}\n"
"\n"
"QTextBrowser {\n"
"	border-radius: 0px;\n"
"	color: rgb(255, 255, 255);\n"
"	font: 12pt \"Roboto Slab\";\n"
"}\n"
"\n"
"QLabel {\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#welcomeButton {\n"
"	background: rgb(2,0,36);\n"
"}\n"
"\n"
"#hostErrTextBrowser,\n"
"#label_5 {\n"
"	color: rgb(224, 27, 36);\n"
"}\n"
"\n"
""
                        "#hostNextButton,\n"
"#downloadNextButton,\n"
"#hostCancelButton,\n"
"#modeNextButton,\n"
"#partitionNextButton {\n"
"	color:white;\n"
"    border: 1px solid rgb(50,200,50);\n"
"}\n"
"\n"
"QProgressBar {\n"
"    border: 2px solid rgb(50,200,50);\n"
"	background-color: rgba(0,0,0,1);\n"
"	color: white;\n"
"	text-align:center;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: rgba(50,200,50,0.5);\n"
"    width: 20px;\n"
"}\n"
"\n"
"#modeTerminalFrame {\n"
"	border: 1px solid rgb(50,200,50);\n"
"}\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(TARS);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(TARS);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 200, 600));
        frame_2->setAutoFillBackground(false);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 20, 100, 100));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resources/tars-logo-trials.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 130, 200, 40));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        welcomeButton = new QPushButton(frame_2);
        welcomeButton->setObjectName(QString::fromUtf8("welcomeButton"));
        welcomeButton->setGeometry(QRect(0, 200, 200, 50));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        welcomeButton->setFont(font1);
        welcomeButton->setStyleSheet(QString::fromUtf8(""));
        welcomeButton->setAutoDefault(true);
        welcomeButton->setFlat(false);
        partitionButton = new QPushButton(frame_2);
        partitionButton->setObjectName(QString::fromUtf8("partitionButton"));
        partitionButton->setGeometry(QRect(0, 250, 200, 50));
        partitionButton->setFont(font1);
        partitionButton->setStyleSheet(QString::fromUtf8(""));
        partitionButton->setAutoDefault(true);
        partitionButton->setFlat(false);
        downloadButton = new QPushButton(frame_2);
        downloadButton->setObjectName(QString::fromUtf8("downloadButton"));
        downloadButton->setGeometry(QRect(0, 350, 200, 50));
        downloadButton->setFont(font1);
        downloadButton->setStyleSheet(QString::fromUtf8(""));
        downloadButton->setAutoDefault(true);
        downloadButton->setFlat(false);
        modeButton = new QPushButton(frame_2);
        modeButton->setObjectName(QString::fromUtf8("modeButton"));
        modeButton->setGeometry(QRect(0, 300, 200, 50));
        modeButton->setFont(font1);
        modeButton->setStyleSheet(QString::fromUtf8(""));
        modeButton->setAutoDefault(true);
        modeButton->setFlat(false);
        installButton = new QPushButton(frame_2);
        installButton->setObjectName(QString::fromUtf8("installButton"));
        installButton->setGeometry(QRect(0, 400, 200, 50));
        installButton->setFont(font1);
        installButton->setStyleSheet(QString::fromUtf8(""));
        installButton->setAutoDefault(true);
        installButton->setFlat(false);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(200, 0, 600, 600));
        frame_3->setStyleSheet(QString::fromUtf8(""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        welcomeFrame = new QFrame(frame_3);
        welcomeFrame->setObjectName(QString::fromUtf8("welcomeFrame"));
        welcomeFrame->setEnabled(true);
        welcomeFrame->setGeometry(QRect(0, 0, 600, 600));
        welcomeFrame->setStyleSheet(QString::fromUtf8(""));
        welcomeFrame->setFrameShape(QFrame::StyledPanel);
        welcomeFrame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(welcomeFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 600, 100));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);
        line = new QFrame(welcomeFrame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(50, 100, 500, 5));
        line->setAutoFillBackground(false);
        line->setFrameShadow(QFrame::Raised);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::HLine);
        label_4 = new QLabel(welcomeFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 110, 500, 30));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        label_4->setFont(font3);
        hostTextBrowser = new QTextBrowser(welcomeFrame);
        hostTextBrowser->setObjectName(QString::fromUtf8("hostTextBrowser"));
        hostTextBrowser->setGeometry(QRect(60, 140, 480, 200));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setItalic(false);
        hostTextBrowser->setFont(font4);
        hostTextBrowser->setAutoFillBackground(true);
        hostTextBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        hostTextBrowser->setFrameShape(QFrame::NoFrame);
        hostTextBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        hostTextBrowser->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        label_5 = new QLabel(welcomeFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setEnabled(true);
        label_5->setGeometry(QRect(50, 350, 500, 30));
        label_5->setFont(font3);
        hostErrTextBrowser = new QTextBrowser(welcomeFrame);
        hostErrTextBrowser->setObjectName(QString::fromUtf8("hostErrTextBrowser"));
        hostErrTextBrowser->setGeometry(QRect(60, 380, 480, 100));
        hostErrTextBrowser->setFont(font4);
        hostErrTextBrowser->setAutoFillBackground(true);
        hostErrTextBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        hostErrTextBrowser->setFrameShape(QFrame::NoFrame);
        hostErrTextBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        hostErrTextBrowser->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        hostNextButton = new QPushButton(welcomeFrame);
        hostNextButton->setObjectName(QString::fromUtf8("hostNextButton"));
        hostNextButton->setEnabled(false);
        hostNextButton->setGeometry(QRect(470, 525, 75, 30));
        QPalette palette1;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush1(QColor(239, 239, 239, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        hostNextButton->setPalette(palette1);
        hostNextButton->setFont(font3);
        hostCancelButton = new QPushButton(welcomeFrame);
        hostCancelButton->setObjectName(QString::fromUtf8("hostCancelButton"));
        hostCancelButton->setEnabled(true);
        hostCancelButton->setGeometry(QRect(360, 525, 100, 30));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(154, 153, 150, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        QBrush brush3(QColor(231, 230, 225, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush3);
        QBrush brush4(QColor(192, 191, 187, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        QBrush brush5(QColor(77, 77, 75, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush5);
        QBrush brush6(QColor(103, 102, 100, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        QBrush brush8(QColor(204, 204, 202, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        QBrush brush10(QColor(202, 202, 202, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        QBrush brush11(QColor(159, 159, 159, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        QBrush brush12(QColor(184, 184, 184, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush13(QColor(118, 118, 118, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush13);
        QBrush brush14(QColor(247, 247, 247, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush14);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        QBrush brush15(QColor(177, 177, 177, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        hostCancelButton->setPalette(palette2);
        hostCancelButton->setFont(font3);
        partitionFrame = new QFrame(frame_3);
        partitionFrame->setObjectName(QString::fromUtf8("partitionFrame"));
        partitionFrame->setGeometry(QRect(0, 0, 600, 600));
        partitionFrame->setFrameShape(QFrame::StyledPanel);
        partitionFrame->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(partitionFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 600, 100));
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);
        partitionToolBox = new QToolBox(partitionFrame);
        partitionToolBox->setObjectName(QString::fromUtf8("partitionToolBox"));
        partitionToolBox->setGeometry(QRect(50, 100, 500, 300));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush16(QColor(191, 64, 64, 0));
        brush16.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush16);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush16);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush16);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush16);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush16);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush16);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        partitionToolBox->setPalette(palette3);
        partitionToolBox->setFont(font3);
        partitionToolBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(191, 64, 64, 0);\n"
""));
        partition1Page = new QWidget();
        partition1Page->setObjectName(QString::fromUtf8("partition1Page"));
        partition1Page->setGeometry(QRect(0, 0, 500, 232));
        partition1Page->setStyleSheet(QString::fromUtf8(""));
        label_7 = new QLabel(partition1Page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 24, 120, 18));
        QFont font5;
        font5.setBold(true);
        label_7->setFont(font5);
        partition1RootLineEdit = new QLineEdit(partition1Page);
        partition1RootLineEdit->setObjectName(QString::fromUtf8("partition1RootLineEdit"));
        partition1RootLineEdit->setGeometry(QRect(140, 20, 200, 26));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(false);
        partition1RootLineEdit->setFont(font6);
        partition1RootLineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(50,200,50);\n"
"padding: 0 2px;"));
        label_8 = new QLabel(partition1Page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 64, 120, 18));
        label_8->setFont(font5);
        partition1SwapLineEdit = new QLineEdit(partition1Page);
        partition1SwapLineEdit->setObjectName(QString::fromUtf8("partition1SwapLineEdit"));
        partition1SwapLineEdit->setGeometry(QRect(140, 60, 200, 26));
        partition1SwapLineEdit->setFont(font6);
        partition1SwapLineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(50,200,50);\n"
"padding: 0 2px;"));
        partitionToolBox->addItem(partition1Page, QString::fromUtf8("/root Only Partition"));
        partition2Page = new QWidget();
        partition2Page->setObjectName(QString::fromUtf8("partition2Page"));
        partition2Page->setGeometry(QRect(0, 0, 500, 232));
        partition2Page->setStyleSheet(QString::fromUtf8(""));
        label_9 = new QLabel(partition2Page);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 24, 120, 18));
        label_9->setFont(font5);
        partition2RootLineEdit = new QLineEdit(partition2Page);
        partition2RootLineEdit->setObjectName(QString::fromUtf8("partition2RootLineEdit"));
        partition2RootLineEdit->setGeometry(QRect(140, 20, 200, 26));
        partition2RootLineEdit->setFont(font6);
        partition2RootLineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(50,200,50);\n"
"padding: 0 2px;"));
        label_10 = new QLabel(partition2Page);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 64, 120, 18));
        label_10->setFont(font5);
        partition2SwapLineEdit = new QLineEdit(partition2Page);
        partition2SwapLineEdit->setObjectName(QString::fromUtf8("partition2SwapLineEdit"));
        partition2SwapLineEdit->setGeometry(QRect(140, 100, 200, 26));
        partition2SwapLineEdit->setFont(font6);
        partition2SwapLineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(50,200,50);\n"
"padding: 0 2px;"));
        label_11 = new QLabel(partition2Page);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 104, 120, 18));
        label_11->setFont(font5);
        partition2HomeLineEdit = new QLineEdit(partition2Page);
        partition2HomeLineEdit->setObjectName(QString::fromUtf8("partition2HomeLineEdit"));
        partition2HomeLineEdit->setGeometry(QRect(140, 60, 200, 26));
        partition2HomeLineEdit->setFont(font6);
        partition2HomeLineEdit->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(50,200,50);\n"
"padding: 0 2px;"));
        partitionToolBox->addItem(partition2Page, QString::fromUtf8("/root , /home Partitions"));
        label_12 = new QLabel(partitionFrame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(50, 500, 500, 18));
        QFont font7;
        font7.setPointSize(8);
        font7.setBold(true);
        label_12->setFont(font7);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(224, 27, 36);"));
        partitionNextButton = new QPushButton(partitionFrame);
        partitionNextButton->setObjectName(QString::fromUtf8("partitionNextButton"));
        partitionNextButton->setEnabled(true);
        partitionNextButton->setGeometry(QRect(470, 525, 75, 30));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        partitionNextButton->setPalette(palette4);
        partitionNextButton->setFont(font3);
        downloadFrame = new QFrame(frame_3);
        downloadFrame->setObjectName(QString::fromUtf8("downloadFrame"));
        downloadFrame->setGeometry(QRect(0, 0, 600, 600));
        downloadFrame->setFrameShape(QFrame::StyledPanel);
        downloadFrame->setFrameShadow(QFrame::Raised);
        label_13 = new QLabel(downloadFrame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 0, 600, 100));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Roboto Slab")});
        font8.setPointSize(20);
        font8.setBold(true);
        label_13->setFont(font8);
        label_13->setAlignment(Qt::AlignCenter);
        downloadProgressBar = new QProgressBar(downloadFrame);
        downloadProgressBar->setObjectName(QString::fromUtf8("downloadProgressBar"));
        downloadProgressBar->setGeometry(QRect(50, 120, 500, 25));
        QFont font9;
        font9.setPointSize(10);
        font9.setBold(true);
        downloadProgressBar->setFont(font9);
        downloadProgressBar->setValue(0);
        downloadTextBrowser = new QTextBrowser(downloadFrame);
        downloadTextBrowser->setObjectName(QString::fromUtf8("downloadTextBrowser"));
        downloadTextBrowser->setGeometry(QRect(50, 170, 500, 200));
        downloadTextBrowser->setFont(font4);
        downloadTextBrowser->setAutoFillBackground(true);
        downloadTextBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        downloadTextBrowser->setFrameShape(QFrame::NoFrame);
        downloadTextBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        downloadTextBrowser->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        downloadNextButton = new QPushButton(downloadFrame);
        downloadNextButton->setObjectName(QString::fromUtf8("downloadNextButton"));
        downloadNextButton->setEnabled(true);
        downloadNextButton->setGeometry(QRect(475, 525, 75, 30));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        downloadNextButton->setPalette(palette5);
        downloadNextButton->setFont(font3);
        modeFrame = new QFrame(frame_3);
        modeFrame->setObjectName(QString::fromUtf8("modeFrame"));
        modeFrame->setGeometry(QRect(0, 0, 600, 600));
        modeFrame->setFrameShape(QFrame::StyledPanel);
        modeFrame->setFrameShadow(QFrame::Raised);
        label_15 = new QLabel(modeFrame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(0, 0, 600, 100));
        label_15->setFont(font2);
        label_15->setAlignment(Qt::AlignCenter);
        modeTerminalFrame = new QFrame(modeFrame);
        modeTerminalFrame->setObjectName(QString::fromUtf8("modeTerminalFrame"));
        modeTerminalFrame->setGeometry(QRect(50, 120, 200, 190));
        modeTerminalFrame->setFrameShape(QFrame::StyledPanel);
        modeTerminalFrame->setFrameShadow(QFrame::Raised);
        label_16 = new QLabel(modeTerminalFrame);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(50, 10, 100, 100));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/Resources/terminal.png")));
        label_16->setScaledContents(true);
        label_17 = new QLabel(modeTerminalFrame);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 120, 180, 60));
        label_17->setFont(font3);
        modeNextButton = new QPushButton(modeFrame);
        modeNextButton->setObjectName(QString::fromUtf8("modeNextButton"));
        modeNextButton->setEnabled(true);
        modeNextButton->setGeometry(QRect(475, 525, 75, 30));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        modeNextButton->setPalette(palette6);
        modeNextButton->setFont(font3);
        installFrame = new QFrame(frame_3);
        installFrame->setObjectName(QString::fromUtf8("installFrame"));
        installFrame->setGeometry(QRect(0, 0, 600, 600));
        installFrame->setFrameShape(QFrame::StyledPanel);
        installFrame->setFrameShadow(QFrame::Raised);
        label_14 = new QLabel(installFrame);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(0, 0, 600, 100));
        label_14->setFont(font8);
        label_14->setAlignment(Qt::AlignCenter);
        installProgressBar = new QProgressBar(installFrame);
        installProgressBar->setObjectName(QString::fromUtf8("installProgressBar"));
        installProgressBar->setGeometry(QRect(50, 120, 500, 25));
        installProgressBar->setFont(font9);
        installProgressBar->setValue(0);
        installTextBrowser = new QTextBrowser(installFrame);
        installTextBrowser->setObjectName(QString::fromUtf8("installTextBrowser"));
        installTextBrowser->setGeometry(QRect(50, 170, 500, 200));
        installTextBrowser->setFont(font4);
        installTextBrowser->setAutoFillBackground(true);
        installTextBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        installTextBrowser->setFrameShape(QFrame::NoFrame);
        installTextBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        installTextBrowser->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);

        verticalLayout->addWidget(frame);


        retranslateUi(TARS);

        welcomeButton->setDefault(false);
        partitionButton->setDefault(false);
        downloadButton->setDefault(false);
        modeButton->setDefault(false);
        installButton->setDefault(false);
        partitionToolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TARS);
    } // setupUi

    void retranslateUi(QDialog *TARS)
    {
        TARS->setWindowTitle(QCoreApplication::translate("TARS", "TARS Installer", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("TARS", "TARS", nullptr));
        welcomeButton->setText(QCoreApplication::translate("TARS", "Welcome", nullptr));
        partitionButton->setText(QCoreApplication::translate("TARS", "Partition", nullptr));
        downloadButton->setText(QCoreApplication::translate("TARS", "Download", nullptr));
        modeButton->setText(QCoreApplication::translate("TARS", "Type", nullptr));
        installButton->setText(QCoreApplication::translate("TARS", "Install", nullptr));
        label_3->setText(QCoreApplication::translate("TARS", "Welcome to TARS Installer", nullptr));
        label_4->setText(QCoreApplication::translate("TARS", "Checking the Host System", nullptr));
        hostTextBrowser->setHtml(QCoreApplication::translate("TARS", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Roboto Slab'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; marg"
                        "in-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel2</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; "
                        "-qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel3</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inde"
                        "nt:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel4</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-ind"
                        "ent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel5</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("TARS", "Host System Unsupported", nullptr));
        hostErrTextBrowser->setHtml(QCoreApplication::translate("TARS", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Roboto Slab'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel1</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; marg"
                        "in-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel2</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; "
                        "-qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel3</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inde"
                        "nt:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel4</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-ind"
                        "ent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt;\">TextLabel5</span></p></body></html>", nullptr));
        hostNextButton->setText(QCoreApplication::translate("TARS", "Next", nullptr));
        hostCancelButton->setText(QCoreApplication::translate("TARS", "Cancel", nullptr));
        label_6->setText(QCoreApplication::translate("TARS", "Select Partition Scheme", nullptr));
        label_7->setText(QCoreApplication::translate("TARS", "/root Partition:", nullptr));
        partition1RootLineEdit->setText(QString());
        partition1RootLineEdit->setPlaceholderText(QCoreApplication::translate("TARS", "/dev/sda1", nullptr));
        label_8->setText(QCoreApplication::translate("TARS", "Swap Partition:", nullptr));
        partition1SwapLineEdit->setText(QString());
        partition1SwapLineEdit->setPlaceholderText(QCoreApplication::translate("TARS", "/dev/sda2", nullptr));
        partitionToolBox->setItemText(partitionToolBox->indexOf(partition1Page), QCoreApplication::translate("TARS", "/root Only Partition", nullptr));
        label_9->setText(QCoreApplication::translate("TARS", "/root Partition:", nullptr));
        partition2RootLineEdit->setText(QString());
        partition2RootLineEdit->setPlaceholderText(QCoreApplication::translate("TARS", "/dev/sda1", nullptr));
        label_10->setText(QCoreApplication::translate("TARS", "/home Partition:", nullptr));
        partition2SwapLineEdit->setText(QString());
        partition2SwapLineEdit->setPlaceholderText(QCoreApplication::translate("TARS", "/dev/sda3", nullptr));
        label_11->setText(QCoreApplication::translate("TARS", "/home Partition:", nullptr));
        partition2HomeLineEdit->setText(QString());
        partition2HomeLineEdit->setPlaceholderText(QCoreApplication::translate("TARS", "/dev/sda2", nullptr));
        partitionToolBox->setItemText(partitionToolBox->indexOf(partition2Page), QCoreApplication::translate("TARS", "/root , /home Partitions", nullptr));
        label_12->setText(QCoreApplication::translate("TARS", "* You cannot change these options later", nullptr));
        partitionNextButton->setText(QCoreApplication::translate("TARS", "Next", nullptr));
        label_13->setText(QCoreApplication::translate("TARS", "Download Resources", nullptr));
        downloadTextBrowser->setHtml(QCoreApplication::translate("TARS", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Roboto Slab'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:10pt;\">Downloading</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:10pt;\"><br /></p></body></html>", nullptr));
        downloadNextButton->setText(QCoreApplication::translate("TARS", "Next", nullptr));
        label_15->setText(QCoreApplication::translate("TARS", "Select Type Of Installation", nullptr));
        label_16->setText(QString());
        label_17->setText(QCoreApplication::translate("TARS", "<html><head/><body><p align=\"center\">Minimalistic Terminal </p><p align=\"center\">Based Installation</p></body></html>", nullptr));
        modeNextButton->setText(QCoreApplication::translate("TARS", "Next", nullptr));
        label_14->setText(QCoreApplication::translate("TARS", "<html><head/><body><p>Installing TARS</p></body></html>", nullptr));
        installTextBrowser->setHtml(QCoreApplication::translate("TARS", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Roboto Slab'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Cantarell'; font-size:10pt;\">Downloading</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Cantarell'; font-size:10pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TARS: public Ui_TARS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARS_H
