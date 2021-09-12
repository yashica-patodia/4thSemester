/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#ifndef _PASSENGER_H
#define _PASSENGER_H


#include "./Gender/Gender.h"
#include "./Divyaang/Divyaang.h"
#include "Date.h"
#include <iostream>
#include<ctime>

using namespace std;
class Passenger
{
  
    string firstName_;
    string middleName_;
    string lastName_;
    Date dateOfBirth_;
    const Gender &gender_;
    string aadharNumber_;
    string mobileNumber_;
    const Divyaang& disabilityType_;
    string disabilityID_;
     
  
    public:
    //Parameterized Constructor
    Passenger(string firstName_,string middleName_,string lastName_,Date dateOfBirth_,const Gender &gender_,string aadharNumber_,string mobileNumber_,const Divyaang &disabilityType_,string disabilityID_ );
    Passenger(string firstName_,string middleName_,string lastName_,Date dateOfBirth_,const Gender &gender_,string aadharNumber_,string mobileNumber_ );

    
    //Get age
    int GetAge() const;
    // Returns Gender
    const Gender& GetGender() const;
    // Get the Type of Disabilty
    const Divyaang& GetDisabilty() const;
    //Destructor
    ~Passenger();
    //Output ostream operator
    friend ostream &operator<<(ostream &os, const Passenger &p);
    //Static unit testing function
    static void UTPassenger(); 
    //Copy Constructor
    Passenger(const Passenger &p);


};
#endif