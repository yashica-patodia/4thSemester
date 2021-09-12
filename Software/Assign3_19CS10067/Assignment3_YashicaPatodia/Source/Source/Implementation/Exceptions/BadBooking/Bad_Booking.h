#ifndef _BAD_BOOKING_H
#define _BAD_BOOKING_H
#include <iostream>
using namespace std;

class Bad_Booking : public exception
{
    //Virtual function
    virtual const char * what() const throw() = 0;
};

#endif