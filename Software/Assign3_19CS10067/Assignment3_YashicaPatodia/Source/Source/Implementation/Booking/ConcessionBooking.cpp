#include "ConcessionBooking.h"

using namespace std;

ConcessionBooking::ConcessionBooking(Station fromStation,Station toStation,Date dateOfBooking,const BookingClasses &bookingClass,const BookingCategory &bookingCategory, Passenger &passenger,Date dateOfReservation,string bookingMessage, bool bookingStatus, float fare,float concessionFactor): fromStation_(fromStation), toStation_(toStation), dateOfBooking_(dateOfBooking),bookingClass_(bookingClass),bookingCategory_(bookingCategory),passenger_(passenger), dateOfReservation_(dateOfReservation),bookingMessage_(bookingMessage), bookingStatus_(bookingStatus),fare_(fare), concessionFactor_(concessionFactor), PNR_(Booking::sBookingPNRSerial++)
{
                                            fare_ = ComputeFare();
                                            Booking::sBookings.push_back(this);
                               
                                            //  cout << bookingMessage_ << '\n';
                                            // cout << "PNR Number = " << PNR_ << '\n';
                                            // cout << "From Station = " << fromStation_.GetName() << '\n';
                                            // cout << "To Station = " << toStation_.GetName() << '\n';
                                            // cout << "Booking Date = " << dateOfReservation_ << '\n';
                                            // cout << "Travel Date = " << dateOfBooking_ << '\n';
                                            // cout << "Travel Class = " << bookingClass_.GetName() << '\n';
                                            // cout << "\t: Mode: ";
                                            // if (bookingClass_.IsSitting()) cout << "Sitting";
                                            // else cout << "Sleeping";
                                            // cout << '\n';
                                            // cout << "\t: Comfort: ";
                                            // if (bookingClass_.IsAC()) cout << "AC";
                                            // else cout << "Non-AC";
                                            // cout << '\n';
                                            // cout << "\t: Bunks: " << bookingClass_.GetNumberOfTiers() << '\n';
                                            // cout << "\t: Luxury: ";
                                            // if (bookingClass_.IsLuxury()) cout << "Yes";
                                            // else cout << "No";
                                            // cout << '\n';
                                            // cout << "Travel Category = " << bookingCategory_.GetName() << '\n'; 
                                            // cout << "Fare = " << fare_ << '\n';

};                                                                                                      // General Constructor
// ConcessionBooking::ConcessionBooking(Station fromStation, Station toStation,Date dateOfBooking, Date dateOfReservation,const BookingClasses &bookingClass,const BookingCategory &bookingCategory, Passenger &passenger, float concessionFactor,bool bookingStatus,string bookingMessage,float fare): fromStation_(fromStation), toStation_(toStation),DateOfBooking_(dateOfBooking), dateOfReservation_(dateOfReservation), bookingClass_(bookingClass), bookingCategory_(bookingCategory), passenger_(passenger), concessionFactor_(concessionFactor), bookingStatus_(bookingStatus), bookingMessage_(bookingMessage), fare_(fare), PNR_(Booking::sBookingPNRSerial++)
//  {
//                                             fare_ = ComputeFare();
//                                             Booking::sBookings.push_back(this);
//  }; 
long long int ConcessionBooking::ComputeFare(){
    float travelDistance = fromStation_.GetDistance(toStation_);
    float baseFare = travelDistance*Booking::sBaseFarePerKM;
    float loadedFare = baseFare*bookingClass_.GetLoadFactor();
    float concessionFare = loadedFare*(1-concessionFactor_);
    concessionFare += bookingClass_.GetReservationCharge();
   long long  int finalFare = round(concessionFare);
    return finalFare;
}
