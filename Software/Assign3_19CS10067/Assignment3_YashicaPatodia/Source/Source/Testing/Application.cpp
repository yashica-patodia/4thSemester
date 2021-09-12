/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
// */
// #include "../Implementation/Date.cpp"
// #include "../Implementation/Station.cpp"
// #include "../Implementation/Railways.cpp"
// #include "../Implementation/Passenger.cpp"
#include "../Implementation/BookingHeaders.h"
// #include "../Implementation/Booking.cpp"


#include<iostream>
#include <vector>
#include<set>
using namespace std;

// Booking Class Controls

float Booking::sBaseFarePerKM = 0.5;
long long int Booking::sBookingPNRSerial = 1;
vector<Booking*> Booking::sBookings;
float Booking::sACSurcharge = 50.0;
float Booking::sLuxuryTaxPercent = 0.25;

//Initializing the static constants in the Application so that it can be changed easily from the application interface
// set<Station> Railways::sStation;
// map<Station,int>Railways:: sHashMap;
// map<pair<int,int>,double> Railways::sDistStations;



 void TestApp()
 {
//     Station s1("Mumbai");
//     Station s2("Delhi");
//     Station s3("Bangalore");
//     Station s4("Kolkata");
//     Station s5("Chennai");
//     Railways::sStation.insert(s1);
//     Railways::sStation.insert(s2);
//     Railways::sStation.insert(s3);
//     Railways::sStation.insert(s4);
//     Railways::sStation.insert(s5);
//     int index=0;
//     for(auto i:Railways::sStation)
//     {
//         Railways::sHashMap[i]=index++;
//     }
//    double mat[5][5]={{0,1447,981,2014,1338},{1447,0,2150,1472,2180},{981,2150,0,1871,350},{2014,1472,1871,0,1659},{1338,2180,350,1659,0}};
//    for(int i=0;i<5;i++)
//    {
//        for(int j=0;j<5;j++)
//        {
//            pair<int,int>pr={i,j};
//           Railways::sDistStations[pr]=mat[i][j];
//        }
//    }
//    Railways::GetRailways();


    Railways &railways = Railways::GetRailways();
    
    railways.AddStation(Station("Mumbai"));
    railways.AddStation(Station("Delhi"));
    railways.AddStation(Station("Bangalore"));
    railways.AddStation(Station("Kolkata"));
    railways.AddStation(Station("Chennai"));

    railways.AddDistance(Station("Mumbai"), Station("Delhi"), 1447.0);
    railways.AddDistance(Station("Mumbai"), Station("Bangalore"), 981.0);
    railways.AddDistance(Station("Mumbai"), Station("Kolkata"), 2014.0);
    railways.AddDistance(Station("Mumbai"), Station("Chennai"), 1338.0);
    railways.AddDistance(Station("Delhi"), Station("Bangalore"), 2150.0);
    railways.AddDistance(Station("Delhi"), Station("Kolkata"), 1472.0);
    railways.AddDistance(Station("Delhi"), Station("Chennai"), 2180.0);
    railways.AddDistance(Station("Bangalore"), Station("Kolkata"), 1871.0);
    railways.AddDistance(Station("Bangalore"), Station("Chennai"), 350.0);
    railways.AddDistance(Station("Kolkata"), Station("Chennai"), 1659.0);


}

// //  void BookingApplication1()
// //  {
//      // Bookings by different booking classes
// // // <BookingClasses>::Type() returns the constant object of the respective type

