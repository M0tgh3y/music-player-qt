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
    QFrame *titleframe;
    QLabel *icon;
    QLabel *motplayer;
    QPushButton *close;
    QPushButton *mini;

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
        backgroundimage->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 47, 76);"));
        titleframe = new QFrame(centralwidget);
        titleframe->setObjectName("titleframe");
        titleframe->setGeometry(QRect(0, 0, 880, 40));
        titleframe->setFrameShape(QFrame::Shape::StyledPanel);
        titleframe->setFrameShadow(QFrame::Shadow::Raised);
        icon = new QLabel(titleframe);
        icon->setObjectName("icon");
        icon->setGeometry(QRect(5, 0, 40, 40));
        icon->setPixmap(QPixmap(QString::fromUtf8(":/image/icons/music.png")));
        icon->setScaledContents(true);
        motplayer = new QLabel(titleframe);
        motplayer->setObjectName("motplayer");
        motplayer->setGeometry(QRect(50, 0, 151, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        motplayer->setFont(font1);
        motplayer->setStyleSheet(QString::fromUtf8("font: 16pt \"Arial\";\n"
"color: rgb(85, 170, 255);"));
        close = new QPushButton(titleframe);
        close->setObjectName("close");
        close->setGeometry(QRect(830, 5, 40, 30));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/icons/Delete-16.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        close->setIcon(icon2);
        mini = new QPushButton(titleframe);
        mini->setObjectName("mini");
        mini->setGeometry(QRect(785, 5, 40, 30));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/icons/Minus-16.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        mini->setIcon(icon3);
        musicplayer->setCentralWidget(centralwidget);

        retranslateUi(musicplayer);

        QMetaObject::connectSlotsByName(musicplayer);
    } // setupUi

    void retranslateUi(QMainWindow *musicplayer)
    {
        musicplayer->setWindowTitle(QCoreApplication::translate("musicplayer", "Music Player", nullptr));
        backgroundimage->setText(QString());
        icon->setText(QString());
        motplayer->setText(QCoreApplication::translate("musicplayer", "Mot Player", nullptr));
        close->setText(QString());
        mini->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class musicplayer: public Ui_musicplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
