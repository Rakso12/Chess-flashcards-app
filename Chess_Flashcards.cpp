#include "Chess_Flashcards.h"
#include "ui_Chess_Flashcards.h"
#include <QDebug>
#include <QRandomGenerator>

Chess_Flashcards::Chess_Flashcards(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Chess_Flashcards)
{
    ui->setupUi(this);
    ui->optionLabel->setText(sign);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(20);
    ui->progressBar->minimum();
}

Chess_Flashcards::~Chess_Flashcards()
{
    delete ui;
}

/*!
 * \brief Chess_Flashcards::getPlaceList
 * \return QStringList with places signs
 */
QStringList Chess_Flashcards::getPlaceList()
{
    qDebug() << "PlaceList given";
    return this->placesList;
}

/*!
 * \brief Chess_Flashcards::getColoursList
 * \return QStringList with places colours
 */
QStringList Chess_Flashcards::getColoursList()
{
    qDebug() << "ColoursList given";
    return this->colorsList;
}

/*!
 * \brief Chess_Flashcards::showPlaceList
 * Shows elements of plase signs list
 */
void Chess_Flashcards::showPlaceList()
{
    qDebug() << this->placesList;
}

/*!
 * \brief Chess_Flashcards::showColourList
 * Shows elements of places color list
 */
void Chess_Flashcards::showColourList()
{
    qDebug() << this->placesList;
}

/*!
 * \brief Chess_Flashcards::randomIndex
 * \return
 */
int Chess_Flashcards::randomIndex()
{
    quint32 value = QRandomGenerator::global()->bounded(0,64);

    qDebug() << value;
    return value;
}

/*!
 * \brief Chess_Flashcards::on_pushButtonWhiteOption_clicked
 * pushButtonWhiteOption on click service
 */
void Chess_Flashcards::on_pushButtonWhiteOption_clicked()
{
    if(colour == "white"){
        qDebug() << sign << "White place, nice!";
        result =  result + 1;
        ui->progressBar->setValue(result);
    }
    if(result > 20){
        quint32 value = randomIndex();
        QStringList tmp_places = getPlaceList();
        QStringList tmp_colours = getColoursList();

        sign = tmp_places[value];
        colour = tmp_colours[value];

        ui->optionLabel->setText(sign);
    }
    else if(result == 20){
        ui->optionLabel->setText("Good job!");
    }
    qDebug() << result;
}

/*!
 * \brief Chess_Flashcards::on_pushButtonBlackOption_clicked
 * pushButtonBlackOption on click service
 */
void Chess_Flashcards::on_pushButtonBlackOption_clicked()
{
    if(colour == "black"){
        qDebug() << sign << "White place, nice!";
        result =  result + 1;
        ui->progressBar->setValue(result);
    }

    if(result > 20){
        quint32 value = randomIndex();
        QStringList tmp_places = getPlaceList();
        QStringList tmp_colours = getColoursList();

        sign = tmp_places[value];
        colour = tmp_colours[value];

        ui->optionLabel->setText(sign);
    }
    else if(result == 20){
        ui->optionLabel->setText("Good job!");
    }
    qDebug() << result;
}

/*!
 * \brief Chess_Flashcards::on_pushButtonShowBoard_clicked
 * pushButtonShowBoard on click service
 */
void Chess_Flashcards::on_pushButtonShowBoard_clicked()
{
    qDebug() << "Lista pól:";
    this->showPlaceList();
}