// // Booking b1(Station("Mumbai"), Station("Delhi"), Date(15, 2, 2021), ACFirstClass::Type());
// // Booking b2(Station("Kolkata"), Station("Delhi"), Date(5, 3, 2021), AC2Tier::Type());
// // Booking b3(Station("Mumbai"), Station("Kolkata"), Date(17, 3, 2021), FirstClass::Type());
// // Booking b4(Station("Mumbai"), Station("Delhi"), Date(23, 3, 2021), AC3Tier::Type());
// // Booking b5(Station("Chennai"), Station("Delhi"), Date(25, 4, 2021), ACChairCar::Type());
// // Booking b6(Station("Chennai"), Station("Kolkata"), Date(7, 5, 2021), Sleeper::Type());
// // Booking b7(Station("Mumbai"), Station("Delhi"), Date(19, 5, 2021), SecondSitting::Type());
// // Booking b8(Station("Delhi"), Station("Mumbai"), Date(22, 5, 2021), SecondSitting::Type());
// // // Output the bookings done where sBookings is the collection of bookings done
// // vector<Booking>::iterator it;
// // for (it = Booking::sBookings.begin(); it < Booking::sBookings.end(); ++it) 
// // {
// // cout << (*it);
// // }
// // return;

//  //}
// //  void ExhaustiveBookingApplication2() {

