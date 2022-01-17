#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <QMainWindow>
#include <QFileDialog>
#include <QDir>
#include <QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui { class MusicPlayer; }
QT_END_NAMESPACE

class MusicPlayer : public QMainWindow
{
    Q_OBJECT

public:
    MusicPlayer(QWidget *parent = nullptr);
    ~MusicPlayer();
private slots:
    void onPlayPressed();
    void onPausePressed();
    void onFindPressed();

    void volumeChanged(int volume);

private:
    Ui::MusicPlayer *ui;
    QMediaPlayer *m_player;
};
#endif // MUSICPLAYER_H
