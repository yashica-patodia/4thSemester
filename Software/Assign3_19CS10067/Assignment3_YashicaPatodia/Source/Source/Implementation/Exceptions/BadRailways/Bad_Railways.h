#ifndef _BAD_RAILWAYS_H
#define _BAD_RAILWAYS_H
#include <iostream>
using namespace std;

class Bad_Railways : public exception
{
    virtual const char * what() const throw() = 0;
};

#endif