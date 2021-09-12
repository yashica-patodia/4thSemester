#include "SeniorConcession.h"
using namespace std;

// Return reference to the singleton Class
const SeniorConcession& SeniorConcession::Type(){
    static const SeniorConcession obj;
    return obj;
}

//  Functions from abstract Class
float SeniorConcession::GetConcessionFactor() const{
    return 0.0;
}
//  Functions from abstract Class
bool SeniorConcession::IsEligible() const{
    return false;
}
float SeniorConcession::GetConcessionFactor(const Passenger& passenger) const{
    if (SeniorConcession::Type().IsEligible(passenger)){
        if (&passenger.GetGender() == &Gender::Female::Type())
         return 0.5;
        else
         return 0.4;
    }
   return 0;
}



bool SeniorConcession::IsEligible(const Passenger& passenger) const{
    if (&passenger.GetGender() == &Gender::Female::Type()){
        if (passenger.GetAge() > 58) 
        return true;
        else
         return false;
    }
    else{
        if (passenger.GetAge() > 60) 
        return true;
        else
         return false;
    }
}