#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStringList>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QStringList getPlaceList();
    QStringList getColoursList();
    void showPlaceList();
    void showColourList();
    int randomIndex();
    QString sign = "a1";
    QString colour = "black";

private slots:

    void on_pushButtonWhiteOption_clicked();

    void on_pushButtonBlackOption_clicked();

    void on_pushButtonShowBoard_clicked();

private:
    Ui::MainWindow *ui;

    QStringList placesList = {"a1","a2","a3","a4","a5","a6","a7","a8",
                             "b1","b2","b3","b4","b5","b6","b7","b8",
                             "c1","c2","c3","c4","c5","c6","c7","c8",
                             "d1","d2","d3","d4","d5","d6","d7","d8",
                             "e1","e2","e3","e4","e5","e6","e7","e8",
                             "f1","f2","f3","f4","f5","f6","f7","f8",
                             "g1","g2","g3","g4","g5","g6","g7","g8",
                             "h1","h2","h3","h4","h5","h6","h7","h8"};
    QStringList colorsList = {"black","white","black","white","black","white","black","white",
                             "white","black","white","black","white","black","white","black",
                             "black","white","black","white","black","white","black","white",
                             "white","black","white","black","white","black","white","black",
                             "black","white","black","white","black","white","black","white",
                             "white","black","white","black","white","black","white","black",
                             "black","white","black","white","black","white","black","white",
                             "white","black","white","black","white","black","white","black",
                             };

    void on_pushButtonDoSomething_clicked();
};
#endif // MAINWINDOW_H