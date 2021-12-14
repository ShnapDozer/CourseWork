#include "open.h"
#include "ui_open.h"

Open::Open(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Open)
{
    ui->setupUi(this);
}

Open::~Open()
{
    delete ui;
}

void Open::on_pushButton_clicked()
{
    File_Path = QFileDialog::getOpenFileName(this, "Open the database", "C://", "All files (*.*);; Acces db (*.accdb);; Database (*.db);");

    ui->lineEdit->setText(File_Path);
}


void Open::on_buttonBox_accepted()
{
    if(File_Path != "") emit signal_Ok(File_Path);
}

