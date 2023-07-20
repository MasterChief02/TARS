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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

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
    QFrame *frame_3;
    QFrame *welcomeFrame;
    QLabel *label_3;
    QFrame *line;
    QLabel *label_4;
    QTextBrowser *hostTextBrowser;

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
        TARS->setStyleSheet(QString::fromUtf8("#frame_3 {\n"
"	background-color:	rgb(170, 225, 30);\n"
"}\n"
"\n"
"#frame_2 {\n"
"	background-color: rgb(85, 30, 225);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 700 16pt \"Verdana\";\n"
"}\n"
"\n"
"#welcomeButton,\n"
"#welcomeButton_2,\n"
"#partitionButton {\n"
"	font: 700 10pt \"Verdana\";\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"#welcomeButton {\n"
"	background-color:	rgb(170, 225, 30);\n"
"}\n"
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
        font.setFamilies({QString::fromUtf8("Verdana")});
        font.setPointSize(24);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        welcomeButton = new QPushButton(frame_2);
        welcomeButton->setObjectName(QString::fromUtf8("welcomeButton"));
        welcomeButton->setGeometry(QRect(0, 200, 200, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Verdana")});
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(false);
        welcomeButton->setFont(font1);
        welcomeButton->setStyleSheet(QString::fromUtf8(""));
        welcomeButton->setAutoDefault(true);
        welcomeButton->setFlat(false);
        partitionButton = new QPushButton(frame_2);
        partitionButton->setObjectName(QString::fromUtf8("partitionButton"));
        partitionButton->setGeometry(QRect(0, 250, 200, 50));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setItalic(false);
        partitionButton->setFont(font2);
        partitionButton->setStyleSheet(QString::fromUtf8(""));
        partitionButton->setAutoDefault(true);
        partitionButton->setFlat(false);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(200, 0, 600, 600));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        welcomeFrame = new QFrame(frame_3);
        welcomeFrame->setObjectName(QString::fromUtf8("welcomeFrame"));
        welcomeFrame->setGeometry(QRect(0, 0, 600, 600));
        welcomeFrame->setFrameShape(QFrame::StyledPanel);
        welcomeFrame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(welcomeFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 600, 100));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Verdana")});
        font3.setPointSize(14);
        font3.setBold(true);
        label_3->setFont(font3);
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
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Verdana")});
        font4.setPointSize(10);
        label_4->setFont(font4);
        hostTextBrowser = new QTextBrowser(welcomeFrame);
        hostTextBrowser->setObjectName(QString::fromUtf8("hostTextBrowser"));
        hostTextBrowser->setGeometry(QRect(60, 140, 480, 200));
        hostTextBrowser->setAutoFillBackground(true);
        hostTextBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        hostTextBrowser->setFrameShape(QFrame::NoFrame);

        verticalLayout->addWidget(frame);


        retranslateUi(TARS);

        welcomeButton->setDefault(false);
        partitionButton->setDefault(false);


        QMetaObject::connectSlotsByName(TARS);
    } // setupUi

    void retranslateUi(QDialog *TARS)
    {
        TARS->setWindowTitle(QCoreApplication::translate("TARS", "TARS Installer", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("TARS", "TARS", nullptr));
        welcomeButton->setText(QCoreApplication::translate("TARS", "Welcome", nullptr));
        partitionButton->setText(QCoreApplication::translate("TARS", "Welcome", nullptr));
        label_3->setText(QCoreApplication::translate("TARS", "Welcome to TARS Installer", nullptr));
        label_4->setText(QCoreApplication::translate("TARS", "Checking the Host System", nullptr));
        hostTextBrowser->setHtml(QCoreApplication::translate("TARS", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-i"
                        "ndent:0px;\">TextLabel1</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel2</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-"
                        "top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel3</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin"
                        "-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel4</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">TextLabel5</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TARS: public Ui_TARS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARS_H
