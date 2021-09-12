#ifndef _CONCESSION_H
#define _CONCESSION_H
#include <iostream>

using namespace std;

class Concession{
    public: 
        // return Concession Factor
        virtual float GetConcessionFactor() const = 0;
        // return  eligibilty of a Booking for the concession
        virtual bool IsEligible() const = 0;
    protected:
        // Constructor for the Abstract Class
        Concession();

        // Virtual Destructor for the Abstract Class
        virtual ~Concession();
};

// Inline Implementation of Constructor
inline Concession::Concession(){};
// Inline Implementation of Destructor
inline Concession::~Concession(){};

#endif