// // // Bookings by different booking classes
// // // <BookingClasses>::Type() returns the constant object of the respective type
// // // for(int i=0;i<8;i++)
// // // Booking::sBookings.pop_back();
// // Booking b1(Station("Mumbai"), Station("Delhi"), Date(17, 3, 2017), AC2Tier::Type());
// // Booking b2(Station("Mumbai"), Station("Delhi"), Date(19, 1, 2016), AC3Tier::Type());
// // Booking b3(Station("Mumbai"), Station("Delhi"), Date(15, 2, 2011), ACChairCar::Type());
// // Booking b4(Station("Mumbai"), Station("Delhi"), Date(8, 7, 2023), ACFirstClass::Type());
// // Booking b5(Station("Mumbai"), Station("Delhi"), Date(5, 8, 2019), FirstClass::Type());
// // Booking b6(Station("Mumbai"), Station("Delhi"), Date(23, 12, 2025), SecondSitting::Type());
// // Booking b7(Station("Mumbai"), Station("Delhi"), Date(17, 8, 2017), Sleeper::Type());
// // Booking b8(Station("Mumbai"), Station("Bangalore"), Date(20, 11, 2015), AC2Tier::Type());
// // Booking b9(Station("Mumbai"), Station("Bangalore"), Date(10, 13, 2024), AC3Tier::Type());
// Booking b10(Station("Mumbai"), Station("Bangalore"), Date(31, 11, 2013), ACChairCar::Type());
// Booking b11(Station("Mumbai"), Station("Bangalore"), Date(22, 4, 2011), ACFirstClass::Type());
// Booking b12(Station("Mumbai"), Station("Bangalore"), Date(24, 12, 2021), FirstClass::Type());
// Booking b13(Station("Mumbai"), Station("Bangalore"), Date(10, 6, 2018), SecondSitting::Type());
// Booking b14(Station("Mumbai"), Station("Bangalore"), Date(10, 12, 2019), Sleeper::Type());
// Booking b15(Station("Mumbai"), Station("Kolkata"), Date(17, 4, 2019), AC2Tier::Type());
// Booking b16(Station("Mumbai"), Station("Kolkata"), Date(14, 1, 2018), AC3Tier::Type());
// Booking b17(Station("Mumbai"), Station("Kolkata"), Date(28, 7, 2020), ACChairCar::Type());
// Booking b18(Station("Mumbai"), Station("Kolkata"), Date(20, 4, 2010), ACFirstClass::Type());
// Booking b19(Station("Mumbai"), Station("Kolkata"), Date(19, 13, 2022), FirstClass::Type());
// Booking b20(Station("Mumbai"), Station("Kolkata"), Date(3, 12, 2021), SecondSitting::Type());
// Booking b21(Station("Mumbai"), Station("Kolkata"), Date(18, 2, 2015), Sleeper::Type());
// Booking b22(Station("Mumbai"), Station("Chennai"), Date(10, 6, 2025), AC2Tier::Type());
// Booking b23(Station("Mumbai"), Station("Chennai"), Date(15, 1, 2017), AC3Tier::Type());
// Booking b24(Station("Mumbai"), Station("Chennai"), Date(23, 12, 2025), ACChairCar::Type());
// Booking b25(Station("Mumbai"), Station("Chennai"), Date(15, 10, 2010), ACFirstClass::Type());
// Booking b26(Station("Mumbai"), Station("Chennai"), Date(2, 8, 2013), FirstClass::Type());
// Booking b27(Station("Mumbai"), Station("Chennai"), Date(11, 6, 2022), SecondSitting::Type());
// Booking b28(Station("Mumbai"), Station("Chennai"), Date(13, 6, 2017), Sleeper::Type());
// Booking b29(Station("Delhi"), Station("Mumbai"), Date(21, 10, 2016), AC2Tier::Type());
// Booking b30(Station("Delhi"), Station("Mumbai"), Date(29, 9, 2024), AC3Tier::Type());
// Booking b31(Station("Delhi"), Station("Mumbai"), Date(5, 4, 2019), ACChairCar::Type());
// Booking b32(Station("Delhi"), Station("Mumbai"), Date(26, 13, 2011), ACFirstClass::Type());
// Booking b33(Station("Delhi"), Station("Mumbai"), Date(28, 7, 2019), FirstClass::Type());
// Booking b34(Station("Delhi"), Station("Mumbai"), Date(6, 12, 2019), SecondSitting::Type());
// Booking b35(Station("Delhi"), Station("Mumbai"), Date(29, 3, 2010), Sleeper::Type());
// Booking b36(Station("Delhi"), Station("Bangalore"), Date(27, 5, 2025), AC2Tier::Type());
// Booking b37(Station("Delhi"), Station("Bangalore"), Date(13, 3, 2024), AC3Tier::Type());
// Booking b38(Station("Delhi"), Station("Bangalore"), Date(21, 7, 2020), ACChairCar::Type());
// Booking b39(Station("Delhi"), Station("Bangalore"), Date(19, 4, 2022), ACFirstClass::Type());
// Booking b40(Station("Delhi"), Station("Bangalore"), Date(14, 6, 2025), FirstClass::Type());
// Booking b41(Station("Delhi"), Station("Bangalore"), Date(14, 3, 2017), SecondSitting::Type());
// Booking b42(Station("Delhi"), Station("Bangalore"), Date(17, 9, 2024), Sleeper::Type());
// Booking b43(Station("Delhi"), Station("Kolkata"), Date(25, 1, 2011), AC2Tier::Type());
// Booking b44(Station("Delhi"), Station("Kolkata"), Date(26, 11, 2025), AC3Tier::Type());
// Booking b45(Station("Delhi"), Station("Kolkata"), Date(27, 5, 2012), ACChairCar::Type());
// Booking b46(Station("Delhi"), Station("Kolkata"), Date(20, 7, 2021), ACFirstClass::Type());
// Booking b47(Station("Delhi"), Station("Kolkata"), Date(30, 7, 2019), FirstClass::Type());
// Booking b48(Station("Delhi"), Station("Kolkata"), Date(9, 13, 2017), SecondSitting::Type());
// Booking b49(Station("Delhi"), Station("Kolkata"), Date(18, 3, 2013), Sleeper::Type());
// Booking b50(Station("Delhi"), Station("Chennai"), Date(26, 11, 2022), AC2Tier::Type());
// Booking b51(Station("Delhi"), Station("Chennai"), Date(29, 3, 2015), AC3Tier::Type());
// Booking b52(Station("Delhi"), Station("Chennai"), Date(21, 8, 2020), ACChairCar::Type());
// Booking b53(Station("Delhi"), Station("Chennai"), Date(23, 9, 2015), ACFirstClass::Type());
// Booking b54(Station("Delhi"), Station("Chennai"), Date(14, 6, 2011), FirstClass::Type());
// Booking b55(Station("Delhi"), Station("Chennai"), Date(25, 10, 2019), SecondSitting::Type());
// Booking b56(Station("Delhi"), Station("Chennai"), Date(5, 11, 2018), Sleeper::Type());
// Booking b57(Station("Bangalore"), Station("Mumbai"), Date(18, 9, 2022), AC2Tier::Type());
// Booking b58(Station("Bangalore"), Station("Mumbai"), Date(6, 4, 2024), AC3Tier::Type());
// Booking b59(Station("Bangalore"), Station("Mumbai"), Date(19, 12, 2012), ACChairCar::Type());
// Booking b60(Station("Bangalore"), Station("Mumbai"), Date(17, 9, 2020), ACFirstClass::Type());
// Booking b61(Station("Bangalore"), Station("Mumbai"), Date(4, 5, 2011), FirstClass::Type());
// Booking b62(Station("Bangalore"), Station("Mumbai"), Date(13, 10, 2023), SecondSitting::Type());
// Booking b63(Station("Bangalore"), Station("Mumbai"), Date(6, 10, 2019), Sleeper::Type());
// Booking b64(Station("Bangalore"), Station("Delhi"), Date(8, 4, 2021), AC2Tier::Type());
// Booking b65(Station("Bangalore"), Station("Delhi"), Date(29, 1, 2011), AC3Tier::Type());
// Booking b66(Station("Bangalore"), Station("Delhi"), Date(3, 13, 2018), ACChairCar::Type());
// Booking b67(Station("Bangalore"), Station("Delhi"), Date(6, 11, 2017), ACFirstClass::Type());
// Booking b68(Station("Bangalore"), Station("Delhi"), Date(24, 5, 2013), FirstClass::Type());
// Booking b69(Station("Bangalore"), Station("Delhi"), Date(24, 7, 2023), SecondSitting::Type());
// Booking b70(Station("Bangalore"), Station("Delhi"), Date(10, 1, 2024), Sleeper::Type());
// Booking b71(Station("Bangalore"), Station("Kolkata"), Date(24, 12, 2017), AC2Tier::Type());
// Booking b72(Station("Bangalore"), Station("Kolkata"), Date(3, 12, 2018), AC3Tier::Type());
// Booking b73(Station("Bangalore"), Station("Kolkata"), Date(11, 4, 2014), ACChairCar::Type());
// Booking b74(Station("Bangalore"), Station("Kolkata"), Date(8, 11, 2015), ACFirstClass::Type());
// Booking b75(Station("Bangalore"), Station("Kolkata"), Date(28, 8, 2021), FirstClass::Type());
// Booking b76(Station("Bangalore"), Station("Kolkata"), Date(15, 9, 2024), SecondSitting::Type());
// Booking b77(Station("Bangalore"), Station("Kolkata"), Date(24, 6, 2011), Sleeper::Type());
// Booking b78(Station("Bangalore"), Station("Chennai"), Date(12, 7, 2025), AC2Tier::Type());
// Booking b79(Station("Bangalore"), Station("Chennai"), Date(22, 5, 2017), AC3Tier::Type());
// Booking b80(Station("Bangalore"), Station("Chennai"), Date(12, 8, 2012), ACChairCar::Type());
// Booking b81(Station("Bangalore"), Station("Chennai"), Date(6, 11, 2024), ACFirstClass::Type());
// Booking b82(Station("Bangalore"), Station("Chennai"), Date(27, 2, 2018), FirstClass::Type());
// Booking b83(Station("Bangalore"), Station("Chennai"), Date(13, 13, 2021), SecondSitting::Type());
// Booking b84(Station("Bangalore"), Station("Chennai"), Date(7, 5, 2015), Sleeper::Type());
// Booking b85(Station("Kolkata"), Station("Mumbai"), Date(29, 11, 2016), AC2Tier::Type());
// Booking b86(Station("Kolkata"), Station("Mumbai"), Date(6, 13, 2010), AC3Tier::Type());
// Booking b87(Station("Kolkata"), Station("Mumbai"), Date(8, 10, 2024), ACChairCar::Type());
// Booking b88(Station("Kolkata"), Station("Mumbai"), Date(24, 7, 2024), ACFirstClass::Type());
// Booking b89(Station("Kolkata"), Station("Mumbai"), Date(6, 5, 2024), FirstClass::Type());
// Booking b90(Station("Kolkata"), Station("Mumbai"), Date(3, 9, 2020), SecondSitting::Type());
// Booking b91(Station("Kolkata"), Station("Mumbai"), Date(26, 1, 2010), Sleeper::Type());
// Booking b92(Station("Kolkata"), Station("Delhi"), Date(26, 4, 2019), AC2Tier::Type());
// Booking b93(Station("Kolkata"), Station("Delhi"), Date(30, 12, 2017), AC3Tier::Type());
// Booking b94(Station("Kolkata"), Station("Delhi"), Date(24, 6, 2018), ACChairCar::Type());
// Booking b95(Station("Kolkata"), Station("Delhi"), Date(15, 3, 2016), ACFirstClass::Type());
// Booking b96(Station("Kolkata"), Station("Delhi"), Date(1, 11, 2021), FirstClass::Type());
// Booking b97(Station("Kolkata"), Station("Delhi"), Date(19, 9, 2022), SecondSitting::Type());
// Booking b98(Station("Kolkata"), Station("Delhi"), Date(15, 8, 2014), Sleeper::Type());
// Booking b99(Station("Kolkata"), Station("Bangalore"), Date(19, 5, 2023), AC2Tier::Type());
// Booking b100(Station("Kolkata"), Station("Bangalore"), Date(22, 10, 2024), AC3Tier::Type());
// Booking b101(Station("Kolkata"), Station("Bangalore"), Date(21, 9, 2025), ACChairCar::Type());
// Booking b102(Station("Kolkata"), Station("Bangalore"), Date(13, 9, 2024), ACFirstClass::Type());
// Booking b103(Station("Kolkata"), Station("Bangalore"), Date(13, 12, 2024), FirstClass::Type());
// Booking b104(Station("Kolkata"), Station("Bangalore"), Date(2, 6, 2017), SecondSitting::Type());
// Booking b105(Station("Kolkata"), Station("Bangalore"), Date(20, 8, 2010), Sleeper::Type());
// Booking b106(Station("Kolkata"), Station("Chennai"), Date(16, 9, 2025), AC2Tier::Type());
// Booking b107(Station("Kolkata"), Station("Chennai"), Date(15, 12, 2021), AC3Tier::Type());
// Booking b108(Station("Kolkata"), Station("Chennai"), Date(18, 1, 2011), ACChairCar::Type());
// Booking b109(Station("Kolkata"), Station("Chennai"), Date(30, 13, 2016), ACFirstClass::Type());
// Booking b110(Station("Kolkata"), Station("Chennai"), Date(10, 10, 2024), FirstClass::Type());
// Booking b111(Station("Kolkata"), Station("Chennai"), Date(17, 11, 2019), SecondSitting::Type());
// Booking b112(Station("Kolkata"), Station("Chennai"), Date(20, 13, 2018), Sleeper::Type());
// Booking b113(Station("Chennai"), Station("Mumbai"), Date(3, 6, 2017), AC2Tier::Type());
// Booking b114(Station("Chennai"), Station("Mumbai"), Date(14, 5, 2015), AC3Tier::Type());
// Booking b115(Station("Chennai"), Station("Mumbai"), Date(31, 1, 2015), ACChairCar::Type());
// Booking b116(Station("Chennai"), Station("Mumbai"), Date(17, 2, 2021), ACFirstClass::Type());
// Booking b117(Station("Chennai"), Station("Mumbai"), Date(27, 7, 2021), FirstClass::Type());
// Booking b118(Station("Chennai"), Station("Mumbai"), Date(28, 11, 2024), SecondSitting::Type());
// Booking b119(Station("Chennai"), Station("Mumbai"), Date(6, 13, 2022), Sleeper::Type());
// Booking b120(Station("Chennai"), Station("Delhi"), Date(18, 7, 2023), AC2Tier::Type());
// Booking b121(Station("Chennai"), Station("Delhi"), Date(11, 1, 2011), AC3Tier::Type());
// Booking b122(Station("Chennai"), Station("Delhi"), Date(9, 13, 2017), ACChairCar::Type());
// Booking b123(Station("Chennai"), Station("Delhi"), Date(24, 6, 2025), ACFirstClass::Type());
// Booking b124(Station("Chennai"), Station("Delhi"), Date(14, 6, 2013), FirstClass::Type());
// Booking b125(Station("Chennai"), Station("Delhi"), Date(30, 9, 2024), SecondSitting::Type());
// Booking b126(Station("Chennai"), Station("Delhi"), Date(25, 7, 2014), Sleeper::Type());
// Booking b127(Station("Chennai"), Station("Bangalore"), Date(20, 13, 2010), AC2Tier::Type());
// Booking b128(Station("Chennai"), Station("Bangalore"), Date(23, 9, 2010), AC3Tier::Type());
// Booking b129(Station("Chennai"), Station("Bangalore"), Date(31, 9, 2018), ACChairCar::Type());
// Booking b130(Station("Chennai"), Station("Bangalore"), Date(25, 9, 2024), ACFirstClass::Type());
// Booking b131(Station("Chennai"), Station("Bangalore"), Date(9, 11, 2023), FirstClass::Type());
// Booking b132(Station("Chennai"), Station("Bangalore"), Date(30, 8, 2022), SecondSitting::Type());
// Booking b133(Station("Chennai"), Station("Bangalore"), Date(1, 9, 2021), Sleeper::Type());
// Booking b134(Station("Chennai"), Station("Kolkata"), Date(29, 9, 2017), AC2Tier::Type());
// Booking b135(Station("Chennai"), Station("Kolkata"), Date(4, 1, 2019), AC3Tier::Type());
// Booking b136(Station("Chennai"), Station("Kolkata"), Date(16, 12, 2023), ACChairCar::Type());
// Booking b137(Station("Chennai"), Station("Kolkata"), Date(8, 10, 2025), ACFirstClass::Type());
// Booking b138(Station("Chennai"), Station("Kolkata"), Date(13, 1, 2016), FirstClass::Type());
// Booking b139(Station("Chennai"), Station("Kolkata"), Date(14, 12, 2015), SecondSitting::Type());
// Booking b140(Station("Chennai"), Station("Kolkata"), Date(27, 11, 2025), Sleeper::Type());
// // 
// // Output the bookings done where sBookings is the collection of bookings done
// vector<Booking>::iterator it;
// for (it = Booking::sBookings.begin(); it < Booking::sBookings.end(); ++it) 
// {
// cout << (*it);
// }
// return;
// }
// void Station::UTStation()
// {
//     cout<<"-------------UNIT TESTING Station Class---------------"<<endl;
//     Station s1("Mumbai");//Constructor
//     Station s2("Delhi");
//     if(s1.GetName()!="Mumbai")
//     cout<<"Error in GetName()"<<endl;
//      if(s2.GetName()!="Delhi")
//     cout<<"Error in GetName()"<<endl;
//     if(s1.GetDistance(s2)!=1447)
//     cout<<"Error in GetDistance()"<<endl;
//     cout<<"------------------------------------------------------------"<<endl;
//     cout<<endl;

