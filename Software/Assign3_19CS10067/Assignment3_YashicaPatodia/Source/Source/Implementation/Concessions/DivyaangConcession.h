#ifndef _DIVYAANGCONCESSION_H
#define _DIVYAANGCONCESSION_H

#include <iostream>
#include "Concession.h"
#include "../Passenger.h"
#include "../BookingClassesT/BookingClasses.h"
#include "../Divyaang/Divyaang.h"

using namespace std;

class DivyaangConcession : public Concession{
    private:
    // Constructor 
    DivyaangConcession();
    // Destructor
    ~DivyaangConcession();

    public:
        // To return reference of the singleton class
        static const DivyaangConcession& Type();
        //  function from Abstract Class
        float GetConcessionFactor() const;
        //  function from Abstract Class
        bool IsEligible() const;
        // Overiding Function from Abstract Class to use in booking category
        float GetConcessionFactor(const Passenger& passenger,  const Divyaang& disabilty,const BookingClasses& bookingClass) const;
        // Overiding Function from Abstract Class
        bool IsEligible(const Passenger& passenger, const Divyaang& disabilty) const;
};

// Inline Implementation of Constructor
inline DivyaangConcession::DivyaangConcession(){};
// Inline Implementation of Destructor
inline DivyaangConcession::~DivyaangConcession(){};

#endif