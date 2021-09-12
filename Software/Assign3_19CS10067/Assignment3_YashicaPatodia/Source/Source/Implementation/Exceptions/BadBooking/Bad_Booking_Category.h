#ifndef _BADBOOKINGCATEGORY_H
#define _BADBOOKINGCATEGORY_H
#include <iostream>
#include "Bad_Booking.h"

using namespace std;

class Bad_Booking_Category : public Bad_Booking
{
    const char * what() const throw();
};

inline const char * Bad_Booking_Category::what() const throw(){
    return "Booking Category is not correct";
}

#endif