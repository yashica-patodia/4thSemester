/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/

#include "Divyaang.h"
using namespace std;

template<typename T>
const DivyaangType<T>& DivyaangType<T>::Type()
{
    static const DivyaangType<T> obj; 
    return obj;
}


// Divyaang Class for the Blind
template<>
const string Divyaang::Blind::sName = "Blind";
template<>
map<string, float> Divyaang::Blind::sConcessionFactor = 
{
    {BookingClasses::ACFirstClass::Type().GetName(), 0.5},
    {BookingClasses::ExecutiveChairCar::Type().GetName(), 0.75},
    {BookingClasses::AC2Tier::Type().GetName(), 0.5},
    {BookingClasses::FirstClass::Type().GetName(), 0.75},
    {BookingClasses::AC3Tier::Type().GetName(), 0.75},
    {BookingClasses::ACChairCar::Type().GetName(), 0.75},
    {BookingClasses::Sleeper::Type().GetName(), 0.75},
    {BookingClasses::SecondSitting::Type().GetName(), 0.75}
};

// Divyaang Class for the Orthopaedically Handicapped
template<>
const string Divyaang::OrthoHandicapped::sName = "Orthopaedically Handicapped";
template<>
map<string, float> Divyaang::OrthoHandicapped::sConcessionFactor = 
{
    {BookingClasses::ACFirstClass::Type().GetName(), 0.5},
    {BookingClasses::ExecutiveChairCar::Type().GetName(), 0.75},
    {BookingClasses::AC2Tier::Type().GetName(), 0.5},
    {BookingClasses::FirstClass::Type().GetName(), 0.75},
    {BookingClasses::AC3Tier::Type().GetName(), 0.75},
    {BookingClasses::ACChairCar::Type().GetName(), 0.75},
    {BookingClasses::Sleeper::Type().GetName(), 0.75},
    {BookingClasses::SecondSitting::Type().GetName(), 0.75}
};

// Divyaang Class for the Cancer Patients
template<>
const string Divyaang::CancerPatient::sName = "Cancer Patients";
template<>
map<string, float> Divyaang::CancerPatient::sConcessionFactor = 
{
    {BookingClasses::ACFirstClass::Type().GetName(), 0.5},
    {BookingClasses::ExecutiveChairCar::Type().GetName(), 0.75},
    {BookingClasses::AC2Tier::Type().GetName(), 0.5},
    {BookingClasses::FirstClass::Type().GetName(), 0.75},
    {BookingClasses::AC3Tier::Type().GetName(), 1.0},
    {BookingClasses::ACChairCar::Type().GetName(), 1.0},
    {BookingClasses::Sleeper::Type().GetName(), 1.0},
    {BookingClasses::SecondSitting::Type().GetName(), 1.0}
};

// Divyaang Class for the TB Patient
template<>
const string Divyaang::TBPatient::sName = "TB Patient";
template<>
map<string, float> Divyaang::TBPatient::sConcessionFactor = 
{
    {BookingClasses::ACFirstClass::Type().GetName(), 0.0},
    {BookingClasses::ExecutiveChairCar::Type().GetName(), 0.0},
    {BookingClasses::AC2Tier::Type().GetName(), 0.0},
    {BookingClasses::FirstClass::Type().GetName(), 0.75},
    {BookingClasses::AC3Tier::Type().GetName(), 0.0},
    {BookingClasses::ACChairCar::Type().GetName(), 0.0},
    {BookingClasses::Sleeper::Type().GetName(), 0.75},
    {BookingClasses::SecondSitting::Type().GetName(), 0.75}
};