// }
// void Railways::UTRailways()
// {
//     cout<<"-------------UNIT TESTING Railways Class---------------"<<endl;
//     Railways &irailways=Railways::GetRailways();
//     Station s1=irailways.sStation[0];
//     Station s2=irailways.sStation[1];
//     double dis=irailways.GetDistance(s1,s2);
//     double res=1447;
//     if(dis!=res)
//     cout<<"Error in GetDistance(s1,s2)"<<endl;
  
//    cout<<"------------------------------------------------------------"<<endl;
//    cout<<endl;

// }
// void Date::UTDate()
// {
//     cout<<"-------------UNIT TESTING Railways Class---------------"<<endl;
//     string str="05/03/2021";
//     Date date(str); //(dd,mm,yyyy)
//     // cout<<date<<endl;
//     if(!date.validDate())
//     cout<<"Error in validDate()"<<endl;
   
//     cout<<"--------------------------------------------------------\n"<<endl;

// }
// // void Booking::UTBooking()
// // {
// //     cout<<"---------UNIT TESTING  for Booking Class------------------"<<endl;
// //     Booking b1(Station("Mumbai"), Station("Delhi"), Date(17, 3, 2017), AC2Tier::Type());
// //     long long int fare=b1.ComputeFare();
// //     if(fare!=1497)
// //     cout<<"Error in ComputeFare()"<<endl;
// //     cout<<"----------------------------------------------------------------"<<endl;

