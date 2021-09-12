#ifndef _TATKALBOOKING_H
#define _TATKALBOOKING_H
#include <iostream>
#include <vector>
#include <cmath>
#include "Booking.h"
#include "../BookingCategory/BookingCategory.h"

using namespace std;

class TatkalBooking : public Booking{
    Station fromStation_;
    Station toStation_;
    Date dateOfBooking_;
    const BookingClasses &bookingClass_;
    const BookingCategory &bookingCategory_;
    Passenger &passenger_;
    Date dateOfReservation_;
    float tatkalLoadFactor_;
    float tatkalMinCharge_;
    float tatkalMaxCharge_;
    float tatkalMinDist_;
    string bookingMessage_;
    bool bookingStatus_;
    float fare_;
     long long int PNR_;

    public:
        // Constructor
        TatkalBooking(Station fromStation,Station toStation,Date dateOfBooking,const BookingClasses &bookingClass,const BookingCategory &bookingCategory, Passenger &passenger,Date dateOfReservation,float tatkalLoadFactor,float tatkalMinCharge,float tatkalMaxCharge,float tatkalMinDist,string bookingMessage, bool bookingStatus, float fare);
        // Destructor
        ~TatkalBooking();
        // Return calculated fare according to Tatkal Business Logic
       long long int ComputeFare();
};

// Inline Implementation of the Destructor
inline TatkalBooking::~TatkalBooking(){};

#endif
