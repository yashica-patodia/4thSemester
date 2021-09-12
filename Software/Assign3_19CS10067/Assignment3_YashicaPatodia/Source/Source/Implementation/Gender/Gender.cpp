/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/

#include "Gender.h"
using namespace std;



// Type Function to get instance of the singleton SubClass of Gender
template<typename T>
const GenderTypes<T>& GenderTypes<T>::Type(){
    static const GenderTypes<T> obj; 
    return obj;
}
// Names defined as static constants
template<>
const string Gender::Male::sName = "Male";
template<>
const string Gender::Female::sName = "Female";
