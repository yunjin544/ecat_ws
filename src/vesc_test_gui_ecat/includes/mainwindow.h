#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QTimer>
#include "thread.h"

extern char share_init;



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void ExecuteProgram();
    ~MainWindow();
    void Motor_list_up();
    Ui::MainWindow *ui;

private slots:
    void on_Send_btn_clicked();

    void on_Stop_btn_clicked();

    void on_Motor_List_Update_clicked();

    void loopfunction();

    void on_Duty_clicked(bool checked);

    void on_Current_clicked(bool checked);

    void on_Brake_clicked(bool checked);



private:
    
    Thread *thread;
    QTimer *timer;
    
};
#endif // MAINWINDOW_H
