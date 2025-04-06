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
    QFrame *titleframe;
    QLabel *label;
    QLabel *label_2;

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
        QFont font;
        font.setBold(true);
        backgroundimage->setFont(font);
        backgroundimage->setStyleSheet(QString::fromUtf8("background-color: rgb(17, 47, 76);"));
        titleframe = new QFrame(centralwidget);
        titleframe->setObjectName("titleframe");
        titleframe->setGeometry(QRect(0, 0, 880, 40));
        titleframe->setFrameShape(QFrame::Shape::StyledPanel);
        titleframe->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(titleframe);
        label->setObjectName("label");
        label->setGeometry(QRect(5, 0, 40, 40));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/icons/music.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(titleframe);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 0, 151, 40));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_2->setFont(font1);
        musicplayer->setCentralWidget(centralwidget);

        retranslateUi(musicplayer);

        QMetaObject::connectSlotsByName(musicplayer);
    } // setupUi

    void retranslateUi(QMainWindow *musicplayer)
    {
        musicplayer->setWindowTitle(QCoreApplication::translate("musicplayer", "Music Player", nullptr));
        backgroundimage->setText(QString());
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("musicplayer", "Mot Player", nullptr));
    } // retranslateUi

};

namespace Ui {
    class musicplayer: public Ui_musicplayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
