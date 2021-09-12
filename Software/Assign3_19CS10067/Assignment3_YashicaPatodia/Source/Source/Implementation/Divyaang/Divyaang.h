/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/

#ifndef _DIVYAANG_H
#define _DIVYAANG_H
#include "../BookingClassesT/BookingClasses.h"
#include <iostream>
#include <map>

using namespace std;

template<typename T>
class DivyaangType;
class Divyaang{
    private:
        const string& name_;
        struct BlindType{};
        struct OrthoHandicappedType{};
        struct CancerType{};
        struct TBType{};
    protected:
        // Constructor
        Divyaang(const string& name);
        // Destructor 
        virtual ~Divyaang();
    public:
        //  Return name of the class
        const string& GetName() const;
        // Return concession for  Booking Classes
        virtual const float GetConcessionFactor(const BookingClasses& bookingClass) const = 0;
        // Enumerate Subclasses
        typedef DivyaangType<BlindType> Blind;
        typedef DivyaangType<OrthoHandicappedType> OrthoHandicapped;
        typedef DivyaangType<CancerType> CancerPatient;
        typedef DivyaangType<TBType> TBPatient;

};
// Inline implementation of Constructor
inline Divyaang::Divyaang(const string& name):name_(name){};
// Inline Implementation of GetName
inline const string& Divyaang::GetName() const{return name_;}
// Inline Implementation of Destructor
inline Divyaang::~Divyaang(){};

template<typename T>
class DivyaangType : public Divyaang{
    private:
        static const string sName;
        static map<string, float> sConcessionFactor;
        
        //private constructor
        DivyaangType(const string& name= DivyaangType<T>::sName);
        //private destructor
        ~DivyaangType();
    public:
        // Get Instance of the Divyaang Type
        static const DivyaangType<T>& Type();
        // Get Concession Factor
        const float GetConcessionFactor(const BookingClasses& bookingClass) const;
};

// Inline Implementation of Constructor
template<typename T>
inline DivyaangType<T>::DivyaangType(const string& name):Divyaang(name){};
// Inline Implementation of GetConcessionFactor function
template<typename T>
inline const float DivyaangType<T>::GetConcessionFactor(const BookingClasses& bookingClass) const
{
    return sConcessionFactor[bookingClass.GetName()];
}
// Inline Implementation of Destructor
template<typename T>
inline DivyaangType<T>::~DivyaangType(){};
#endif