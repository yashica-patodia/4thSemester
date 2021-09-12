/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#include"Railways.h"


using namespace std;
Railways *Railways::sIndianRailways=0;

set<Station> Railways::sStation = set<Station> {};
map<Station, map<Station,float>> Railways::sDistStation = map<Station, map<Station, float>> {};
// set<Station>Railways::sStation=set<Station>{};
// map<Station,int>Railways::sHashMap=map<Station,int>{};
// map<pair<int,int>,double> Railways::sDistStations=map<pair<int,int>,double>{};
//Parameterized Constructor
Railways ::Railways(){};




//getting instance of singleton class
 Railways& Railways::GetRailways(){
    if (sIndianRailways)
            return *sIndianRailways;
    else
    {
        sIndianRailways=new Railways();
        return *sIndianRailways;
    } 

}

void Railways::AddStation(const Station& a){
    try
    {
        if (this->sStation.find(a) != this->sStation.end()) 
        this->sStation.insert(a);
        else 
        {
            throw Bad_Railways_Station();
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << endl;
    }
}
void Railways::AddDistance(const Station& a, const Station& b,float distance)
{
    try{
    if(a==b)
    throw Same_Station_Railways();
    if(this->sStation.find(a)==this->sStation.end())
    throw Bad_Railways_Station();
     if(this->sStation.find(b)==this->sStation.end())
    throw Bad_Railways_Station();
    if(a<b)
    this->sDistStation[a][b]=distance;
    else
    this->sDistStation[b][a]=distance;
    }
    catch(const std::exception& e){
    std::cerr << e.what() << endl;


    


}
void Railways::AddIndex(const Station &a,int index)
{
    // this->sHashMap[a]=index;
    return 0 ;
}

void Railways ::printStations(set<Station>sStation)
{

    for(auto i:sStation)
    cout<<i.GetName()<<endl;
}
void Railways ::printDistance(map<pair<int,int>,double>sDistStations)
{
    set<pair<int,int>>st;
    cout<<"Distance between pair of station"<<endl;
    for(auto i:sDistStations)
    {

        pair<int,int>pr=i.first;
        pair<int,int>pr2={pr.second,pr.first};
        if(st.find(pr)!=st.end())
            continue;
        if(st.find(pr2)!=st.end())
            continue;
        st.insert(pr);
        st.insert(pr2);
        cout<<"Distance between "<<pr.first<<" "<<"and"<<pr.second<<" "<<i.second<<endl;

        




    }

}
//how to get the name of station
double Railways::GetDistance(const Station& a, const Station& b)
{
    // Station st1(a);
    // Station st2(b);
    // // string nam1= st1.GetName();
    // // string nam2=st2.GetName();
    // // int ind1=sHashMap[nam1];
    // // int ind2=sHashMap[nam2];
    // // pair<int,int>pr={ind1,ind2};
    // // double dis=sDistStations[pr];
    // // return dis;
    // int ind1=this->sHashMap[st1];
    // int ind2=this->sHashMap[st2];
    // pair<int,int>pr={ind1,ind2};
    // double dis=this->sDistStations[pr];
    // return dis;
    try
    {
        if(a==b)
        throw Same_Station_Railways();
        if(a<b)
        return this->sDistStation[a][b];
        else
        return this->sDistStation[b][a];

    }
     catch(const std::exception& e){
    std::cerr << e.what() << endl;



}
//Overload Output to print the Indian Railways
//complete this
ostream &operator<<(ostream &os, const Railways &r)
{
    //os<<"Station Name:"<<st.name<<endl;
    os<<"Indian Railways"<<endl;
    return os;
    // os<<"List of all Stations"<<endl;
    // map<int,string>mp;
    // int cnt=0;
    // for(auto i: r.sStation)
    // {
    //     os<<i.GetName()<<endl;
    //     mp[cnt]=i.GetName();
    //     cnt++;
    // }
    // cout<<endl;
    // set<pair<int,int>>st;
    // cout<<"Distance between pair of stations"<<endl;
    
    // for(auto i:r.sDistStations)
    // {
        

    //     pair<int,int>pr=i.first;
    //     if(pr.first==pr.second)
    //     continue;
    //     pair<int,int>pr2={pr.second,pr.first};
    //     if(st.find(pr)!=st.end())
    //         continue;
    //     if(st.find(pr2)!=st.end())
    //         continue;
    //     st.insert(pr);
    //     st.insert(pr2);
        
       
    //     cout<<"Distance between "<<mp[pr.first]<<" "<<"and  "<<mp[pr.second]<<" "<<i.second<<endl;

    // }


    
    
    // return os;

}
//Destructor
Railways ::~Railways(){};



