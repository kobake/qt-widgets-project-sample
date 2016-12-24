#include "mainwindow.h"
#include "ui_mainwindow.h"

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

static int g_count = 0;

void MainWindow::on_button1_clicked()
{
    g_count++;
    char buf[256];
    sprintf(buf, "count = %d", g_count);
    ui->label1->setText(buf);
}
