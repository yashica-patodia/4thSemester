#ifndef SENIORCONCESSION_H
#define SENIORCONCESSION_H

#include <iostream>
#include "Concession.h"
#include "../Passenger.h"
#include "../Gender/Gender.h"
using namespace std;

class SeniorConcession : public Concession{
    private:
    SeniorConcession();
    ~SeniorConcession();
    public:
        static const SeniorConcession& Type();

        float GetConcessionFactor() const;
        bool IsEligible() const;
        float GetConcessionFactor(const Passenger& passenger) const;
        bool IsEligible(const Passenger& passenger) const;
};

// Inline Implementation of Constructor
inline SeniorConcession::SeniorConcession(){};
// Inline Implementation of Destructor
inline SeniorConcession::~SeniorConcession(){};

#endif