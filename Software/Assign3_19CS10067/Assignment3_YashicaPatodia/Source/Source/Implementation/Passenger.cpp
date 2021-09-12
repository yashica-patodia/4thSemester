/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/

#include "Passenger.h"
using namespace std;
//Parameterized Constructor
Passenger::Passenger(string firstName_,string middleName_,string lastName_,Date dateOfBirth_,const Gender &gender_,string aadharNumber_,string mobileNumber_,const Divyaang &disabilityType_,string disabilityID_):firstName_(firstName_),middleName_(middleName_),lastName_(lastName_),dateOfBirth_(dateOfBirth_),gender_(gender_),aadharNumber_(aadharNumber_),mobileNumber_(mobileNumber_),disabilityType_(disabilityType_),disabilityID_(disabilityID_){};

Passenger::Passenger(const Passenger& f):firstName_(f.firstName_), middleName_(f.middleName_), lastName_(f.lastName_), dateOfBirth_(f. dateOfBirth_),gender_(f.gender_), aadharNumber_(f.aadharNumber_), 
                                 mobileNumber_(f.mobileNumber_), disabilityType_(f.disabilityType_), disabilityID_(f.disabilityID_){}; 
int Passenger::GetAge() const
{
     Date d=dateOfBirth_;
     time_t now =time(0);
     tm *ltm = localtime(&now);
     int yearNow=1900+ltm->tm_year;
     int monthNow=1+ltm->tm_mon;
    // int dayNow=ltm->tm_mday;
     int diffYear=yearNow-d.Date::getYear();
     if(monthNow<d.Date::getMonth())
     diffYear--;
     return diffYear;
     

}
//Destructor
Passenger ::~Passenger(){};
// Return Gender
const Gender& Passenger::GetGender() const{
    return gender_;
}
// Get the Disabilty of the Passenger
const Divyaang& Passenger::GetDisabilty() const{
    return disabilityType_;
}

//Copy Assignment Operator
Passenger ::Passenger(const Passenger &p):firstName_(p.firstName_),middleName_(p.middleName_),lastName_(p.lastName_),dateOfBirth_(p.dateOfBirth_),gender_(p.gender_),aadharNumber_(p.aadharNumber_),mobileNumber_(p.mobileNumber_),disabilityType_(p.disabilityType_),disabilityID_(p.disabilityID_){};
//Output ostream operator -Friend Function
ostream &operator<<(ostream &os, const Passenger &p)
{
    //os<<"Station Name:"<<st.name<<endl;
    os<<"Name:"<<p.firstName_<<" "<<p.middleName_<<" "<<p.lastName_<<" "<<"Aadhar Number:"<<p.aadharNumber_<<"Date of Birth:"<<p.dateOfBirth_<<"Mobile Number:"<<p.mobileNumber_<<endl;
    return os;

}
