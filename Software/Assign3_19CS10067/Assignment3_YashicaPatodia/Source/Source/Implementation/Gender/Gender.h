/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/

#ifndef GENDER_H
#define GENDER_H
#include <iostream>

using namespace std;

template<typename T>
class GenderTypes;

class Gender{
    const string& name_;

    struct MaleType{};
    struct FemaleType{};

    protected:    
        // Constructor
        Gender(const string& name);
         // Destructor
        virtual ~Gender();
    public:
        // Get Name of Gender
        const string& GetName() const;
        // Checking if class is Male
        static bool IsMale(const Gender&);

        // Enumerated Types
        typedef GenderTypes<MaleType> Male;
        typedef GenderTypes<FemaleType> Female;
};

// Inline Implementation of Gender Constructor
inline Gender::Gender(const string& name):name_(name){};

// Inline Implementation of GetName in Gender
inline const string& Gender::GetName() const 
{
    return name_;
}

// Inline Implementation of Gender Destructor
inline Gender::~Gender(){};

template<typename T>
class GenderTypes : public Gender{
    static const string sName;

    GenderTypes(const string& name= GenderTypes<T>::sName);
    ~GenderTypes();

    public: 
        // Singleton object
        static const GenderTypes<T>& Type();
};

// Inline Implementation of Constructor 
template<typename T>
inline GenderTypes<T>::GenderTypes(const string& name): Gender(name) {};
// Inline Implementation of Destructor 
template<typename T>
inline GenderTypes<T>::~GenderTypes() {};
// Inline Implementation of IsMale in Gender Class
inline bool Gender::IsMale(const Gender& g)
{
    return &g == &Gender::Male::Type();
}

#endif