#include "TaskManager.h"
#include <qlistwidget.h>
#include <qstring.h>
#include <qmessagebox.h>

TaskManager::TaskManager(Repo&r,QWidget *parent)
    : QMainWindow(parent), repo{r}
{
    ui.setupUi(this);
    r.loadData();
    this->populateList();
}

void TaskManager::populateList() {
    this->ui.listWidget->clear();

    this->repo.sortVector();

    for (auto& c : this->repo.tasks) {
        //this->ui.listWidget->addItem(QString::fromStdString(c.toString()));       
        QListWidgetItem* q = new QListWidgetItem(QString::fromStdString(c.toString()), this->ui.listWidget); 
        QFont f;       
        f.setBold(true);      
        if (c.getPriority() == 1) {
            q->setFont(f);
        }

    }
}

void TaskManager::showP() {
    int p = this->ui.lineEdit->text().toInt();
    int total = 0;
    int ok = 0;
    for (auto& t : this->repo.tasks) {
        if (t.getPriority() == p) {
            total += t.getDuration();
            ok = 1;
        }
    }
    if (ok == 0) {
        QMessageBox msgBox;
        msgBox.setText("There are not such class");
        msgBox.exec();
    }
    else {
        this->ui.lineEdit_2->setText(QString::fromStdString(std::to_string(total)));
    }

}
