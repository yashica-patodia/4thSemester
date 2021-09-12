/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#ifndef _RAILWAYS_H
#define _RAILWAYS_H

#include<iostream>
#include<vector>
#include<map>
#include<set>
#include "Station.h"
#include "Exceptions/ExceptionHeaders.h"
using namespace std;
class Railways
{
    
    // static set<Station>sStation;
    // static map<Station,int>sHashMap;//maping stationn name to index
    // static map<pair<int,int>,double>sDistStations;//
    static set<Station> sStation;
    static map<Station, map<Station,float>> sDistStation;
    static Railways *sIndianRailways;
    // constructors and destructors for singleton class
    Railways();
    ~Railways();

    public:
    //Get instance of singleton class
    static  Railways& GetRailways();
    //output ostream
    friend ostream &operator<<(ostream &os, const Railways &r);
    //Distance between two stations
    double GetDistance(const Station& a, const Station& b);
    //Copy Assignment operator
    Railways &operator=(const Railways &r);
     // Utility Function: Adding a Station
    void AddStation(const Station& a);
    //adding distance
    void AddDistance(const Station& a,const Station& b,float distance);
    //add index
    void AddIndex(const Station &a,int index);

    //Utilization functions
    void printStations(set<Station>sStation);
    void printDistance(map<pair<int,int>,double>sDistStations);
    //Unit Testing functions
    static void UTRailways();
};
#endif
