#include "antibadwords.h"
#include "ui_antibadwords.h"

AntiBadWords::AntiBadWords(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AntiBadWords)
{
    ui->setupUi(this);

    connect(ui->data, &QTextEdit::textChanged, this, &AntiBadWords::Filter);
}

AntiBadWords::~AntiBadWords()
{
    delete ui;
}

void AntiBadWords::Filter()
{
    QString text = ui->data->toPlainText();
    if(text.contains("fuck")){
        int badWordPos = text.indexOf("fuck");
        ui->data->setPlainText(text.replace(badWordPos, 4, "****"));
        QTextCursor cursor = ui->data->textCursor();
        cursor.movePosition(QTextCursor::Right, QTextCursor::MoveAnchor, badWordPos+4);
        ui->data->setTextCursor(cursor);
    }
}

