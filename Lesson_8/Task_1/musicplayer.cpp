#include "musicplayer.h"
#include "ui_musicplayer.h"

MusicPlayer::MusicPlayer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MusicPlayer)
{
    ui->setupUi(this);

    m_player = new QMediaPlayer();
    ui->le_path->setReadOnly(true);

    connect (ui->b_find, &QPushButton::clicked, this, &MusicPlayer::onFindPressed);
    connect (ui->b_play, &QPushButton::clicked, this, &MusicPlayer::onPlayPressed);
    connect (ui->s_volume, &QSlider::valueChanged, m_player, &QMediaPlayer::setVolume);
    connect (m_player, &QMediaPlayer::volumeChanged, this, &MusicPlayer::volumeChanged);
    connect (ui->b_close, &QPushButton::clicked, this, &MusicPlayer::close);
}

MusicPlayer::~MusicPlayer()
{
    delete ui;
}

void MusicPlayer::onPlayPressed()
{
    m_player->play();
    ui->b_play->setText("||");
    disconnect (ui->b_play, &QPushButton::clicked, this, &MusicPlayer::onPlayPressed);
    connect (ui->b_play, &QPushButton::clicked, this, &MusicPlayer::onPausePressed);
}

void MusicPlayer::onPausePressed()
{
    m_player->pause();
    ui->b_play->setText(">");
    disconnect (ui->b_play, &QPushButton::clicked, this, &MusicPlayer::onPausePressed);
    connect (ui->b_play, &QPushButton::clicked, this, &MusicPlayer::onPlayPressed);
}

void MusicPlayer::onFindPressed()
{
    QString songPath = QFileDialog::getOpenFileName(this, tr("Play music"),
                                                    QDir::homePath(),
                                                    tr("Music (*.mp3)"));
    m_player->setMedia(QUrl::fromLocalFile(songPath));
    ui->le_path->setText(songPath.remove(0, songPath.lastIndexOf("/") + 1).remove(".mp3"));
}

void MusicPlayer::volumeChanged(int volume)
{
    ui->l_volume->setNum(volume);
}
