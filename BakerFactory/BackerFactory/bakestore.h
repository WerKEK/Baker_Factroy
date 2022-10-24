#ifndef BAKESTORE_H
#define BAKESTORE_H

#include <QObject>
#include <QVector>
#include <baker.h>

class BakeStore
{

public:
    BakeStore();

    void buyPie();
    static void addPie();

    int getPieCounter();

private:
    static int pieCounter;

    void createBakers();
};

#endif // BAKESTORE_H
