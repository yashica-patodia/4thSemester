/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#include"Station.h"

using namespace std;

// Constructor for Station
Station::Station(string name):name_(name){};
Station::Station(const Station &s): name_(s.name_){};
Station ::~Station(){};
string Station:: GetName()
{
    return name_;
}
//Overload Output to print the name of the station
ostream &operator<<(ostream &os, const Station &st)
{
    os<<"[Station Name:"<<st.name_<<"]"<<endl;
    return os;

}
  // Get Distance of the station from another station
float Station::GetDistance(const Station &s)
{
     Railways& rail = const_cast<Railways&>(Railways::GetRailways());
    return rail.GetDistance(*this, s);

}
 //Copy assignment opertor
Station&Station::operator=(const Station &s)
{
    name_=s.name_;
    return *this;

}