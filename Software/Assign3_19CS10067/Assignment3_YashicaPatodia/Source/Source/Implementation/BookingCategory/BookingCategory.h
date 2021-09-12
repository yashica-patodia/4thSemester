/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#ifndef  _BOOKINGCATEGORY_H
#define _BOOKINGCATEGORY_H
#include "../BookingClassesT/BookingClasses.h"
#include "../Passenger.h"

#include "../Booking/GetBookingHeaders.h"
#include "../Concessions/GetConcessionHeaders.h"
#include "../Divyaang/Divyaang.h"
#include "../Booking/Booking.h"
#include "../Booking/ConcessionBooking.h"
#include "../Booking/TatkalBooking.h"

#include<iostream>
using namespace std;

template<typename T>
class BookingCategoryType;

class BookingCategory{
    private:

        const string& name_;
        struct GeneralType{};
        struct LadiesType{};
        struct SeniorCitizenType{};
        struct DivyaangType{};
        struct TatkalType{};
        struct PremiumTatkalType{};
   
     protected:
        // Constructor 
        BookingCategory(const string& name);  
        // Destructor
        virtual ~BookingCategory();
    public:
        // return reference to name
        const string& GetName() const;
        //  return Concession Factor 
        virtual const float GetConcessionFactor() const= 0;
        //  Generate Booking 
        virtual  Booking* GenerateBooking(Station fromStation,Station toStation,Date dateOfBooking,const BookingClasses &bookingClass,Passenger &passenger,Date dateOfReservation,string bookingMessage,float fare,bool bookingStatus) const = 0;
        typedef BookingCategoryType<GeneralType> General;
        typedef BookingCategoryType<LadiesType> Ladies;
        typedef BookingCategoryType<SeniorCitizenType> SeniorCitizen;
        typedef BookingCategoryType<DivyaangType> DivyaangCategory;
        typedef BookingCategoryType<TatkalType> Tatkal;
        typedef BookingCategoryType<PremiumTatkalType> PremiumTatkal;
        
};

//  constructor
BookingCategory::BookingCategory(const string& name):name_(name){};
// Inline GetName Definition
const string& BookingCategory::GetName() const{return name_;}
// Destructor 
BookingCategory::~BookingCategory(){};


template<typename T>
class BookingCategoryType : public BookingCategory{
    private:
    static const string sName;
    static const float sConcessionFactor;
    BookingCategoryType(const string& name = BookingCategoryType<T>::sName);
    ~BookingCategoryType();

    public:
        // Get Instance of the Singleton Class
        static const BookingCategoryType<T>& Type();
        // Definition of GetConcessionFactor
        const float GetConcessionFactor() const;
        // Generate Booking
         Booking* GenerateBooking(Station fromStation,Station toStation,Date dateOfBooking,const BookingClasses &bookingClass,Passenger &passenger,Date dateOfReservation,string bookingMessage,float fare,bool bookingStatus) const;
};

// Inline Implementation of Constructor
template<typename T>
inline BookingCategoryType<T>::BookingCategoryType(const string& name ):BookingCategory(name){};
// Inline Implementation for GetConcession
template<typename T>
inline const float BookingCategoryType<T>::GetConcessionFactor() const{return sConcessionFactor;}

// Inline Implemetation of Destructor
template<typename T>
inline BookingCategoryType<T>::~BookingCategoryType(){};
#endif