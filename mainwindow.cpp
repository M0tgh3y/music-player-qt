#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFileInfo>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::musicplayer)
{
    ui->setupUi(this);

    QFile loadFile("songs.txt");
    if (loadFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&loadFile);
        while (!in.atEnd()) {
            QString filePath = in.readLine().trimmed();
            if (!filePath.isEmpty()) {
                QFileInfo fileInfo(filePath);
                ui->songlist2->addItem(fileInfo.fileName());
            }
        }
        loadFile.close();
    }

    connect(ui->songlist2, &QListWidget::itemClicked, this, &MainWindow::onSongSelected);
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
        ui->songlist2->addItem(fileInfo.fileName());

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




