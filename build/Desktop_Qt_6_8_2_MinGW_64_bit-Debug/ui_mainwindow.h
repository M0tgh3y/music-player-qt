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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
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
    QPushButton *repeat;
    QSlider *slider;
    QLabel *time;
    QStackedWidget *songs;
    QWidget *page;
    QLabel *songlist;
    QPushButton *adds;
    QPushButton *delet;
    QPushButton *findmu;
    QListWidget *songlist2;
    QWidget *list;
    QFrame *frame;
    QPushButton *songlistbtn;
    QPushButton *playlist;
    QPushButton *favo;

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
        icon->setAlignment(Qt::AlignmentFlag::AlignCenter);
        curentlyplaying = new QLabel(detail);
        curentlyplaying->setObjectName("curentlyplaying");
        curentlyplaying->setGeometry(QRect(50, 10, 230, 30));
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
        voltext->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
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
        things->setGeometry(QRect(0, 0, 300, 50));
        things->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"border-radius: 10px;\n"
""));
        things->setFrameShape(QFrame::Shape::StyledPanel);
        things->setFrameShadow(QFrame::Shadow::Raised);
        play = new QPushButton(things);
        play->setObjectName("play");
        play->setGeometry(QRect(20, 10, 30, 30));
        play->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaybackStart));
        play->setIcon(icon3);
        play->setIconSize(QSize(30, 30));
        pause = new QPushButton(things);
        pause->setObjectName("pause");
        pause->setGeometry(QRect(66, 10, 30, 30));
        pause->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaybackPause));
        pause->setIcon(icon4);
        pause->setIconSize(QSize(30, 30));
        stop = new QPushButton(things);
        stop->setObjectName("stop");
        stop->setGeometry(QRect(112, 10, 30, 30));
        stop->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::MediaPlaybackStop));
        stop->setIcon(icon5);
        stop->setIconSize(QSize(30, 30));
        last = new QPushButton(things);
        last->setObjectName("last");
        last->setGeometry(QRect(158, 10, 30, 30));
        last->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::MediaSeekBackward));
        last->setIcon(icon6);
        last->setIconSize(QSize(30, 30));
        next = new QPushButton(things);
        next->setObjectName("next");
        next->setGeometry(QRect(204, 10, 30, 30));
        next->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::MediaSeekForward));
        next->setIcon(icon7);
        next->setIconSize(QSize(30, 30));
        repeat = new QPushButton(things);
        repeat->setObjectName("repeat");
        repeat->setGeometry(QRect(250, 10, 30, 30));
        repeat->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon8(QIcon::fromTheme(QIcon::ThemeIcon::SyncSynchronizing));
        repeat->setIcon(icon8);
        repeat->setIconSize(QSize(30, 30));
        slider = new QSlider(songline);
        slider->setObjectName("slider");
        slider->setGeometry(QRect(325, 15, 300, 20));
        slider->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        slider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal{\n"
"height: 20px;\n"
"\n"
"background: rgb(170, 0, 255);\n"
"\n"
"border-radius: 10px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal{\n"
"background: rgb(85, 0, 127);\n"
"width: 20px;\n"
"border-radius: 10px;\n"
"\n"
"}"));
        slider->setOrientation(Qt::Orientation::Horizontal);
        time = new QLabel(songline);
        time->setObjectName("time");
        time->setGeometry(QRect(639, 15, 200, 20));
        time->setFont(font2);
        time->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        time->setAlignment(Qt::AlignmentFlag::AlignCenter);
        time->setWordWrap(false);
        songs = new QStackedWidget(centralwidget);
        songs->setObjectName("songs");
        songs->setGeometry(QRect(340, 20, 520, 350));
        songs->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 85, 127, 50);\n"
