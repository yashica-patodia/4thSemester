

#ifndef _BOOKING_H
#define _BOOKING_H
#include <iostream>
#include <cmath>
#include <vector>
// #include "../Station.h"
// #include "../Date.h"
// #include "../Passenger.h"
// #include "../Railways.h"
// #include "../BookingClassesT/BookingClasses.h"
// #include "../BookingCategory/BookingCategory.h"
// #include "../Exceptions/ExceptionHeaders.h"

#include "../BookingCategory/BookingCategory.h"
#include "../Station.h"
#include "../Date.h"
#include "../Passenger.h"
#include "../BookingClassesT/BookingClasses.h"
#include "../Railways.h"
#include "../Exceptions/ExceptionHeaders.h"


using namespace std;

class BookingCategory;
class Booking{
   public:
        static float sBaseFarePerKM;
        static long long  int sBookingPNRSerial;
        static float sACSurcharge;
        static float sLuxuryTaxPercent;
        static vector<Booking*> sBookings;
        

        //  Function to create a Booking 
        static  Booking* CreateBooking(Station fromStation,Station toStation,Date dateOfBooking,const BookingClasses &bookingClass,const BookingCategory &bookingCategory,Passenger &passenger,Date dateOfReservation,string bookingMessage="BOOKING SUCCEEDED",float fare=0.0,bool bookingStatus=true);
        // Compute the fare
        virtual long long int ComputeFare() = 0;    
        // Ostream operator for printing
        friend ostream& operator<< (ostream& out, Booking& booking);   
        // static function for Unit Testing for Booking Class
        static void UnitTestingBooking(); 

     protected:
        // Constructor
        Booking();
        // Virtual Destructor
        virtual ~Booking();
};

// Inline Implementation of Constructor
inline Booking::Booking(){};

// Inline Implementation of Destructor
inline Booking::~Booking(){};

#endif

//Date problem