#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTranslator>

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

void MainWindow::on_actionzhongwen_triggered()
{
    QTranslator *translator=new QTranslator;
    translator->load("../langdemo/chinese.qm");
    qApp->installTranslator(translator);
    ui->retranslateUi(this);
}

void MainWindow::on_actionrussian_triggered()
{
    QTranslator *translator=new QTranslator;
    translator->load("../langdemo/russian.qm");
    qApp->installTranslator(translator);
    ui->retranslateUi(this);
}

void MainWindow::on_actionjapanese_triggered()
{
    QTranslator *translator=new QTranslator;
    translator->load("../langdemo/japanese.qm");
    qApp->installTranslator(translator);
    ui->retranslateUi(this);
}

void MainWindow::on_actionenglish_triggered()
{
    QTranslator *translator=new QTranslator;
    translator->load("../langdemo/english.qm");
    qApp->installTranslator(translator);
    ui->retranslateUi(this);
}/*
void MainWindow::on_actionhanyu_triggered()
{
    QTranslator *translator=new QTranslator;
    translator->load("../langdemo/hanyu.qm");
    qApp->installTranslator(translator);
    ui->retranslateUi(this);
}*/

void MainWindow::on_actionitalian_triggered()
{
    QTranslator *translator=new QTranslator;
    translator->load("../langdemo/italian.qm");
    qApp->installTranslator(translator);
    ui->retranslateUi(this);
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"提示","这是一个消息框");
}