// // }

// //  void BookingClasses::UTBookingClasses()
// //  {
// //      cout<<"-------------UNIT TESTING Booking Classes:AC2Tier Class---------------"<<endl;
    
// //     AC2Tier &AC2Tier_ins=AC2Tier::Type();
// //     if(AC2Tier_ins.GetName()!="AC 2Tier Class(2A)")
// //     cout<<"Error in GetName()"<<endl;
// //     if(AC2Tier_ins.GetLoadFactor()!=2)
// //     cout<<"Error in GetLoadFactor"<<endl;
// //     if(AC2Tier_ins.GetNumberOfTiers()!=2)
// //     cout<<"Erron in GetNumberOfTier"<<endl;
// //     if(!AC2Tier_ins.IsAC())
// //     cout<<"Error in IsAC()"<<endl;
// //     if(AC2Tier_ins.IsLuxury())
// //     cout<<"Error in IsLuxury()"<<endl;
// //     if(AC2Tier_ins.IsSeat())
// //     cout<<"Error in IsSeat()"<<endl;
// //     cout<<"-----------------------------------------------------------------------------"<<endl;
// //     cout<<"-------------UNIT TESTING Booking Classes:AC3Tier Class---------------"<<endl;
// //     AC3Tier &AC3Tier_ins=AC3Tier::Type();
// //     if(AC3Tier_ins.GetName()!="AC 3Tier Class(3A)")
// //     cout<<"Error in GetName()"<<endl;
// //     if(AC3Tier_ins.GetLoadFactor()!=1.75)
// //     cout<<"Error in GetLoadFactor"<<endl;
// //     if(AC3Tier_ins.GetNumberOfTiers()!=3)
// //     cout<<"Erron in GetNumberOfTier"<<endl;
// //     if(!AC3Tier_ins.IsAC())
// //     cout<<"Error in IsAC()"<<endl;
// //     if(AC3Tier_ins.IsLuxury())
// //     cout<<"Error in IsLuxury()"<<endl;
// //     if(AC3Tier_ins.IsSeat())
// //     cout<<"Error in IsSeat()"<<endl;
// //      cout<<"-----------------------------------------------------------------------------"<<endl;

