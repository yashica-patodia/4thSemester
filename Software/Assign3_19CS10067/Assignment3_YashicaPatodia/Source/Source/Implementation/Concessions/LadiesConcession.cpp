#include "LadiesConcession.h"
using namespace std;

// Return reference to the singleton Class
const LadiesConcession& LadiesConcession::Type(){
    static const LadiesConcession obj;
    return obj;
}

// Function from abstract Class
float LadiesConcession::GetConcessionFactor() const{
    return 0.0;
}
//  Functions from abstract Class
bool LadiesConcession::IsEligible() const{
    return false;
}

float LadiesConcession::GetConcessionFactor(const Passenger& passenger) const{
    if (LadiesConcession::Type().IsEligible(passenger)){
        return 0;
    }
  return 0;
}

bool LadiesConcession::IsEligible(const Passenger& passenger) const{
    if (&passenger.GetGender() == &Gender::Female::Type()){
        return true;
    }
    else{
        return false;
    }
}