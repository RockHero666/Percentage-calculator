#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
   this->setAttribute(Qt::WA_TranslucentBackground, true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_lineEdit_editingFinished()
{
    QString temp = ui->lineEdit->text();
    std::string te = temp.toStdString();
    char dot = '.';
    int dot_count=0;


    auto valid = [](char x){if(x=='1'||x=='2'||x=='3'||x=='4'||x=='5'||x=='6'||x=='7'||x=='8'||x=='9'||x=='0')
                            return true;
                            else
                            return false;};

    for(auto const & x:te)
    {
        if(!(valid(x) || x == dot))
        {
            ui->lineEdit->clear();
            return;
        }
        if(x==dot)
            dot_count++;
        if(dot_count==2)
        {
            ui->lineEdit->clear();
            return;
        }

    }
}

void MainWindow::on_lineEdit_2_editingFinished()
{
    QString temp = ui->lineEdit_2->text();
    std::string te = temp.toStdString();
    char dot = '.';
    int dot_count=0;

    auto valid = [](char x){if(x=='1'||x=='2'||x=='3'||x=='4'||x=='5'||x=='6'||x=='7'||x=='8'||x=='9'||x=='0')
                            return true;
                            else
                            return false;};

    for(auto const & x:te)
    {
        if(!(valid(x) || x == dot))
        {
            ui->lineEdit_2->clear();
            return;
        }
        if(x==dot)
            dot_count++;
        if(dot_count==2)
        {
            ui->lineEdit_2->clear();
            return;
        }



    }
}

void MainWindow::on_lineEdit_3_editingFinished()
{
    QString temp = ui->lineEdit_3->text();
    std::string te = temp.toStdString();
    char dot = '.';
    int dot_count=0;



    auto valid = [](char x){if(x=='1'||x=='2'||x=='3'||x=='4'||x=='5'||x=='6'||x=='7'||x=='8'||x=='9'||x=='0')
                            return true;
                            else
                            return false;};

    for(auto const & x:te)
    {
        if(!(valid(x) || x == dot))
        {
            ui->lineEdit_3->clear();
            return;
        }
        if(x==dot)
            dot_count++;
        if(dot_count==2)
        {
            ui->lineEdit_3->clear();
            return;
        }

    }
}

void MainWindow::on_pushButton_clicked()
{


    QString sum = ui->lineEdit->text();
    QString perc = ui->lineEdit_2->text();
    QString part = ui->lineEdit_3->text();
    int QS_count=0;

    if(sum.size()==0)
    QS_count++;
    if(perc.size()==0)
    QS_count++;
    if(part.size()==0)
    QS_count++;

    if(QS_count!=1)
        return;




    if(sum.size()==0)
    {
        QString temp = QString::number(Perc_and_Part(perc.toDouble(),part.toDouble()));
        ui->lineEdit->clear();

        ui->lineEdit->setText(temp);

    }

    if(perc.size()==0)
    {
        QString temp = QString::number(Sum_and_Part(sum.toDouble(),part.toDouble()));
        ui->lineEdit_2->clear();

        ui->lineEdit_2->setText(temp);

    }

    if(part.size()==0)
    {
        QString temp = QString::number(Sum_and_Perc(sum.toDouble(),perc.toDouble()));
        ui->lineEdit_3->clear();

        ui->lineEdit_3->setText(temp);

    }


    return;





}

void MainWindow::on_pushButton_2_clicked()
{
     ui->lineEdit->clear();
     ui->lineEdit_2->clear();
     ui->lineEdit_3->clear();
}

void MainWindow::on_pushButton_3_released()
{
    qApp->exit();
}
