#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFileInfo>
#include <QMediaPlayer>
#include <QUrl>
#include <QAudioOutput>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::musicplayer)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);

    audioOutput = new QAudioOutput(this);
    audioOutput->setVolume(1.0);
    player->setAudioOutput(audioOutput);

    connect(player, &QMediaPlayer::mediaStatusChanged, this, [](QMediaPlayer::MediaStatus status){
        qDebug() << "Media status changed:" << status;
    });

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
    connect(ui->next, &QPushButton::clicked, this, &MainWindow::on_next_clicked);
    connect(ui->previous, &QPushButton::clicked, this, &MainWindow::on_previous_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::getCurrentIndex() const {
    return ui->songlist2->currentRow();
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
    if (!item) return;

    QString fileName = item->text();
    QString filePath = songMap.value(fileName);

    if (!filePath.isEmpty()) {
        player->stop();
        player->setSource(QUrl::fromLocalFile(filePath));

        ui->curentlyplaying->setText(fileName);
        ui->songname->setText(fileName);
    }
}


void MainWindow::on_play_clicked()
{
    QListWidgetItem *item = ui->songlist2->currentItem();
    if (!item) return;

    QString fileName = item->text();
    QString filePath = songMap.value(fileName);

    if (!filePath.isEmpty()) {
        player->stop();
        player->setSource(QUrl::fromLocalFile(filePath));
        player->play();

        qDebug() << "Trying to play:" << filePath;
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

void MainWindow::on_previous_clicked()
{
    int currentIndex = getCurrentIndex();
    int count = ui->songlist2->count();
    qDebug() << "Current index:" << currentIndex << ", Count:" << count;

    if (count == 0) return;

    int prevIndex = (currentIndex - 1 + count) % count;
    qDebug() << "Previous index:" << prevIndex;

    player->stop();

    ui->songlist2->setCurrentRow(prevIndex);
    onSongSelected(ui->songlist2->currentItem());
    on_play_clicked();
}

void MainWindow::on_next_clicked()
{
    int currentIndex = getCurrentIndex();
    int count = ui->songlist2->count();
    if (count == 0) return;

    int nextIndex = (currentIndex + 1) % count;
    ui->songlist2->setCurrentRow(nextIndex);
    onSongSelected(ui->songlist2->currentItem());
    on_play_clicked();
}

