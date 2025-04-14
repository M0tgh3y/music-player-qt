#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QMap>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui {
class musicplayer;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_adds_clicked();
    void onSongSelected(QListWidgetItem *item);
    void on_play_clicked();
    void on_pause_clicked();

private:
    Ui::musicplayer *ui;
    QMediaPlayer *player;
    QAudioOutput *audioOutput; // Add this line

    QMap<QString, QString> songMap; // Maps displayed name to full path
};

#endif // MAINWINDOW_H