"border-radius: 10px;"));
        page = new QWidget();
        page->setObjectName("page");
        songlist = new QLabel(page);
        songlist->setObjectName("songlist");
        songlist->setGeometry(QRect(10, 10, 130, 40));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        songlist->setFont(font3);
        songlist->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgba(255, 255, 255, 0);"));
        songlist->setAlignment(Qt::AlignmentFlag::AlignCenter);
        adds = new QPushButton(page);
        adds->setObjectName("adds");
        adds->setGeometry(QRect(470, 10, 40, 40));
        adds->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        adds->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 127);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon9(QIcon::fromTheme(QIcon::ThemeIcon::FolderNew));
        adds->setIcon(icon9);
        adds->setIconSize(QSize(30, 30));
        delet = new QPushButton(page);
        delet->setObjectName("delet");
        delet->setGeometry(QRect(420, 10, 40, 40));
        delet->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        delet->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 127);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon10(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        delet->setIcon(icon10);
        delet->setIconSize(QSize(30, 30));
        findmu = new QPushButton(page);
        findmu->setObjectName("findmu");
        findmu->setGeometry(QRect(370, 10, 40, 40));
        findmu->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        findmu->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 127);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon11(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        findmu->setIcon(icon11);
        findmu->setIconSize(QSize(30, 30));
        songlist2 = new QListWidget(page);
        new QListWidgetItem(songlist2);
        new QListWidgetItem(songlist2);
        new QListWidgetItem(songlist2);
        songlist2->setObjectName("songlist2");
        songlist2->setGeometry(QRect(10, 60, 500, 280));
        QFont font4;
        font4.setPointSize(14);
        songlist2->setFont(font4);
        songlist2->setStyleSheet(QString::fromUtf8("color: rgba(0, 0, 0, 150);\n"
"background-color: rgba(255, 85, 127, 100);\n"
"selection-background-color: rgb(255, 140, 64);\n"
"selection-color: rgb(255, 255, 255);\n"
"padding: 10px;"));
        songs->addWidget(page);
        list = new QWidget();
        list->setObjectName("list");
        songs->addWidget(list);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(340, 380, 520, 80));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 255);\n"
"border: none;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        songlistbtn = new QPushButton(frame);
        songlistbtn->setObjectName("songlistbtn");
        songlistbtn->setGeometry(QRect(0, 20, 160, 40));
        songlistbtn->setFont(font2);
        songlistbtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        songlistbtn->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: #D6745D;\n"
"border-radius: 10px;"));
        QIcon icon12(QIcon::fromTheme(QIcon::ThemeIcon::DocumentPageSetup));
        songlistbtn->setIcon(icon12);
        songlistbtn->setIconSize(QSize(20, 20));
        playlist = new QPushButton(frame);
        playlist->setObjectName("playlist");
        playlist->setGeometry(QRect(180, 20, 160, 40));
        playlist->setFont(font2);
        playlist->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        playlist->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: #014C8F;\n"
"border-radius: 10px;"));
        favo = new QPushButton(frame);
        favo->setObjectName("favo");
        favo->setGeometry(QRect(360, 20, 160, 40));
        favo->setFont(font2);
        favo->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        favo->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 255, 127);\n"
"border-radius: 10px;"));
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
        repeat->setText(QString());
        time->setText(QCoreApplication::translate("musicplayer", "00:00:00 / 00:00:00", nullptr));
        songlist->setText(QCoreApplication::translate("musicplayer", "Song List", nullptr));
        adds->setText(QString());
        delet->setText(QString());
        findmu->setText(QString());

        const bool __sortingEnabled = songlist2->isSortingEnabled();
        songlist2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = songlist2->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("musicplayer", "song 1", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = songlist2->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("musicplayer", "song 2", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = songlist2->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("musicplayer", "song 3", nullptr));
        songlist2->setSortingEnabled(__sortingEnabled);

        songlistbtn->setText(QCoreApplication::translate("musicplayer", " Song List", nullptr));
        playlist->setText(QCoreApplication::translate("musicplayer", "Playlists", nullptr));
        favo->setText(QCoreApplication::translate("musicplayer", "Favorites", nullptr));
    } // retranslateUi

};

namespace Ui {
    class musicplayer: public Ui_musicplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
