
Name: Yashica Patodia
\
Roll Number: 19CS10067




# Contents of Directory
### File Structure
.
+-- Implementation\
|&ensp;   +-- BookingClasses\
|&ensp;   | &ensp;  +-- PolymorphicHeaders\
|&ensp;  |&ensp;   |&ensp; +-- ACBerth.h\
|&ensp;   |&ensp;   |&ensp;   +-- ACSeat.h\
|&ensp; |&ensp;   |&ensp;   +-- BerthClass.h\
|&ensp;  |&ensp;   |&ensp;   +-- BookingClasses.h\
|&ensp;  |&ensp;   |&ensp;   +-- NACBerth.h\
|&ensp;   |&ensp;   |&ensp;   +-- NACSeat.h\
|&ensp;  |&ensp;   |&ensp;   +-- SeatClass.h\
|&ensp;  |&ensp;   +-- AC2Tier.cpp\
|&ensp;   |&ensp;   +-- AC2Tier.h\
|&ensp;   |&ensp;   +-- AC3Tier.cpp\
|&ensp;   |&ensp;  +-- AC3Tier.h\
|&ensp;  |&ensp;  +-- ACChairCar.cpp\
|&ensp;  |&ensp;   +-- ACChairCar.h\
|&ensp;   |&ensp;   +-- ACFirstClass.cpp\
|&ensp;  |&ensp;   +-- ACFirstClass.h\
|&ensp;   |&ensp;   +-- FirstClass.cpp\
|&ensp;   |&ensp;   +-- FirstClass.h\
|&ensp;   |&ensp;   +-- SecondSitting.cpp\
|&ensp;   |&ensp;   +-- SecondSitting.h\
|&ensp;  |&ensp;   +-- Sleeper.cpp\
|&ensp;  |&ensp;   +-- Sleeper.h\
|&ensp;   +-- Booking.cpp\
|&ensp;   +-- BookingHeaders.cpp\
|&ensp;   +-- Booking.h\
|&ensp;   +-- Date.cpp\
|&ensp;   +-- Date.h\
|&ensp;   +-- Passenger.cpp\
|  &ensp;+-- Passenger.h\
| &ensp;  +-- Railways.cpp\
|&ensp;   +-- Railways.h\
| &ensp;  +-- Station.cpp\
| &ensp;  +-- Station.h\
+-- Testing\
|&ensp;   +-- Applications.cpp\
+-- obj\
| &ensp;  +-- main.o\
+-- main.cpp\
+-- main.d\
+-- Makefile\
+-- README.md

### Contents of each file

- BookingClasses.h\
    This Header file contains the abstract Class BookingClasses which is  implemented by abstract classes, SeatClass and BerthClass.There are two levels of abstraction(multi-level inheritance).
    All methods (except Constructor) are virtual hence, no need of a cpp file.  Constructor and Virtual Destructor are initialised as inline 
    in this file itself.

- BerthClass.h\
    This Header file contains the abstract Class BerthClass which is a derived class of BookingClasses.This is the first level of abstraction. This Class is implemented by abstract classes, ACBerth and NACBerth.All methods 
    (except Constructor and IsSitting) are virtual hence, no need of a cpp file.Constructor, IsSitting and Virtual Destructor are initialised
    as inline in this file itself.

- SeatClass.h\
    This Header file contains the abstract Class SeatClass which is a derived class of BookingClasses.This is the first level of abstraction. This Class is later implemented by abstract classes, ACSeat and NACSeat. All methods 
    (except Constructor and IsSitting) are virtual hence, no need of a cpp file. Constructor, IsSitting and Virtual Destructor are initialised
    as inline in this file itself.

- ACBerth.h\
    This Header file contains the abstract Class ACBerth which is a derived class of BerthClass. This Class represents the booking classes which 
    contain berths as well as AC.
    This is the second level of abstraction. All methods (except Constructor and IsAC) are virtual hence, no need of a cpp file. Note: Constructor, 
    IsAC and Virtual Destructor are initialised as inline in this file itself.

- NACBerth.h\
    This Header file contains the abstract Class NACBerth which is a derived class of BerthClass. This Class represents the booking classes which 
    contain berths but don't have AC.This is the second level of abstraction.All methods (except Constructor and IsAC) are virtual hence, no need of a cpp file. Note: Constructor, 
    IsAC and Virtual Destructor are initialised as inline in this file itself.

- ACSeat.h
    This Header file contains the abstract Class ACSeat which is a derived class of SeatClass. This Class represents the booking classes which 
    contain seats as well as AC.This is the second level of abstraction. All methods (except Constructor and IsAC) are virtual hence, no need of a cpp file.Constructor, 
    IsAC and Virtual Destructor are initialised as inline in this file itself.

- NACSeat.h\
    This Header file contains the abstract Class NACSeat which is a derived class of SeatClass. This Class represents the booking classes which 
    contain seats but don't have AC.This is the second level of abstraction. All methods (except Constructor and IsAC) are virtual hence, no need of a cpp file. Constructor, 
    IsAC and Virtual Destructor are initialised as inline in this file itself.

