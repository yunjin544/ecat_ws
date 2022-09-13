/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QPushButton *Stop_btn;
    QPushButton *Send_btn;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_2;
    QLabel *label;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QFrame *Motor_list;
    QGridLayout *gridLayout_6;
    QPushButton *Motor_List_Update;
    QLabel *selection_label;
    QComboBox *motor_select;
    QRadioButton *Duty;
    QRadioButton *Brake;
    QRadioButton *Current;
    QLabel *Mode_set;
    QWidget *tab_2;
    QSlider *horizontalSlider;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(799, 268);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        tab_1->setContextMenuPolicy(Qt::PreventContextMenu);
        gridLayout_3 = new QGridLayout(tab_1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame = new QFrame(tab_1);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Stop_btn = new QPushButton(frame);
        Stop_btn->setObjectName(QString::fromUtf8("Stop_btn"));

        gridLayout_2->addWidget(Stop_btn, 2, 2, 1, 1);

        Send_btn = new QPushButton(frame);
        Send_btn->setObjectName(QString::fromUtf8("Send_btn"));

        gridLayout_2->addWidget(Send_btn, 2, 1, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(frame);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimum(-100.000000000000000);
        doubleSpinBox->setMaximum(100.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox, 2, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 3);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Vera Serif"));
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 3);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(tab_1);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        Motor_list = new QFrame(frame_2);
        Motor_list->setObjectName(QString::fromUtf8("Motor_list"));
        Motor_list->setFrameShape(QFrame::StyledPanel);
        Motor_list->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(Motor_list);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        Motor_List_Update = new QPushButton(Motor_list);
        Motor_List_Update->setObjectName(QString::fromUtf8("Motor_List_Update"));

        gridLayout_6->addWidget(Motor_List_Update, 3, 0, 1, 1);

        selection_label = new QLabel(Motor_list);
        selection_label->setObjectName(QString::fromUtf8("selection_label"));

        gridLayout_6->addWidget(selection_label, 0, 0, 1, 1);

        motor_select = new QComboBox(Motor_list);
        motor_select->setObjectName(QString::fromUtf8("motor_select"));

        gridLayout_6->addWidget(motor_select, 1, 0, 1, 1);


        gridLayout_4->addWidget(Motor_list, 0, 2, 6, 1);

        Duty = new QRadioButton(frame_2);
        Duty->setObjectName(QString::fromUtf8("Duty"));

        gridLayout_4->addWidget(Duty, 3, 0, 1, 1);

        Brake = new QRadioButton(frame_2);
        Brake->setObjectName(QString::fromUtf8("Brake"));

        gridLayout_4->addWidget(Brake, 5, 0, 1, 1);

        Current = new QRadioButton(frame_2);
        Current->setObjectName(QString::fromUtf8("Current"));

        gridLayout_4->addWidget(Current, 4, 0, 1, 1);

        Mode_set = new QLabel(frame_2);
        Mode_set->setObjectName(QString::fromUtf8("Mode_set"));

        gridLayout_4->addWidget(Mode_set, 1, 0, 1, 1);


        gridLayout_3->addWidget(frame_2, 0, 1, 1, 1);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalSlider = new QSlider(tab_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(10, 20, 160, 16));
        horizontalSlider->setOrientation(Qt::Horizontal);
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 799, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Stop_btn->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        Send_btn->setText(QApplication::translate("MainWindow", "Send", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:700;\">Value Set</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; color:#2e3436;\">VESC</span><span style=\" font-size:20pt; color:#2e3436;\"> Ether</span><span style=\" font-size:20pt; color:#2e3436;\">CAT</span><span style=\" font-size:20pt; color:#2e3436;\"> Test</span></p></body></html>", nullptr));
        Motor_List_Update->setText(QApplication::translate("MainWindow", "Motor List Update", nullptr));
        selection_label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Select Motor</span></p></body></html>", nullptr));
        Duty->setText(QApplication::translate("MainWindow", "Duty", nullptr));
        Brake->setText(QApplication::translate("MainWindow", "Current Brake", nullptr));
        Current->setText(QApplication::translate("MainWindow", "Current", nullptr));
        Mode_set->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">Control Mode Set</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MainWindow", "Test Control", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
