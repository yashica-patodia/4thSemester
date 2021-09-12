#ifndef _BAD_PASSENGERAADHAR_H
#define _BAD_PASSENGERAAFHAR_H
#include <iostream>
#include "Bad_Passenger.h"

using namespace std;

class Bad_Passenger_Aadhar : public Bad_Passenger
{
    const char * what() const throw();
};

inline const char * Bad_Passenger_Aadhar::what() const throw(){
    return "Passenger Aadhar Number Is Invalid";
}

#endif