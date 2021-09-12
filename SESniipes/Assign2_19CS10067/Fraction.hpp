#ifndef FRACTION_h
#define FRACTION_h
#include <iostream>
using namespace std;

class Fraction
{
    //making the data members of the class as protected to implement encapsulation of data so that it is accessible only within the class and sub-clasess
protected:
    int p;
    unsigned int q;
    static const int precisionDouble = 1e5;

    //Constructors
public:
    Fraction(int m, int n);      //constructor with two parameters
    Fraction(int m);             //constructor with one parameter
    Fraction();                  //default constructuor
    Fraction(double d);          //constructor with one  double parameter
    Fraction(const Fraction &f); //copy constructor -parameter to a copy constructor must be passed as
    //Call-by-Reference otherwise it will lead to infinite loop as the call to copy constructor itself needs to
    // make copy for the Call-by-Value mechanism

    //Destructor
    ~Fraction();

    //Copy assignment operator
    Fraction &operator=(const Fraction &); // Copy assignment operator should return the object to make chain assignments possible and parameter should be called by reference
    // and const  so that there is  no change in Source object.

    //Unary arithmetic operators
    inline Fraction operator-() // Unary minus operator
    {

        return Fraction(-p, q);//inline function  is expanded (inlined) at the site of its call
//and the overhead of passing parameters between caller and callee (or called) functions is avoided
    }
    inline Fraction operator+() // Unary plus operator
    {
        return Fraction(p, q);
    }

//     The pre-operator should first perform the operation (increment / decrement / other) and
// then return the object. Hence its return type
// should be Fraction& and it should return *this 

    Fraction &operator--();   //Prefix pre-decrement operator
    Fraction &operator++();   //Prefix pre-increment operator

//     The post-operator should perform the operation (increment / decrement / other) after it
// returns the original value. Hence it should copy
// the original object in a temporary Fraction f; and
// then return f;. Its return type should be Fraction
    Fraction operator--(int); //Postfix post-decrement operator
    Fraction operator++(int); //Postfix post-increment operator

    // Binary Arithmetic Operators

   //  Preserves the encapsulation by defining the function as a friend member of the class
   //Parameter is defined as const so that the operands are not modified
    friend Fraction operator+(const Fraction &, const Fraction &); //Addition
    friend Fraction operator-(const Fraction &, const Fraction &); // Subtraction
    friend Fraction operator*(const Fraction &, const Fraction &); //Multiplication
    friend Fraction operator/(const Fraction &, const Fraction &); //Division
    friend Fraction operator%(const Fraction &, const Fraction &); //Remainder

    // Binary Relational Operators:

    //Parameter is defined as const so that the operands are not modified and returns boolean type
    bool operator==(const Fraction &); //Operands are Equal
    bool operator!=(const Fraction &); //Operands are Not Equal
    bool operator<(const Fraction &);  //First operand is Less than Second operand
    bool operator>(const Fraction &);  // First operand is More than Second operand
    bool operator<=(const Fraction &); //First operand is more than or Equal to Second operand
    bool operator>=(const Fraction &); //First operand is more than or Equal to Second operand


    //No parameter and return data type is Fraction
    Fraction operator!(); // Special Operators:

    // I/O Operators

    //Return data type is friend because  global operator function is not good for this and member  operator function cannot do this
    //and it preserves the encapsulation too.
    //Object to write is passed by constant reference
    friend ostream &operator<<(ostream &os, const Fraction &a); //Output: Streaming to ostream Return data type-This operator should take an
// ostream object (stream to write to) and a Fraction (object to write).
// Further it allows to chain the output
    friend istream &operator>>(istream &in, Fraction &a);       //Input: Streaming from istream.

    // Static Constants of the Datatype
    //declared inside the class scope to avoid linker error
    static Fraction sc_fUnity; //Unity
    static Fraction sc_fZero;  //Zero

    // Utility Functions of the Datatype
    //Iniline function defined in the header file itself
    inline static int precision()
    {
        return precisionDouble;
    }
    static int gcd(int , int );
    static int lcm(int , int );

    inline int getNum() //To provide for encapsulation of data items so that we can acess the private data members using get methods
    {
        return p;
    }
    inline int getDen()
    {
        return q;
    }
};
#endif