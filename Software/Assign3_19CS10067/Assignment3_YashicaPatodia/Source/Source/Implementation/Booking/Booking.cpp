#include "Booking.h"

using namespace std;


Booking* Booking::CreateBooking(Station fromStation,Station toStation,Date dateOfBooking,const BookingClasses &bookingClass, const BookingCategory &bookingCategory,Passenger &passenger,Date dateOfReservation,string bookingMessage,float fare,bool bookingStatus)
{
                                               
                                                return bookingCategory.GenerateBooking(fromStation,toStation,dateOfBooking,bookingClass,passenger,dateOfReservation,bookingMessage,fare,bookingStatus);
}