#include "index.h"
#include "ui_index.h"

static const int incr = 51;


Index::Index(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Index)
{
    ui->setupUi(this);
    reset();

}

Index::~Index()
{
    delete ui;
}
void Index::set_col()
{
    QString r = QString::number(_r);
    QString b = QString::number(_b);
    QString g = QString::number(_g);
    ui->label_r-> setText(r);
    ui->label_g->setText(g);
    ui->label_b->setText(b);
    palette.setColor(QPalette::Base,color);
    ui->lineEdit->setPalette(palette);
}
void Index::set_red()
{
    _r +=incr;
    color.setRed(_r);
    set_col();
}
void Index::set_blue()
{
    _b +=incr;
    color.setBlue(_b);
    set_col();
}

void Index::set_green()
{
    _g +=incr;
    color.setGreen(_g);
    set_col();
}


void Index::on_pushButton_clicked()
{
    int tmp = _r+incr;
    if(tmp <= 255)
        set_red();
}
void Index:: reset() {
    _r = 0;
    _g = 0;
    _b = 0;

    QString r = QString::number(_r);
    QString b = QString::number(_b);
    QString g = QString::number(_g);
    ui->label_r-> setText(r);
    ui->label_g->setText(g);
    ui->label_b->setText(b);
    color.setRed(_r);
    color.setBlue(_b);
    color.setGreen(_g);
    palette.setColor(QPalette::Base,color);
    ui->lineEdit->setPalette(palette);
}

void Index::on_pushButton_4_clicked()
{
    reset();
}

void Index::on_pushButton_2_clicked()
{
    int tmp = _b+incr;
    if(tmp <= 255)
        set_blue();
}

void Index::on_pushButton_3_clicked()
{
    int tmp = _g+incr;
    if(tmp <= 255)
        set_green();
}
