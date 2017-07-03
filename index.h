#ifndef INDEX_H
#define INDEX_H

#include <QDialog>
#include <string>

using namespace std;

namespace Ui {
class Index;
}

class Index : public QDialog
{
    Q_OBJECT

public:
    int _r, _g, _b;
    QPalette palette;
    QColor color;

    explicit Index(QWidget *parent = 0);
    ~Index();
    void set_col();
    void set_red();
    void set_green();
    void set_blue();
    void reset();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Index *ui;


};

#endif // INDEX_H
