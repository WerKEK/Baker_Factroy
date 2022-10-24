#include "bakestore.h"
#include <QDebug>
#include <baker.h>



int BakeStore::pieCounter = 0;
BakeStore::BakeStore()
{
    createBakers();
}

void BakeStore::createBakers()
{

    for(int i = 0; i < 3; i++){
        Baker* baker = new Baker();
        baker->startCooking();
    }
}

void BakeStore::buyPie()
{
    if(pieCounter > 0){
        pieCounter--;
        qDebug() << "Pie was bought" << pieCounter;
    }
    else{
        qDebug() << "Pie wasn't bought" << pieCounter;
    }
}

void BakeStore::addPie()
{
    pieCounter++;
    qDebug() << "Pie Added" << pieCounter;
}

int BakeStore::getPieCounter()
{
    return pieCounter;
}

