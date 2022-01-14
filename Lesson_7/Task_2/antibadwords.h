#ifndef ANTIBADWORDS_H
#define ANTIBADWORDS_H

#include <QMainWindow>

#include <string>

QT_BEGIN_NAMESPACE
namespace Ui { class AntiBadWords; }
QT_END_NAMESPACE

class AntiBadWords : public QMainWindow
{
    Q_OBJECT

public:
    AntiBadWords(QWidget *parent = nullptr);
    ~AntiBadWords();

private slots:
    void Filter();
private:
    Ui::AntiBadWords *ui;
};
#endif // ANTIBADWORDS_H
