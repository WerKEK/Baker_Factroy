#ifndef BAKER_H
#define BAKER_H

#include <QThread>
#include <QObject>
#include <QTimer>
#include <bakestore.h>

class Baker : public QThread
{
    Q_OBJECT


public:
    explicit Baker(QObject *parent = nullptr);
    ~Baker();

    void startCooking();


private:
    QTimer* timer;


private slots:
    void sendPie();
    void cookPie();
};
#endif // BAKER_H
