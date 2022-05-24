/********************************************************************************
** Form generated from reading UI file 'TaskManager.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKMANAGER_H
#define UI_TASKMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskManagerClass
{
public:
    QWidget *centralWidget;
    QListWidget *listWidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TaskManagerClass)
    {
        if (TaskManagerClass->objectName().isEmpty())
            TaskManagerClass->setObjectName(QString::fromUtf8("TaskManagerClass"));
        TaskManagerClass->resize(509, 400);
        centralWidget = new QWidget(TaskManagerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 20, 256, 192));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 30, 49, 16));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(370, 30, 113, 21));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(370, 60, 113, 21));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 60, 91, 24));
        TaskManagerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TaskManagerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 509, 22));
        TaskManagerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TaskManagerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TaskManagerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TaskManagerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TaskManagerClass->setStatusBar(statusBar);

        retranslateUi(TaskManagerClass);
        QObject::connect(pushButton, SIGNAL(clicked()), TaskManagerClass, SLOT(showP()));

        QMetaObject::connectSlotsByName(TaskManagerClass);
    } // setupUi

    void retranslateUi(QMainWindow *TaskManagerClass)
    {
        TaskManagerClass->setWindowTitle(QCoreApplication::translate("TaskManagerClass", "TaskManager", nullptr));
        label->setText(QCoreApplication::translate("TaskManagerClass", "Priority:", nullptr));
        pushButton->setText(QCoreApplication::translate("TaskManagerClass", "Show Duration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskManagerClass: public Ui_TaskManagerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKMANAGER_H
