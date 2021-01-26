#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QRandomGenerator>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->optionLabel->setText(sign);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*!
 * \brief MainWindow::getPlaceList
 * \return QStringList with places signs
 */
QStringList MainWindow::getPlaceList()
{
    qDebug() << "PlaceList given";
    return this->placesList;
}

/*!
 * \brief MainWindow::getColoursList
 * \return QStringList with places colours
 */
QStringList MainWindow::getColoursList()
{
    qDebug() << "ColoursList given";
    return this->colorsList;
}

/*!
 * \brief MainWindow::showPlaceList
 * Shows elements of plase signs list
 */
void MainWindow::showPlaceList()
{
    qDebug() << this->placesList;
}

/*!
 * \brief MainWindow::showColourList
 * Shows elements of places color list
 */
void MainWindow::showColourList()
{
    qDebug() << this->placesList;
}

/*!
 * \brief MainWindow::randomIndex
 * \return
 */
int MainWindow::randomIndex()
{
    quint32 value = QRandomGenerator::global()->bounded(0,65);

    qDebug() << value;
    return value;
}

/*!
 * \brief MainWindow::on_pushButtonWhiteOption_clicked
 * pushButtonWhiteOption on click service
 */
void MainWindow::on_pushButtonWhiteOption_clicked()
{
    if(colour == "white"){
        qDebug() << sign << "White place, nice!";
    }

    quint32 value = randomIndex();
    QStringList tmp_places = getPlaceList();
    QStringList tmp_colours = getColoursList();

    sign = tmp_places[value];
    colour = tmp_colours[value];

    ui->optionLabel->setText(sign);
}

/*!
 * \brief MainWindow::on_pushButtonBlackOption_clicked
 * pushButtonBlackOption on click service
 */
void MainWindow::on_pushButtonBlackOption_clicked()
{
    if(colour == "black"){
        qDebug() << sign << "Black place, nice!";
    }

    quint32 value = randomIndex();
    QStringList tmp_places = getPlaceList();
    QStringList tmp_colours = getColoursList();

    sign = tmp_places[value];
    colour = tmp_colours[value];

    ui->optionLabel->setText(sign);
}

/*!
 * \brief MainWindow::on_pushButtonShowBoard_clicked
 * pushButtonShowBoard on click service
 */
void MainWindow::on_pushButtonShowBoard_clicked()
{
    qDebug() << "Lista pól:";
    this->showPlaceList();
}
