#include "TatkalBooking.h"
using namespace std;

// Constructor                                                                                            // General Constructor
TatkalBooking::TatkalBooking(Station fromStation,Station toStation,Date dateOfBooking,const BookingClasses &bookingClass,const BookingCategory &bookingCategory, Passenger &passenger,Date dateOfReservation,float tatkalLoadFactor,float tatkalMinCharge,float tatkalMaxCharge,float tatkalMinDist,string bookingMessage, bool bookingStatus, float fare):fromStation_(fromStation), toStation_(toStation),dateOfBooking_(dateOfBooking),bookingClass_(bookingClass), bookingCategory_(bookingCategory),passenger_(passenger),dateOfReservation_(dateOfReservation),tatkalLoadFactor_(tatkalLoadFactor), tatkalMinCharge_(tatkalMinCharge), tatkalMaxCharge_(tatkalMaxCharge), tatkalMinDist_(tatkalMinDist), bookingMessage_(bookingMessage),bookingStatus_(bookingStatus),fare_(fare), PNR_(Booking::sBookingPNRSerial++)
                                        
                                        {
                                            fare_ = ComputeFare();
                                            Booking::sBookings.push_back(this);

                                        }
// Return calculated fare using according to Tatkal Business Logic
long long int TatkalBooking::ComputeFare(){
    float traDist = fromStation_.GetDistance(toStation_);
    float baseFare =traDist*(Booking::sBaseFarePerKM);
    float loadedFare = baseFare*bookingClass_.GetLoadFactor();
    float extraCharge = 0;
    if (traDist > tatkalMinDist_){
        extraCharge = loadedFare*tatkalLoadFactor_;
        if (extraCharge < tatkalMinCharge_) extraCharge = tatkalMinCharge_;
        else if (extraCharge > tatkalMaxCharge_) extraCharge = tatkalMaxCharge_;
    }
    
    loadedFare = loadedFare+bookingClass_.GetReservationCharge()+extraCharge;
    long long int finalFare = round(loadedFare);
    return finalFare;
}
