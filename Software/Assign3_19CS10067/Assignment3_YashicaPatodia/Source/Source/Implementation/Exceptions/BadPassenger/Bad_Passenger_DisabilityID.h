#ifndef BADPASSENGERDISABILTYID_H
#define BADPASSENGERDISABILTYID_H
#include <iostream>
#include "Bad_Passenger.h"

using namespace std;

class Bad_Passenger_DisabiltyID : public Bad_Passenger
{
    const char * what() const throw();
};

inline const char * Bad_Passenger_DisabiltyID::what() const throw(){
    return "Disabilty ID  is not a number";
}

#endif