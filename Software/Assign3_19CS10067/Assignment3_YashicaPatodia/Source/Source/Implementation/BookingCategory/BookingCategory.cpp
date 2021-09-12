#include "BookingCategory.h"
using namespace std;

// Get instance of the singleton subclass
template<typename T>
const BookingCategoryType<T>& BookingCategoryType<T>::Type(){
    static const BookingCategoryType<T> obj; 
    return obj;
}


// General Booking Category
template<>
const string BookingCategory::General::sName = "General";
template<>
const float BookingCategory::General::sConcessionFactor=0.0;
template<>
Booking* BookingCategory::General::GenerateBooking(Station fromStation,Station toStation,Date dateOfBooking,const BookingClasses &bookingClass,Passenger &passenger,Date dateOfReservation,string bookingMessage,float fare,bool bookingStatus) const
    {
    float concessionFactor = GeneralConcession::Type().GetConcessionFactor();
    return new ConcessionBooking(fromStation,toStation, dateOfBooking, bookingClass,*this,passenger, dateOfReservation,bookingMessage,bookingStatus, fare,concessionFactor);
    }
                                                                    
template<>
const string BookingCategory::Ladies::sName = "Ladies";
template<>
const float BookingCategory::Ladies::sConcessionFactor=0.0;
template<>
Booking* BookingCategory::Ladies::GenerateBooking(Station fromStation,Station toStation,Date dateOfBooking,const BookingClasses &bookingClass,Passenger &passenger,Date dateOfReservation,string bookingMessage,float fare,bool bookingStatus) const
    {
    float concessionFactor = LadiesConcession::Type().GetConcessionFactor(passenger);
    return new ConcessionBooking(fromStation,toStation, dateOfBooking, bookingClass,*this,passenger, dateOfReservation,bookingMessage,bookingStatus, fare,concessionFactor);
    }  

template<>
const string BookingCategory::SeniorCitizen::sName = "SeniorCitizen";
template<>
const float BookingCategory::SeniorCitizen::sConcessionFactor=0.0;
template<>
Booking* BookingCategory::SeniorCitizen::GenerateBooking(Station fromStation,Station toStation,Date dateOfBooking,const BookingClasses &bookingClass,Passenger &passenger,Date dateOfReservation,string bookingMessage,float fare,bool bookingStatus) const
    {
    float concessionFactor = SeniorConcession::Type().GetConcessionFactor(passenger);
    return new ConcessionBooking(fromStation,toStation, dateOfBooking, bookingClass,*this,passenger, dateOfReservation,bookingMessage,bookingStatus, fare,concessionFactor);
    }                                                                  
                                                                   
                                                                   
                                                                    
                                                                    
template<>
const string BookingCategory::DivyaangCategory::sName = "Divyaang";
template<>
const float BookingCategory::DivyaangCategory::sConcessionFactor=0.0;
template<>
Booking* BookingCategory::DivyaangCategory::GenerateBooking(Station fromStation,Station toStation,Date dateOfBooking,const BookingClasses &bookingClass,Passenger &passenger,Date dateOfReservation,string bookingMessage,float fare,bool bookingStatus) const
    {
    float concessionFactor = DivyaangConcession::Type().GetConcessionFactor(passenger,passenger.GetDisabilty(),bookingClass);
    return  new ConcessionBooking(fromStation,toStation, dateOfBooking, bookingClass,*this,passenger, dateOfReservation,bookingMessage,bookingStatus, fare,concessionFactor);
    } 

 template<>
const string BookingCategory::Tatkal::sName = "Tatkal";
template<>
const float BookingCategory::Tatkal::sConcessionFactor=0.0;
template<>
Booking* BookingCategory::Tatkal::GenerateBooking(Station fromStation,Station toStation,Date dateOfBooking,const BookingClasses &bookingClass,Passenger &passenger,Date dateOfReservation,string bookingMessage,float fare,bool bookingStatus) const
    {
        float tatkalLoadFactor = bookingClass.GetTatkalLoadFactor();
        float tatkalMinCharge = bookingClass.GetTatkalMinCharge();
        float tatkalMaxCharge = bookingClass.GetTatkalMaxCharge();
        float tatkalMinDist = bookingClass.GetTatkalMinDist();
        return  new TatkalBooking(fromStation, toStation,dateOfBooking,bookingClass,*this, passenger,dateOfReservation,tatkalLoadFactor, tatkalMinCharge,tatkalMaxCharge,tatkalMinDist, bookingMessage, bookingStatus, fare);
    }  

 template<>
const string BookingCategory::PremiumTatkal::sName = "PremiumTatkal";
template<>
const float BookingCategory::PremiumTatkal::sConcessionFactor=0.0;
template<>
 Booking* BookingCategory::PremiumTatkal::GenerateBooking(Station fromStation,Station toStation,Date dateOfBooking, const BookingClasses &bookingClass,Passenger &passenger,Date dateOfReservation,string bookingMessage,float fare,bool bookingStatus) const
    {
        float tatkalLoadFactor = 2*bookingClass.GetTatkalLoadFactor();
        float tatkalMinCharge = 2*bookingClass.GetTatkalMinCharge();
        float tatkalMaxCharge = 2*bookingClass.GetTatkalMaxCharge();
        float tatkalMinDist = bookingClass.GetTatkalMinDist();
         return  new TatkalBooking(fromStation, toStation,dateOfBooking,bookingClass,*this, passenger,dateOfReservation,tatkalLoadFactor, tatkalMinCharge,tatkalMaxCharge,tatkalMinDist, bookingMessage, bookingStatus, fare);
       // return TatkalBooking(fromStation, toStation,dateOfBooking,bookingClass,bookingCategory, passenger,dateOfReservation, PNR,tatkalLoadFactor, tatkalMinCharge,tatkalMaxCharge,tatkalMinDist, bookingMessage, bookingStatus, fare);
    }                                    
