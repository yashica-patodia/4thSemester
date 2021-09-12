#ifndef _BAD_BOOKING_DATE_H
#define _BAD_BOOKING_DATE_H
#include <iostream>
#include "Bad_Booking.h"

using namespace std;

class Bad_Booking_Date : public Bad_Booking
{
    const char * what() const throw();
};
//Inline implementation
inline const char * Bad_Booking_Date::what() const throw()
{
    return "Booking Date  Is Invalid";
}

#endif