- AC2Tier.h\
    This Header file contains the concrete class AC2Tier. The file contains the class outline as well as signature of all the method functions.This is the second level of abstraction.
    This class is an implementation of Booking Class AC2Tier of a train. The method functions are defined in corresponding cpp file.

- AC2Tier.cpp\
    This is a concrete class.
    The file contains the implemetation of all the method functions for AC2Tier Class whose signature
    was defined in the corresponding header file.

- AC3Tier.h\
    This Header file contains the concrete class AC3Tier. The file contains the class outline as well as signature of all the method functions.
    

- AC3Tier.cpp\
This is a concrete class.
    The file contains the implemetation of all the method functions for AC3Tier Class whose signature
    was defined in the corresponding header file.
    

- ACChairCar.h\
    This Header file contains the concrete class ACChairCar. The file contains the class outline as well as signature of all the method functions.
   

- ACChairCar.cpp\
    This is a concrete class.
    The file contains the implemetation of all the method functions for ACChairCar Class whose signature
    was defined in the corresponding header file.
    

- ACFirstClass.h\
    This Header file contains the concrete class ACFirstClass. The file contains the class outline as well as signature of all the method functions.

- ACFirstClass.cpp\
     This is a concrete class.
    The file contains the implemetation of all the method functions for ACFirstClass Class whose signature
    was defined in the corresponding header file.

- FirstClass.h\
    This Header file contains the concrete class FirstClass. The file contains the class outline as well as signature of all the method functions.

- FirstClass.cpp\
    This is a concrete class.
    The file contains the implemetation of all the method functions for FirstClass Class whose signature
    was defined in the corresponding header file.

- SecondSitting.h\
    This Header file contains the concrete class SecondSitting. The file contains the class outline as well as signature of all the method functions.

- SecondSitting.cpp\
    This is a concrete class.
    The file contains the implemetation of all the method functions for SecondSitting Class whose signature
    was defined in the corresponding header file.

- Sleeper.h\
    This Header file contains the concrete class Sleeper. The file contains the class outline as well as signature of all the method functions.
    

- Sleeper.cpp\
   This is a concrete class.
    The file contains the implemetation of all the method functions for ACFirstClass Class whose signature
    was defined in the corresponding header file.

- BookingHeaders.h\
    This header File imports all the cpp files of all the Concrete classes in this folder. Hence, importing this file in any other file automatically imports 
    and defines all the booking Classes defined, implemented and explained above.

- Booking.h\
    This header file contains the class outline for the class Booking. This file contains the signature for all class methods and attributes. The class is an
    Implementation of Booking, which computes fare and issues a ticket from one station to another in a particular Booking Class.

- Booking.cpp\
    This cpp file contains the implementations of the methods of the Booking class whose signatures were defined in the corresponding header class.

- Date.h\
    This header file contains the class outline for the class Date. This file contains the signature for all class methods and attributes. The class is an
    Implementation of Date. 

- Date.cpp\
    This cpp file contains the implementations of the methods of the Date class whose signatures were defined in the corresponding header class.

- Passenger.h\
    This header file contains the class outline for the class Passenger. This file contains the signature for all class methods and attributes. The class is an
    Implementation of a Passenger booking a ticket. 

- Passenger.cpp\
    This cpp file contains the implementations of the methods of the Passenger class whose signatures were defined in the corresponding header class.

- Railways.h\
    This header file contains the class outline for the class Railways. This file contains the signature for all class methods and attributes. The class is an
    Implementation of a Railways which stores all Stations and inter-station distances.

- Railways.cpp\
    This cpp file contains the implementations of the methods of the Railways class whose signatures were defined in the corresponding header class.

- Station.h\
    This header file contains the class outline for the class Station. This file contains the signature for all class methods and attributes. The class is an
    Implementation of a Railway Station. 
- Station.cpp\
    This cpp file contains the implementations of the methods of the Station class whose signatures were defined in the corresponding header class.

- Applications.cpp\
     This file contains functions are used to do application testing and unit testing of the software created. In 
    addition to that, it holds all static constants for different classes like loadfactor for all booking Classes, Base Fare Per Km from Booking class, Luxury 
    Tax etc. These can be manipulated easily from this file itself, to change the results.



# Compiler Settings
Compiler Used: g++\
C++ Version Used: c++11\
Compiler Option: Used Makefile tool\

# How to Run the code

- Dependencies:
\
   -  g++ compiler installed in the system.
   - makefile installed.


### Compiling the project
1. On  compiling for the first time,  changes need  to be made in the Makefile. If not, you can skip directly to step 4.
2. Open the Makefile and put the path of this directory in front of "SRCDIR = " and save the Makefile.
3. Run the command: 
    ``` bash
        mingw32-make
    ```
4. This compiles all the files and creates an Source instance, which can be run to see the output.

### Steps to run the code
1. To run the program, without changes use the command: 
    ``` bash
        ./Source.exe
    ```
2. In case, some changes are made in any file of the directory, you need to compile the project again.
