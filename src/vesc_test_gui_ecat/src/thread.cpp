#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "thread.h"
#include "ros/ros.h"
#include <std_msgs/Float32MultiArray.h>
#include <std_msgs/String.h>

Thread::Thread(QObject *parent) :
    QThread(parent)
{

}

void Thread::run()
{
    ros::NodeHandle n ;
    ros::Rate loop_rate(100);
    ros::Publisher ros_vesc_ecat;
    ros_vesc_ecat = n.advertise<std_msgs::Float32MultiArray>("VESCat", 40);
    forever
    {   
       // MainWindow::ui->doubleSpinBox->setValue(10);

        ros::spinOnce();
        loop_rate.sleep();
        
    }
}
