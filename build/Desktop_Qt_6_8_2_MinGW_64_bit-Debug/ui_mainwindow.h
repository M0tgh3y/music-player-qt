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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_musicplayer
{
public:
    QWidget *centralwidget;
    QLabel *backgroundimage;

    void setupUi(QMainWindow *musicplayer)
    {
        if (musicplayer->objectName().isEmpty())
            musicplayer->setObjectName("musicplayer");
        musicplayer->resize(880, 550);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/icons/music2.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        musicplayer->setWindowIcon(icon);
        centralwidget = new QWidget(musicplayer);
        centralwidget->setObjectName("centralwidget");
        backgroundimage = new QLabel(centralwidget);
        backgroundimage->setObjectName("backgroundimage");
        backgroundimage->setGeometry(QRect(0, 0, 880, 550));
        backgroundimage->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 47, 76);"));
        musicplayer->setCentralWidget(centralwidget);

        retranslateUi(musicplayer);

        QMetaObject::connectSlotsByName(musicplayer);
    } // setupUi

    void retranslateUi(QMainWindow *musicplayer)
    {
        musicplayer->setWindowTitle(QCoreApplication::translate("musicplayer", "Music Player", nullptr));
        backgroundimage->setText(QCoreApplication::translate("musicplayer", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class musicplayer: public Ui_musicplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
