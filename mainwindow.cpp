#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFileInfo>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::musicplayer)
{
    ui->setupUi(this);
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
        ui->songlist2->addItem(fileInfo.fileName()); // just filename
        // ui->listWidget->addItem(filePath); // if you prefer full path
    }
}

