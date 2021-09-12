/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#include "BookingClasses.h"

using namespace std;

// Get Instance of each Singleton Class
template<typename T>
const BookingClassesType<T>& BookingClassesType<T>::Type(){
    static const BookingClassesType<T> obj; 
    return obj;
}


//  Static Constants for ACFirstClass
template<>
const string BookingClasses::ACFirstClass::sName = "ACFirstClass";
template<>
const bool BookingClasses::ACFirstClass::sIsSitting = false;
template<>
const float BookingClasses::ACFirstClass::sLoadFactor = 6.5;
template<>
const bool BookingClasses::ACFirstClass::sIsAC = true;
template<>
const int BookingClasses::ACFirstClass::sNumberOfTiers = 2;
template<>
const bool BookingClasses::ACFirstClass::sIsLuxury = true;
template<>
const float BookingClasses::ACFirstClass::sReservationCharge = 60.0;
template<>
const float BookingClasses::ACFirstClass::sTatkalLoadFactor = 0.3;
template<>
const float BookingClasses::ACFirstClass::sTatkalMinCharge = 400.0;
template<>
const float BookingClasses::ACFirstClass::sTatkalMaxCharge = 500.0;
template<>
const float BookingClasses::ACFirstClass::sTatkalMinDistance = 500.0;
//  Static Constants for ExecutiveChairCar
template<>
const string BookingClasses::ExecutiveChairCar::sName = "ExecutiveChairCar";
template<>
const bool BookingClasses::ExecutiveChairCar::sIsSitting = true;
template<>
const float BookingClasses::ExecutiveChairCar::sLoadFactor = 5.0;
template<>
const bool BookingClasses::ExecutiveChairCar::sIsAC = true;
template<>
const int BookingClasses::ExecutiveChairCar::sNumberOfTiers = 0;
template<>
const bool BookingClasses::ExecutiveChairCar::sIsLuxury = true;
template<>
const float BookingClasses::ExecutiveChairCar::sReservationCharge = 60.0;
template<>
const float BookingClasses::ExecutiveChairCar::sTatkalLoadFactor = 0.3;
template<>
const float BookingClasses::ExecutiveChairCar::sTatkalMinCharge = 400.0;
template<>
const float BookingClasses::ExecutiveChairCar::sTatkalMaxCharge = 500.0;
template<>
const float BookingClasses::ExecutiveChairCar::sTatkalMinDistance = 250.0;

// Static Constants for AC2Tier
template<>
const string BookingClasses::AC2Tier::sName = "AC2Tier";
template<>
const bool BookingClasses::AC2Tier::sIsSitting = false;
template<>
const float BookingClasses::AC2Tier::sLoadFactor = 4.0;
template<>
const bool BookingClasses::AC2Tier::sIsAC = true;
template<>
const int BookingClasses::AC2Tier::sNumberOfTiers = 2;
template<>
const bool BookingClasses::AC2Tier::sIsLuxury = false;
template<>
const float BookingClasses::AC2Tier::sReservationCharge = 50.0;
template<>
const float BookingClasses::AC2Tier::sTatkalLoadFactor = 0.3;
template<>
const float BookingClasses::AC2Tier::sTatkalMinCharge = 400.0;
template<>
const float BookingClasses::AC2Tier::sTatkalMaxCharge = 500.0;
template<>
const float BookingClasses::AC2Tier::sTatkalMinDistance = 250.0;

//  Static Constants for FirstClass
template<>
const string BookingClasses::FirstClass::sName = "FirstClass";
template<>
const bool BookingClasses::FirstClass::sIsSitting = false;
template<>
const float BookingClasses::FirstClass::sLoadFactor = 3.0;
template<>
const bool BookingClasses::FirstClass::sIsAC = false;
template<>
const int BookingClasses::FirstClass::sNumberOfTiers = 2;
template<>
const bool BookingClasses::FirstClass::sIsLuxury = true;
template<>
const float BookingClasses::FirstClass::sReservationCharge = 50.0;
template<>
const float BookingClasses::FirstClass::sTatkalLoadFactor = 0.3;
template<>
const float BookingClasses::FirstClass::sTatkalMinCharge = 400.0;
template<>
const float BookingClasses::FirstClass::sTatkalMaxCharge = 500.0;
template<>
const float BookingClasses::FirstClass::sTatkalMinDistance = 500.0;

