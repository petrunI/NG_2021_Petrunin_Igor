#ifndef SPINBOXES_H
#define SPINBOXES_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SpinBoxes; }
QT_END_NAMESPACE

class SpinBoxes : public QMainWindow
{
    Q_OBJECT

public:
    SpinBoxes(QWidget *parent = nullptr);
    ~SpinBoxes();
private slots:
    void calculateSum();
private:
    Ui::SpinBoxes *ui;
};
#endif // SPINBOXES_H
