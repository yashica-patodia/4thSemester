#ifndef _BAD_PASSENGER_H
#define _BAD_PASSENGER_H
#include <iostream>

using namespace std;

class Bad_Passenger : public exception
{
    //Virtual function
    virtual const char * what() const throw() = 0;
};

#endif