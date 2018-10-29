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
}
