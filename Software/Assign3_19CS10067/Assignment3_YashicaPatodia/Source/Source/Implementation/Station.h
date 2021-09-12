/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#ifndef _STATION_H
#define _STATION_H
#include<iostream>
#include"Railways.h"
using namespace std;
class Station
{
 private:
    string name_;

public:
    // Constructors
    Station(string name);      // General Constructor
    Station(const Station &s); // Copy Constructor
    // Get Name of the station
    string GetName();
    // Get Distance of the station from another station
    float GetDistance(const Station &s);
    //Ouput stream operator
    friend ostream &operator<<(ostream &os, const Station &st);
    //Copy assignment opertor
    Station& operator= (const Station& f);

    // Equal To Operator(Utilization Operator)
    friend bool operator==(const Station& a, const Station& b);

        // Less than Operator(Utilozation operator)
    friend bool operator<(const Station& a, const Station& b);

    //static function for unit testing
    static void UTStation();

    //Destructors
    ~Station();
};
//Inline functions
inline bool operator==(const Station& a, const Station& b){
    return a.name_ == b.name_;
}

inline bool operator<(const Station& a, const Station& b){
    return a.name_ < b.name_;
}
#endif