/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#include "Date.h"
using namespace std;

Date::Date(UINT d, UINT m, UINT y,string date): date_(d), monthNum_(m), year_(y),stringDate_(date){};
Date::Date(string stringDate)
{
    //it supports dd/mm/yyyy format
    string d1=stringDate.substr(0,2);
    string m1=stringDate.substr(3,2);
    string y1=stringDate.substr(6,4);
    stringDate_=stringDate;
    date_=atoi(d1.c_str());
    monthNum_=atoi(m1.c_str());
    year_=atoi(y1.c_str());

}

// Returns boolean whether Date is Valid
bool Date::ValidDate(){

    if ((date_<=31) && (date_>=1) && (monthNum_>=1) && (monthNum_<=12))
    {
        if(date_>0 && monthNum_>0 )
        {
            if(date_<=monthDays[monthNum_-1])
            {
                if(year_>=1900 && year_<=2099)
                 return true;
            }
           

        }
        

    }
    else
    {
        throw Bad_Date();
        return false;

    } 
    return false;
    
}
bool Date::IsLeap()
{
    if((year_%400==0) ||(year_%100!=0 && year_%4==0))
    return true;
    return false;

}
bool Date:: IsEqual(UINT d,UINT m,UINT y)
{
    if(d==date_ && m==monthNum_ && y==year_)
    return true;
    return false;
}
bool Date::IsValidBookingDate()
{
    //Assuming that the date is valid then
    time_t now =time(0);
     tm *ltm = localtime(&now);
     int yearNow=1900+ltm->tm_year;
     int monthNow=1+ltm->tm_mon;
     int dayNow=ltm->tm_mday;
     if(yearNow>year_)
     return false;
     if(year_-yearNow>1)
     return false;
     if(IsEqual(dayNow,monthNow,yearNow))
     return false;
     else
     return true;

}
int Date::countLeapYears() const
{
    int year=year_;
    if(monthNum_<=2)
    year--;
    return year/4 -year/100+year/400;

}

int Date::getDifference(Date &d1,Date &d2)
{
    long int a=d1.year_*365+d1.date_;
    for(int i=0;i<d1.monthNum_-1;i++)
    a+=monthDays[i];
    a+=d1.countLeapYears();
    long int b=d2.year_*365+d2.date_;
    for(int i=0;i<d2.monthNum_-1;i++)
    b+=monthDays[i];
    b+=d2.countLeapYears();
    if(a>=b)
    return a-b;
    else 
    return b-a;
    


}
//Copy assignment opertor
Date&Date::operator=(const Date &date)
{
    
    date_=date.date_;
    monthNum_=date.monthNum_;
    year_=date.year_;
    stringDate_=date.stringDate_;
     
    return *this;

}
// Overload Output to print a date
ostream& operator<< (ostream &os, const Date& date){
    if (const_cast<Date&>(date).ValidDate())
     os << date.date_ << "/" << date.monthNames[date.monthNum_ - 1] << "/" << date.year_;
    else 
    os << "Invalid Date"<<endl;
    return os;
}
bool operator<(const Date& a, const Date& b)
{
    if(a.year_<b.year_)
    return true;
    else if(a.year_==b.year_)
    {
        if(a.monthNum_<b.monthNum_)
        return true;
        else
        {
            if(a.monthNum_==b.monthNum_)
            {
                if(a.date_<b.date_)
                return true;
                else
                return false;
            }
            else
            return false;
        }

    }
    else
    return false;
}
int Date::getDay()
{
    return date_;
}
int Date ::getMonth()
{
    return monthNum_;

}
int Date:: getYear()
{
    return year_;
}
// Destructor for Date
Date::~Date(){};