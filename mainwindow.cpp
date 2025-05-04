#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFileInfo>
#include <QMediaPlayer>
#include <QUrl>
#include <QAudioOutput>
#include <QTimer>

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

    connect(ui->play, &QPushButton::clicked, this, &MainWindow::on_play_clicked);
    connect(ui->pause, &QPushButton::clicked, this, &MainWindow::on_pause_clicked);
    connect(ui->next, &QPushButton::clicked, this, &MainWindow::on_next_clicked);
    connect(ui->previous, &QPushButton::clicked, this, &MainWindow::on_previous_clicked);
    connect(player, &QMediaPlayer::errorOccurred, this, [](QMediaPlayer::Error error, const QString &errorString){
        qDebug() << "Playback error:" << error << "-" << errorString;
    });

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

void MainWindow::playSongAtRow(int row)
{
    if (row < 0 || row >= ui->songlist2->count()) return;

    ui->songlist2->setCurrentRow(row);
    QListWidgetItem* item = ui->songlist2->item(row);
    if (!item) return;

    QString fileName = item->text();
    QString filePath = songMap.value(fileName);

    if (!filePath.isEmpty()) {
        player->stop();
        player->setSource(QUrl::fromLocalFile(filePath));
        player->play();

        ui->curentlyplaying->setText("Playing: " + fileName);
        ui->songname->setText(fileName);
        qDebug() << "Playing song at row:" << row << " - " << fileName;
    }
}

void MainWindow::on_play_clicked()
{
    int row = getCurrentIndex();
    playSongAtRow(row);
}

void MainWindow::on_pause_clicked()
{
    if (player->playbackState() == QMediaPlayer::PlayingState) {
        player->pause();
        ui->curentlyplaying->setText("Paused");
    }
}

void MainWindow::on_next_clicked()
{
    int currentIndex = getCurrentIndex();
    int count = ui->songlist2->count();
    if (count == 0) return;

    int nextIndex = (currentIndex + 1) % count;
    playSongAtRow(nextIndex);
}

void MainWindow::on_previous_clicked()
{
    int currentIndex = getCurrentIndex();
    int count = ui->songlist2->count();
    if (count == 0) return;

    int prevIndex = (currentIndex - 1 + count) % count;
    playSongAtRow(prevIndex);
}

void MainWindow::on_repeat_clicked()
{
    repeatEnabled = !repeatEnabled;

    if (repeatEnabled) {
        ui->repeat->setIcon(QIcon(":/Resources/image/icons/ro.png"));
    } else {
        ui->repeat->setIcon(QIcon(":/Resources/image/icons/Play-16.png"));
    }

    qDebug() << "Repeat is now " << (repeatEnabled ? "enabled" : "disabled");
}
