#include <baker.h>
#include <QDebug>

Baker::Baker(QObject *parent) : QThread(parent)
{
    connect(this, &Baker::started, this, &Baker::cookPie);
}

Baker::~Baker()
{
    delete timer;
}

void Baker::sendPie()
{
    BakeStore::addPie();
}

void Baker::cookPie()
{
    timer = new QTimer(this);
    timer->setInterval((rand() % 5000 + 1000));
    qDebug()<<timer->interval();
    connect(timer, &QTimer::timeout, this, &Baker::sendPie);

    timer->start();
}

void Baker::startCooking()
{
    start();
}
