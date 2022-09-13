#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <stdio.h>
#include <stdlib.h>
#include "Shared_Memory.h"
#include <QDebug>

char share_init;
std::atomic<std::array<int,10>> myArray;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    share_init = shmem_init();
    ui->setupUi(this);
    thread = new Thread(this); // ROS Thread
    thread->start();
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(loopfunction()));
    timer ->start(10);

    this->setWindowTitle("VESC TEST GUI");


    Motor_list_up();

}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loopfunction()
{
    if(*shmem[ECAT_INIT] == 1)
    {
        ui->statusbar->showMessage("Ecat init Done!!",100);

    }
    if(*shmem[ECAT_INIT] == 0)
    {
        ui->statusbar->showMessage("Wait for Ecat init",100);
    }
    if(*shmem[ECAT_INIT] == -1)
    {
        ui->statusbar->showMessage("Failed to init Ecat",100);
    }
//    ui->statusbar->showMessage("Ecat init Done!!",100);
}


void MainWindow::on_Send_btn_clicked()
{
    s_wait(semid[VALUE]);
    *shmem[VALUE] =int(ui->doubleSpinBox->value());
    s_quit(semid[VALUE]);
}


void MainWindow::on_Stop_btn_clicked()
{
    s_wait(semid[VALUE]);
    ui->doubleSpinBox->setValue(0);
    *shmem[VALUE] =int(ui->doubleSpinBox->value());
    s_quit(semid[VALUE]);

}

void MainWindow::on_Motor_List_Update_clicked()
{
    Motor_list_up();
}

void MainWindow::Motor_list_up()
{
    ui->motor_select->clear();
    int n = *shmem[SLAVE_N];
    int i = 0;
    while(i < n)
    {
        char str[100];
        sprintf(str,"Motor %d",i+1);
        ui->motor_select->addItem(str);

        i=i+1;
    }
}

void MainWindow::on_Duty_clicked(bool checked)
{   s_wait(semid[MODE]);
    *shmem[MODE] = 1;
    s_wait(semid[MODE]);
}


void MainWindow::on_Current_clicked(bool checked)
{
    s_wait(semid[MODE]);
    *shmem[MODE] = 2;
    s_wait(semid[MODE]);
}

void MainWindow::on_Brake_clicked(bool checked)
{
    s_wait(semid[MODE]);
    *shmem[MODE] = 3;
    s_wait(semid[MODE]);
}