#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTranslator>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionzhongwen_triggered();

    void on_actionrussian_triggered();

    void on_actionjapanese_triggered();

    void on_actionenglish_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
