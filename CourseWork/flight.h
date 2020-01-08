#ifndef FLIGHT_H
#define FLIGHT_H
#include <iostream>
#include <string.h>
#include <list>
#include <fstream>
#include <iterator>

using namespace std;

struct MatrixElem{
        string NumOfFl = "";
        int price = 0;
};


class Flight
{
        string number;
        string departurePoint;
        string placeOfArrival;
        int price;
        public:
        void createListOfFlights();
        Flight();
};

#endif // FLIGHT_H