// //     cout<<"-------------UNIT TESTING Booking Classes:ACChairCar Class---------------"<<endl;
// //     ACChairCar &ACChairCar_ins=ACChairCar::Type();
// //     if(ACChairCar_ins.GetName()!="AC Chair Car Class(CC)")
// //     cout<<"Error in GetName()"<<endl;
// //     if(ACChairCar_ins.GetLoadFactor()!=1.25)
// //     cout<<"Error in GetLoadFactor"<<endl;
// //     if(ACChairCar_ins.GetNumberOfTiers()!=0)
// //     cout<<"Erron in GetNumberOfTier"<<endl;
// //     if(!ACChairCar_ins.IsAC())
// //     cout<<"Error in IsAC()"<<endl;
// //     if(ACChairCar_ins.IsLuxury())
// //     cout<<"Error in IsLuxury()"<<endl;
// //     if(!ACChairCar_ins.IsSeat())
// //     cout<<"Error in IsSeat()"<<endl;
// //      cout<<"-----------------------------------------------------------------------------"<<endl;

// //      cout<<"-------------UNIT TESTING Booking Classes:ACFirstClass Class---------------"<<endl;
// //     ACFirstClass &ACFirstClass_ins=ACFirstClass::Type();
// //     if(ACFirstClass_ins.GetName()!="AC First Class(1A)")
// //     cout<<"Error in GetName()"<<endl;
// //     if(ACFirstClass_ins.GetLoadFactor()!=3)
// //     cout<<"Error in GetLoadFactor"<<endl;
// //     if(ACFirstClass_ins.GetNumberOfTiers()!=2)
// //     cout<<"Erron in GetNumberOfTier"<<endl;
// //     if(!ACFirstClass_ins.IsAC())
// //     cout<<"Error in IsAC()"<<endl;
// //     if(!ACFirstClass_ins.IsLuxury())
// //     cout<<"Error in IsLuxury()"<<endl;
// //     if(ACFirstClass_ins.IsSeat())
// //     cout<<"Error in IsSeat()"<<endl;
// //      cout<<"-----------------------------------------------------------------------------"<<endl;

