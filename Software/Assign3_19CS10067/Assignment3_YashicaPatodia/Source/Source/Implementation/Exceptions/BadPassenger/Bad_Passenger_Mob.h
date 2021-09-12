#ifndef _BAD_PASSENGERMOB_H
#define _BAD_PASSENGERMOB_H
#include <iostream>
#include "Bad_Passenger.h"

using namespace std;

class Bad_Passenger_Mobile : public Bad_Passenger
{
    const char * what() const throw();
};

inline const char * Bad_Passenger_Mobile::what() const throw()
{
    return "Passenger Mobile Number  Is Invalid";
}

#endif