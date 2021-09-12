#include "DivyaangConcession.h"
using namespace std;

//  Get  Singleton Class type
const DivyaangConcession& DivyaangConcession::Type(){
    static const DivyaangConcession obj;
    return obj;
}

//  Functions from abstract Class
float DivyaangConcession::GetConcessionFactor() const{
    return 0.0;
}
//  Function from abstract Class
bool DivyaangConcession::IsEligible() const{
    return false;
}


float DivyaangConcession::GetConcessionFactor(const Passenger& passenger,const Divyaang& disability,const BookingClasses& bookingClass) const
{
    if (DivyaangConcession::Type().IsEligible(passenger, disability)){
        return disability.GetConcessionFactor(bookingClass);
    }
    else{
        return 0.0;
    }   
}



bool DivyaangConcession::IsEligible(const Passenger& passenger, const Divyaang& disability) const{
    if (&passenger.GetDisabilty() == &disability) return true;
    else return false;
}