#include "mainwindow.h"
#include "Mydatabase.h"
#include "Account.h"

#include "Schedule.h"
#include "ui_mainwindow.h"

#include <QVBoxLayout>
#include <QInputDialog>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    MyDatabase *db = MyDatabase::getInstance();
    db->createConn();
    db->createScheduleTable();
    db->destroyConn();

}

MainWindow::~MainWindow()
{
    delete ui;
}




