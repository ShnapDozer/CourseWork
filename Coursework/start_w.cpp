#include "start_w.h"
#include "ui_start_w.h"

Start_w::Start_w(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Start_w)
{
    ui->setupUi(this);
}

Start_w::~Start_w()
{
    delete ui;
}

void Start_w::on_pushButton_clicked(){ emit signal_Choose_W(false);}//Open

void Start_w::on_pushButton_2_clicked(){emit signal_Choose_W(true);}//New


