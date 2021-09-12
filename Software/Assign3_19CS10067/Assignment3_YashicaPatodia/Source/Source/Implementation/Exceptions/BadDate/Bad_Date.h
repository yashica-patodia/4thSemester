#ifndef _BAD_DATE_H
#define _BAD_DATE_H
#include <iostream>
using namespace std;

class Bad_Date : public exception
{
    const char * what() const throw();
};

inline const char * Bad_Date::what() const throw()
{
    return "Date  Is Invalid";
}

#endif