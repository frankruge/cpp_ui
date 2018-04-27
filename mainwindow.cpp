#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringList>
//using namespace std;
//int count = 0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

}

int ct = 0; //global counter is accessed by button1 and button2
int countTrue = 0;
int countFalse = 0;
QStringList questions = {"Men deserve more rights than women because they are stronger and more intelligent",
                         "Women have to hide their contures in robes in order to not ignite male desire",
                         "Cheating women deserve punishment",
                         "Homosexuality is a sin and deserves punishment",
                         "Drinking alcohol is a sin and deserves punishment",
                         "God is great",
                         "After death, the soul still exists",
                         "evolution is a lie"} ;

void MainWindow::on_button1_clicked()
{
    int count = ct;
    int cntT = countTrue;
    QString sumUp;
    QString strCount;
    if(sizeof(questions) > ct){
        // display text message in first label
        ui->lblHello->setText(questions[count]);
        count++;
        ct=count;
        cntT++;
        countTrue=cntT;
        }
    else{
        sumUp.sprintf("Thank you. you pressed %d TRUE. That is great for you!", cntT);
        ui->lblHello->setText(sumUp);
    }
        // display button clicked count in second label

    strCount.sprintf("statement %d", count);
    ui->lblCount->setText(strCount);
}

void MainWindow::on_button2_clicked()
{
    int count = ct;
    int cntF = countFalse;
    QString sumUp;
    QString strCount;
    if(sizeof(questions) > ct){
        // display text message in first label
        ui->lblHello->setText(questions[count]);
        count++;
        ct=count;
        cntF++;
        countFalse=cntF;
        }
    else{
        sumUp.sprintf("Thank you. you pressed %d FALSE. That is great for you!", cntF);
        ui->lblHello->setText(sumUp);
        }
    // display button clicked count in second label

    strCount.sprintf("statement %d", count);
    ui->lblCount->setText(strCount);
}

