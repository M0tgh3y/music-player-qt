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
#include <QtWidgets/QPushButton>
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
    QLabel *name;
    QLabel *songname;
    QLabel *path;
    QLabel *songpath;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

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
        name = new QLabel(frame);
        name->setObjectName("name");
        name->setGeometry(QRect(10, 50, 231, 30));
        name->setFont(font1);
        name->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        songname = new QLabel(frame);
        songname->setObjectName("songname");
        songname->setGeometry(QRect(10, 80, 281, 30));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        songname->setFont(font2);
        songname->setStyleSheet(QString::fromUtf8("color: rgba(0, 0, 0, 150);"));
        path = new QLabel(frame);
        path->setObjectName("path");
        path->setGeometry(QRect(10, 120, 231, 30));
        path->setFont(font1);
        path->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        songpath = new QLabel(frame);
        songpath->setObjectName("songpath");
        songpath->setGeometry(QRect(10, 150, 281, 30));
        songpath->setFont(font2);
        songpath->setStyleSheet(QString::fromUtf8("color: rgba(0, 0, 0, 150);"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 200, 200, 36));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgba(0, 0, 0, 255);\n"
"background-color: rgb(170, 0, 127);"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(50, 250, 200, 36));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 85, 127);"));
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
        name->setText(QCoreApplication::translate("musicplayer", "Name:", nullptr));
        songname->setText(QCoreApplication::translate("musicplayer", "Song name goes here", nullptr));
        path->setText(QCoreApplication::translate("musicplayer", "Path:", nullptr));
        songpath->setText(QCoreApplication::translate("musicplayer", "Song path goes here", nullptr));
        pushButton->setText(QCoreApplication::translate("musicplayer", "Add to Favorite", nullptr));
        pushButton_2->setText(QCoreApplication::translate("musicplayer", "Add to Playlist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class musicplayer: public Ui_musicplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