//  Static Constants for AC3Tier
template<>
const string BookingClasses::AC3Tier::sName = "AC3Tier";
template<>
const bool BookingClasses::AC3Tier::sIsSitting = false;
template<>
const float BookingClasses::AC3Tier::sLoadFactor = 2.5;
template<>
const bool BookingClasses::AC3Tier::sIsAC = true;
template<>
const int BookingClasses::AC3Tier::sNumberOfTiers = 3;
template<>
const bool BookingClasses::AC3Tier::sIsLuxury = false;
template<>
const float BookingClasses::AC3Tier::sReservationCharge = 40.0;
template<>
const float BookingClasses::AC3Tier::sTatkalLoadFactor = 0.3;
template<>
const float BookingClasses::AC3Tier::sTatkalMinCharge = 300.0;
template<>
const float BookingClasses::AC3Tier::sTatkalMaxCharge = 400.0;
template<>
const float BookingClasses::AC3Tier::sTatkalMinDistance = 500.0;

//  Static Constants for ACChairCar
template<>
const string BookingClasses::ACChairCar::sName = "ACChairCar";
template<>
const bool BookingClasses::ACChairCar::sIsSitting = true;
template<>
const float BookingClasses::ACChairCar::sLoadFactor = 2.0;
template<>
const bool BookingClasses::ACChairCar::sIsAC = true;
template<>
const int BookingClasses::ACChairCar::sNumberOfTiers = 0;
template<>
const bool BookingClasses::ACChairCar::sIsLuxury = false;
template<>
const float BookingClasses::ACChairCar::sReservationCharge = 40.0;
template<>
const float BookingClasses::ACChairCar::sTatkalLoadFactor = 0.3;
template<>
const float BookingClasses::ACChairCar::sTatkalMinCharge = 125.0;
template<>
const float BookingClasses::ACChairCar::sTatkalMaxCharge = 225.0;
template<>
const float BookingClasses::ACChairCar::sTatkalMinDistance = 250.0;

//  Static Constants for Sleeper
template<>
const string BookingClasses::Sleeper::sName = "Sleeper";
template<>
const bool BookingClasses::Sleeper::sIsSitting = false;
template<>
const float BookingClasses::Sleeper::sLoadFactor = 1.0;
template<>
const bool BookingClasses::Sleeper::sIsAC = false;
template<>
const int BookingClasses::Sleeper::sNumberOfTiers = 3;
template<>
const bool BookingClasses::Sleeper::sIsLuxury = false;
template<>
const float BookingClasses::Sleeper::sReservationCharge = 20.0;
template<>
const float BookingClasses::Sleeper::sTatkalLoadFactor = 0.3;
template<>
const float BookingClasses::Sleeper::sTatkalMinCharge = 100.0;
template<>
const float BookingClasses::Sleeper::sTatkalMaxCharge = 200.0;
template<>
const float BookingClasses::Sleeper::sTatkalMinDistance = 500.0;

//  Static Constants for SecondSitting
template<>
const string BookingClasses::SecondSitting::sName = "SecondSitting";
template<>
const bool BookingClasses::SecondSitting::sIsSitting = true;
template<>
const float BookingClasses::SecondSitting::sLoadFactor = 0.6;
template<>
const bool BookingClasses::SecondSitting::sIsAC = false;
template<>
const int BookingClasses::SecondSitting::sNumberOfTiers = 0;
template<>
const bool BookingClasses::SecondSitting::sIsLuxury = false;
template<>
const float BookingClasses::SecondSitting::sReservationCharge = 15.0;
template<>
const float BookingClasses::SecondSitting::sTatkalLoadFactor = 0.1;
template<>
const float BookingClasses::SecondSitting::sTatkalMinCharge = 10.0;
template<>
const float BookingClasses::SecondSitting::sTatkalMaxCharge = 15.0;
template<>
const float BookingClasses::SecondSitting::sTatkalMinDistance = 100.0;


