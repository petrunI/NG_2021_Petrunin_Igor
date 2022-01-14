#include "spinboxes.h"
#include "ui_spinboxes.h"

SpinBoxes::SpinBoxes(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SpinBoxes)
{
    ui->setupUi(this);
    ui->spinSum->setReadOnly(true);
    connect(ui->spin1, QOverload<int>::of(&QSpinBox::valueChanged), this, &SpinBoxes::calculateSum);
    connect(ui->spin2, QOverload<int>::of(&QSpinBox::valueChanged), this, &SpinBoxes::calculateSum);
}

SpinBoxes::~SpinBoxes()
{
    delete ui;
}

void SpinBoxes::calculateSum()
{
    ui->spinSum->setValue(ui->spin1->value()+ui->spin2->value());
}

