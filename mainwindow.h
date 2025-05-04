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

    void on_last_clicked();

    void on_previous_clicked();

    void on_next_clicked();

    void on_repeat_clicked();

    void playSongAtRow(int row);

private:
    Ui::musicplayer *ui;
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
    QMap<QString, QString> songMap;
    bool repeatEnabled = false;

    int getCurrentIndex() const;
};

#endif // MAINWINDOW_H
