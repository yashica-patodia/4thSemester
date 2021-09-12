#ifndef _BAD_PASSENGERNAME_H
#define _BAD_PASSENGERNAME_H
#include <iostream>
#include "Bad_Passenger.h"

using namespace std;

class Bad_Passenger_Name : public Bad_Passenger
{
    const char * what() const throw();
};
//INline implementaton
inline const char * Bad_Passenger_Name::what() const throw()
{
    return "Passenger Name  Is Invalid";
}

#endif
