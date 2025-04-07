/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_musicplayer
{
public:
    QWidget *centralwidget;
    QLabel *backgroundimage;
    QFrame *frame;
    QLabel *icon;
    QLabel *curentlyplaying;
    QLabel *curentlyplaying_2;
    QLabel *curentlyplaying_3;
    QLabel *curentlyplaying_4;
    QLabel *curentlyplaying_5;

    void setupUi(QMainWindow *musicplayer)
    {
        if (musicplayer->objectName().isEmpty())
            musicplayer->setObjectName("musicplayer");
        musicplayer->resize(880, 550);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/icons/music2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        musicplayer->setWindowIcon(icon1);
        centralwidget = new QWidget(musicplayer);
        centralwidget->setObjectName("centralwidget");
        backgroundimage = new QLabel(centralwidget);
        backgroundimage->setObjectName("backgroundimage");
        backgroundimage->setGeometry(QRect(0, 0, 880, 550));
        QFont font;
        font.setBold(true);
        backgroundimage->setFont(font);
        backgroundimage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 255);\n"
""));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 20, 300, 300));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 255);\n"
"border-radius: 10px;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        icon = new QLabel(frame);
        icon->setObjectName("icon");
        icon->setGeometry(QRect(10, 10, 30, 30));
        icon->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        icon->setPixmap(QPixmap(QString::fromUtf8(":/image/icons/Audio Wave-32.png")));
        curentlyplaying = new QLabel(frame);
        curentlyplaying->setObjectName("curentlyplaying");
        curentlyplaying->setGeometry(QRect(50, 10, 231, 30));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        curentlyplaying->setFont(font1);
        curentlyplaying->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        curentlyplaying_2 = new QLabel(frame);
        curentlyplaying_2->setObjectName("curentlyplaying_2");
        curentlyplaying_2->setGeometry(QRect(10, 50, 231, 30));
        curentlyplaying_2->setFont(font1);
        curentlyplaying_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        curentlyplaying_3 = new QLabel(frame);
        curentlyplaying_3->setObjectName("curentlyplaying_3");
        curentlyplaying_3->setGeometry(QRect(10, 80, 281, 30));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        curentlyplaying_3->setFont(font2);
        curentlyplaying_3->setStyleSheet(QString::fromUtf8("color: rgba(0, 0, 0, 150);"));
        curentlyplaying_4 = new QLabel(frame);
        curentlyplaying_4->setObjectName("curentlyplaying_4");
        curentlyplaying_4->setGeometry(QRect(10, 120, 231, 30));
        curentlyplaying_4->setFont(font1);
        curentlyplaying_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        curentlyplaying_5 = new QLabel(frame);
        curentlyplaying_5->setObjectName("curentlyplaying_5");
        curentlyplaying_5->setGeometry(QRect(10, 150, 281, 30));
        curentlyplaying_5->setFont(font2);
        curentlyplaying_5->setStyleSheet(QString::fromUtf8("color: rgba(0, 0, 0, 150);"));
        musicplayer->setCentralWidget(centralwidget);

        retranslateUi(musicplayer);

        QMetaObject::connectSlotsByName(musicplayer);
    } // setupUi

    void retranslateUi(QMainWindow *musicplayer)
    {
        musicplayer->setWindowTitle(QCoreApplication::translate("musicplayer", "Music Player", nullptr));
        backgroundimage->setText(QString());
        icon->setText(QString());
        curentlyplaying->setText(QCoreApplication::translate("musicplayer", "Currently Playing", nullptr));
        curentlyplaying_2->setText(QCoreApplication::translate("musicplayer", "Name", nullptr));
        curentlyplaying_3->setText(QCoreApplication::translate("musicplayer", "Song name goes here", nullptr));
        curentlyplaying_4->setText(QCoreApplication::translate("musicplayer", "Path", nullptr));
        curentlyplaying_5->setText(QCoreApplication::translate("musicplayer", "Song path goes here", nullptr));
    } // retranslateUi

};

namespace Ui {
    class musicplayer: public Ui_musicplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
