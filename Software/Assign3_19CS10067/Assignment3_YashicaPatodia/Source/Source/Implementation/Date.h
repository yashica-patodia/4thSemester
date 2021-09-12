/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#ifndef _DATE_H
#define _DATE_H
#include<iostream>
#include<ctime>
#include<cstdlib>
#include "Exceptions/ExceptionHeaders.h"
using namespace std;

class Date
{
   const char monthNames[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
   const char dayNames[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday",
                       "Friday", "Saturday", "Sunday"};
    const int monthDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    enum Month
    {
        Jan = 1,
        Feb,
        Mar,
        Apr,
        May,
        Jun,
        Jul,
        Aug,
        Sep,
        Oct,
        Nov,
        Dec
        
    };
    enum Day
    {
        Mon,
        Tue,
        Wed,
        Thr,
        Fri,
        Sat,
        Sun
    };
    typedef  int UINT;
    UINT date_;
    UINT monthNum_;
    UINT year_;
    string stringDate_;

public:
    // Constructor 
    Date(UINT d, UINT m, UINT y,string stringDate) ;
    Date(string stringDate);
    //Destructor
    ~Date();
    //output ostream
    friend ostream &operator<<(ostream &os, const Date &date);
    //Copy assignment opertor
    Date& operator= (const Date& date);
    int getDay();
    int getMonth();
    int getYear();
    //Checks if a given date is valid or not
    bool ValidDate();
    //Checks if a given date is leap year or not
    bool IsLeap();
    //Check if valid booking date or not
    bool IsValidBookingDate();
    //Checks if two dates are equal
    bool IsEqual(UINT d, UINT m, UINT y);
    //Computes age form date of birth
    int age(string dateOfBirth);
    //Returns the number of days from 0/00/0000
    int getDays();
    //Returns the difference between two dates
    int getDifference(Date &d1,Date &d2);
    //Returns the number of leap years before that date
    int countLeapYears() const;
    //Function for comparing dates
    friend bool operator<(const Date& a, const Date& b);

    
    static void UTDate();
   
};
#endif