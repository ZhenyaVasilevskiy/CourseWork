#ifndef ADDITIONALINFORMATION_H
#define ADDITIONALINFORMATION_H
#include "flight.h"

class AdditionalInformation: public Flight
{
     int numOfSeats;
     int timeInAir;
     string AviaCompany;
public:
    AdditionalInformation();
};

#endif // ADDITIONALINFORMATION_H
