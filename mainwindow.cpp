#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFileInfo>
#include <QMediaPlayer>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::musicplayer)
{
    ui->setupUi(this);

    // Initialize player
    player = new QMediaPlayer(this);

    // Load songs from file
    QFile loadFile("songs.txt");
    if (loadFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&loadFile);
        while (!in.atEnd()) {
            QString filePath = in.readLine().trimmed();
            if (!filePath.isEmpty()) {
                QFileInfo fileInfo(filePath);
                QString fileName = fileInfo.fileName();
                ui->songlist2->addItem(fileName);
                songMap[fileName] = filePath;
            }
        }
        loadFile.close();
    }

    connect(ui->songlist2, &QListWidget::itemClicked, this, &MainWindow::onSongSelected);
    connect(ui->play, &QPushButton::clicked, this, &MainWindow::on_play_clicked);
    connect(ui->pause, &QPushButton::clicked, this, &MainWindow::on_pause_clicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_adds_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(
        this,
        "Open Audio File",
        "",
        "Audio Files (*.mp3 *.wav *.ogg);;All Files (*)");

    if (!filePath.isEmpty()) {
        QFileInfo fileInfo(filePath);
        QString fileName = fileInfo.fileName();
        ui->songlist2->addItem(fileName);
        songMap[fileName] = filePath;

        // Save the full path to a file
        QFile saveFile("songs.txt");
        if (saveFile.open(QIODevice::Append | QIODevice::Text)) {
            QTextStream out(&saveFile);
            out << filePath << "\n";
            saveFile.close();
        }
    }
}

void MainWindow::onSongSelected(QListWidgetItem *item)
{
    ui->curentlyplaying->setText(item->text());
    ui->songname->setText(item->text());
}

void MainWindow::on_play_clicked()
{
    QListWidgetItem *item = ui->songlist2->currentItem();
    if (!item) return;

    QString fileName = item->text();
    QString filePath = songMap.value(fileName);

    if (!filePath.isEmpty()) {
        qDebug() << "Trying to play:" << filePath;

        player->setSource(QUrl::fromLocalFile(filePath));
        player->play();

        qDebug() << "Media status:" << player->mediaStatus();
        qDebug() << "Error:" << player->errorString();

        ui->curentlyplaying->setText("Playing: " + fileName);
    }
}


void MainWindow::on_pause_clicked()
{
    if (player->playbackState() == QMediaPlayer::PlayingState) {
        player->pause();
        ui->curentlyplaying->setText("Paused");
    }
}
