#ifndef CAR_H
#define CAR_H

#include <QString>
#include <QDate>

class Car
{
public:
    QString PlateNum;
    QString Brand;
    QString Model;
    int Rate;
    bool isAvailable = false;
    QDate DateRented;
    QDate DateToReturn;
    QDate DateReturned;
    Car();
};

#endif // CAR_H
