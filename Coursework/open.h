#ifndef OPEN_H
#define OPEN_H

#include <QDialog>

#include <QFileDialog>

namespace Ui {
class Open;
}

class Open : public QDialog
{
    Q_OBJECT

public:
    explicit Open(QWidget *parent = nullptr);
    ~Open();

private slots:
    void on_pushButton_clicked();

    void on_buttonBox_accepted();

signals:
    void signal_Ok(QString);

private:

    Ui::Open *ui;
    QString File_Path;


};

#endif // OPEN_H
