#ifndef LADIESCONCESSION_H
#define LADIESCONCESSION_H

#include <iostream>
#include "../Gender/Gender.h"
#include "Concession.h"
#include "../Passenger.h"


using namespace std;

class LadiesConcession : public Concession{
    private:
    // Constructor
    LadiesConcession();
    // Destructor
    ~LadiesConcession();
    public:
        // To return reference of the singleton class
        static const LadiesConcession& Type();
        //  function from Abstract Class
        float GetConcessionFactor() const;
        // function from Abstract Class
        bool IsEligible() const;
        // Overriding Function from Abstract Class
        float GetConcessionFactor(const Passenger& passenger) const;
        // Overriding Function from Abstract Class
        bool IsEligible(const Passenger& passenger) const;
};

// Inline Implementation of Constructor
inline LadiesConcession::LadiesConcession(){};
// Inline Implementation of Destructor
inline LadiesConcession::~LadiesConcession(){};

#endif