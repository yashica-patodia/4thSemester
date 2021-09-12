#ifndef _GENERALCONCESSION_H
#define _GENERALCONCESSION_H

#include <iostream>
#include "Concession.h"

using namespace std;

class GeneralConcession : public Concession{
    private:
    // Constructor
    GeneralConcession();
    // Destructor
    ~GeneralConcession();
    public:
        // To return reference of the singleton class
        static const GeneralConcession& Type();
        //  function from Abstract Class
        float GetConcessionFactor() const;
        // function from Abstract Class
        bool IsEligible() const;
};

// Inline Implementation of Constructor
inline GeneralConcession::GeneralConcession(){};
// Inline Implementation of Destructor
inline GeneralConcession::~GeneralConcession(){};

#endif