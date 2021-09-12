

#include "GeneralConcession.h"

using namespace std;

// Returns reference to the singleton class
const GeneralConcession& GeneralConcession::Type(){
    static const GeneralConcession obj;
    return obj;
}
//  function from abstract Class
bool GeneralConcession::IsEligible() const{
    return true;
}
//  function from abstract class
float GeneralConcession::GetConcessionFactor() const{
    return 0.0;
}

