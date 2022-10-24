#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <bakestore.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();
    void updateLabels();


private:
    Ui::MainWindow *ui;
    BakeStore* bakeStore;
    QTimer* timer;

    void TimerController();

};
#endif // MAINWINDOW_H
