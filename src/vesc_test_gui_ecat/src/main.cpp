#include "mainwindow.h"
#include <QApplication>
#include "Shared_Memory.h"
#include <ros/ros.h>
#include <iostream>
#define KEY_NUM 1234

using namespace std;

int main(int argc, char *argv[])
{
    ros::init(argc,argv,"vesc_ecat_gui");
    if ( ! ros::master::check() ) {
        cout<<"Please Execute ROSCORE!!!";
		return false;
	}

    QApplication a(argc, argv);
    
    MainWindow w;
    
    w.show();
    return a.exec();
}
