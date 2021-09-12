#ifndef _CONCESSIONBOOKING_H
#define _CONCESSIONBOOKING_H
#include <iostream>
#include <vector>
#include <cmath>
#include "Booking.h"
using namespace std;

class ConcessionBooking : public Booking{
    Station fromStation_;
    Station toStation_;
    Date dateOfBooking_;
    Date dateOfReservation_;
    const BookingClasses &bookingClass_;
    const BookingCategory &bookingCategory_;
    Passenger &passenger_;
    string bookingMessage_;
    bool bookingStatus_;
    float fare_;
    float concessionFactor_;
     long long int PNR_;

    public:
        // Constructor
        // ConcessionBooking(Station fromStation,Station toStation, Date dateOfBooking,Date dateOfReservation,const BookingClasses &bookingClass,const BookingCategory &bookingCategor,Passenger &passeng,float concessionFactor,bool bookingStatus,string bookingMessage,float fare);
        ConcessionBooking(Station fromStation,Station toStation,Date dateOfBooking,const BookingClasses &bookingClass,const BookingCategory &bookingCategory, Passenger &passenger,Date dateOfReservation,string bookingMessage, bool bookingStatus, float fare,float concessionFactor);
        // Destructor
        ~ConcessionBooking();
        // calculates fare according to concessional Business Logic
        long long int ComputeFare();

};

// Inline Implementation of Destructor of the class
inline ConcessionBooking::~ConcessionBooking(){};

#endif
