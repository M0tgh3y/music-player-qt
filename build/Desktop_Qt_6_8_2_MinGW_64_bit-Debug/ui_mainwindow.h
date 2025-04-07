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
#include <QtWidgets/QDial>
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
    QFrame *detail;
    QLabel *icon;
    QLabel *curentlyplaying;
    QLabel *name;
    QLabel *songname;
    QLabel *path;
    QLabel *songpath;
    QPushButton *addtofav;
    QPushButton *addtoplay;
    QDial *volume;
    QLabel *voltext;
    QFrame *songline;
    QFrame *things;
    QPushButton *play;
    QPushButton *pause;
    QPushButton *stop;
    QPushButton *last;
    QPushButton *next;
    QPushButton *next_2;
    QFrame *line;

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
        detail = new QFrame(centralwidget);
        detail->setObjectName("detail");
        detail->setGeometry(QRect(20, 20, 300, 300));
        detail->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 255);\n"
"border-radius: 10px;"));
        detail->setFrameShape(QFrame::Shape::StyledPanel);
        detail->setFrameShadow(QFrame::Shadow::Raised);
        icon = new QLabel(detail);
        icon->setObjectName("icon");
        icon->setGeometry(QRect(10, 10, 30, 30));
        icon->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        icon->setPixmap(QPixmap(QString::fromUtf8(":/image/icons/Audio Wave-32.png")));
        curentlyplaying = new QLabel(detail);
        curentlyplaying->setObjectName("curentlyplaying");
        curentlyplaying->setGeometry(QRect(50, 10, 231, 30));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        curentlyplaying->setFont(font1);
        curentlyplaying->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        name = new QLabel(detail);
        name->setObjectName("name");
        name->setGeometry(QRect(10, 50, 231, 30));
        name->setFont(font1);
        name->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        songname = new QLabel(detail);
        songname->setObjectName("songname");
        songname->setGeometry(QRect(10, 80, 281, 30));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        songname->setFont(font2);
        songname->setStyleSheet(QString::fromUtf8("color: rgba(0, 0, 0, 150);"));
        path = new QLabel(detail);
        path->setObjectName("path");
        path->setGeometry(QRect(10, 120, 231, 30));
        path->setFont(font1);
        path->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        songpath = new QLabel(detail);
        songpath->setObjectName("songpath");
        songpath->setGeometry(QRect(10, 150, 281, 30));
        songpath->setFont(font2);
        songpath->setStyleSheet(QString::fromUtf8("color: rgba(0, 0, 0, 150);"));
        addtofav = new QPushButton(detail);
        addtofav->setObjectName("addtofav");
        addtofav->setGeometry(QRect(50, 200, 200, 36));
        addtofav->setFont(font2);
        addtofav->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        addtofav->setStyleSheet(QString::fromUtf8("color: rgba(0, 0, 0, 255);\n"
"background-color: rgb(170, 0, 127);"));
        addtofav->setIcon(icon1);
        addtoplay = new QPushButton(detail);
        addtoplay->setObjectName("addtoplay");
        addtoplay->setGeometry(QRect(50, 250, 200, 36));
        addtoplay->setFont(font2);
        addtoplay->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        addtoplay->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 85, 127);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/icons/Audio Wave-24.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addtoplay->setIcon(icon2);
        volume = new QDial(centralwidget);
        volume->setObjectName("volume");
        volume->setGeometry(QRect(100, 330, 140, 140));
        volume->setMinimum(0);
        volume->setMaximum(100);
        volume->setSingleStep(1);
        volume->setPageStep(10);
        volume->setValue(50);
        volume->setNotchesVisible(true);
        voltext = new QLabel(centralwidget);
        voltext->setObjectName("voltext");
        voltext->setGeometry(QRect(155, 390, 30, 30));
        voltext->setFont(font2);
        voltext->setAlignment(Qt::AlignmentFlag::AlignCenter);
        songline = new QFrame(centralwidget);
        songline->setObjectName("songline");
        songline->setGeometry(QRect(20, 480, 840, 50));
        songline->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 255);\n"
"border: none;"));
        songline->setFrameShape(QFrame::Shape::StyledPanel);
        songline->setFrameShadow(QFrame::Shadow::Raised);
        things = new QFrame(songline);
        things->setObjectName("things");
        things->setGeometry(QRect(0, 0, 280, 50));
        things->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 0, 127);\n"
"border-radius: 10px;\n"
""));
        things->setFrameShape(QFrame::Shape::StyledPanel);
        things->setFrameShadow(QFrame::Shadow::Raised);
        play = new QPushButton(things);
        play->setObjectName("play");
        play->setGeometry(QRect(25, 10, 30, 30));
        play->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaybackStart));
        play->setIcon(icon3);
        pause = new QPushButton(things);
        pause->setObjectName("pause");
        pause->setGeometry(QRect(65, 10, 30, 30));
        pause->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaybackPause));
        pause->setIcon(icon4);
        stop = new QPushButton(things);
        stop->setObjectName("stop");
        stop->setGeometry(QRect(105, 10, 30, 30));
        stop->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaybackStop));
        stop->setIcon(icon5);
        last = new QPushButton(things);
        last->setObjectName("last");
        last->setGeometry(QRect(145, 10, 30, 30));
        last->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::MediaSeekBackward));
        last->setIcon(icon6);
        next = new QPushButton(things);
        next->setObjectName("next");
        next->setGeometry(QRect(185, 10, 30, 30));
        next->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::MediaSeekForward));
        next->setIcon(icon7);
        next_2 = new QPushButton(things);
        next_2->setObjectName("next_2");
        next_2->setGeometry(QRect(225, 10, 30, 30));
        next_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon8(QIcon::fromTheme(QIcon::ThemeIcon::SyncSynchronizing));
        next_2->setIcon(icon8);
        line = new QFrame(songline);
        line->setObjectName("line");
        line->setGeometry(QRect(300, 0, 540, 50));
        line->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 0);\n"
"border-radius: 10px;"));
        line->setFrameShape(QFrame::Shape::StyledPanel);
        line->setFrameShadow(QFrame::Shadow::Raised);
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
        addtofav->setText(QCoreApplication::translate("musicplayer", "Add to Favorites", nullptr));
        addtoplay->setText(QCoreApplication::translate("musicplayer", "Add to Playlist", nullptr));
        voltext->setText(QCoreApplication::translate("musicplayer", "50", nullptr));
        play->setText(QString());
        pause->setText(QString());
        stop->setText(QString());
        last->setText(QString());
        next->setText(QString());
        next_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class musicplayer: public Ui_musicplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
