#ifndef START_W_H
#define START_W_H

#include <QDialog>

namespace Ui {
class Start_w;
}

class Start_w : public QDialog
{
    Q_OBJECT

public:
    explicit Start_w(QWidget *parent = nullptr);
    ~Start_w();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void signal_Choose_W(bool isNew);

private:
    Ui::Start_w *ui;
};

#endif // START_W_H