// //      cout<<"-------------UNIT TESTING Booking Classes:FirstClass Class---------------"<<endl;
// //     FirstClass &FirstClass_ins=FirstClass::Type();
// //     if(FirstClass_ins.GetName()!="First Class(FC)")
// //     cout<<"Error in GetName()"<<endl;
// //     if(FirstClass_ins.GetLoadFactor()!=2)
// //     cout<<"Error in GetLoadFactor"<<endl;
// //     if(FirstClass_ins.GetNumberOfTiers()!=2)
// //     cout<<"Erron in GetNumberOfTier"<<endl;
// //     if(FirstClass_ins.IsAC())
// //     cout<<"Error in IsAC()"<<endl;
// //     if(!FirstClass_ins.IsLuxury())
// //     cout<<"Error in IsLuxury()"<<endl;
// //     if(FirstClass_ins.IsSeat())
// //     cout<<"Error in IsSeat()"<<endl;
// //      cout<<"-----------------------------------------------------------------------------"<<endl;

    
    
// //     cout<<"-------------UNIT TESTING Booking Classes:SecondSitting Class---------------"<<endl;
// //     SecondSitting &SecondSitting_ins=SecondSitting::Type();
// //     if(SecondSitting_ins.GetName()!="SecondSitting Class(2S)")
// //     cout<<"Error in GetName()"<<endl;
// //     if(SecondSitting_ins.GetLoadFactor()!=0.5)
// //     cout<<"Error in GetLoadFactor"<<endl;
// //     if(SecondSitting_ins.GetNumberOfTiers()!=0)
// //     cout<<"Erron in GetNumberOfTier"<<endl;
// //     if(SecondSitting_ins.IsAC())
// //     cout<<"Error in IsAC()"<<endl;
// //     if(SecondSitting_ins.IsLuxury())
// //     cout<<"Error in IsLuxury()"<<endl;
// //     if(!SecondSitting_ins.IsSeat())
// //     cout<<"Error in IsSeat()"<<endl;
// //      cout<<"-----------------------------------------------------------------------------"<<endl;

// //      cout<<"-------------UNIT TESTING Booking Classes:Sleeper Class---------------"<<endl;
// //     Sleeper &Sleeper_ins=Sleeper::Type();
// //     if(Sleeper_ins.GetName()!="Sleeper Class(SL)")
// //     cout<<"Error in GetName()"<<endl;
// //     if(Sleeper_ins.GetLoadFactor()!=1)
// //     cout<<"Error in GetLoadFactor"<<endl;
// //     if(Sleeper_ins.GetNumberOfTiers()!=3)
// //     cout<<"Erron in GetNumberOfTier"<<endl;
// //     if(Sleeper_ins.IsAC())
// //     cout<<"Error in IsAC()"<<endl;
// //     if(Sleeper_ins.IsLuxury())
// //     cout<<"Error in IsLuxury()"<<endl;
// //     if(Sleeper_ins.IsSeat())
// //     cout<<"Error in IsSeat()"<<endl;
// //      cout<<"-----------------------------------------------------------------------------"<<endl;






    
   

// //  }