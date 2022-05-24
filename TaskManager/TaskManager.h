#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TaskManager.h"
#include "Repo.h"

class TaskManager : public QMainWindow
{
    Q_OBJECT

public:
    TaskManager(Repo &r,QWidget *parent = Q_NULLPTR);
    void populateList();

private:
    Repo& repo;
    Ui::TaskManagerClass ui;

public slots:
    void showP();
};
