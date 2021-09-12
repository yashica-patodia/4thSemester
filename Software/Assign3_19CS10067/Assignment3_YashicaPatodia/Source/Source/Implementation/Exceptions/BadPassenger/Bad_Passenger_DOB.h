

#ifndef _BAD_PASSENGERAGE_H
#define _BAD_PASSENGERAGE_H
#include <iostream>
#include "Bad_Passenger.h"

using namespace std;

class Bad_Passenger_Age : public Bad_Passenger
{
    const char * what() const throw();
};
//Inline Implementation
inline const char * Bad_Passenger_Age::what() const throw()
{
    return "Passenger Age Is Invalid";
}

#endif