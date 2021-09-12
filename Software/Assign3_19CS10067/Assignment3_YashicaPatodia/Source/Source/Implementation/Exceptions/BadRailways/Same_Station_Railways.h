

#ifndef SAME_RAILWAYSSTATION_H
#define SAME_RAILWAYSSTATION_H
#include <iostream>
#include "Bad_Railways.h"

using namespace std;

class Same_Station_Railways : public Bad_Railways
{
    const char * what() const throw();
};

inline const char * Same_Station_Railways::what() const throw(){
    return "Same Station Input ";
}

#endif