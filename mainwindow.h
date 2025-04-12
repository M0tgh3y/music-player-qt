#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_adds_clicked();
    void onSongSelected(QListWidgetItem *item);

private:
    Ui::musicplayer *ui;
};
#endif // MAINWINDOW_H
