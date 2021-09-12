#ifndef _BAD_RAILWAYS_STATION_H
#define _BAD_RAILWAYS_STATION_H
#include <iostream>
#include "Bad_Railways.h"

using namespace std;

class Bad_Railways_Station : public Bad_Railways
{
    const char * what() const throw();
};

inline const char * Bad_Railways_Station::what() const throw(){
    return " Station Invalid";
}

#endif