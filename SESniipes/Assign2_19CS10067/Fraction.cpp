#include <iostream>
#include <cstdlib>
#include "Fraction.hpp"
using namespace std;

//Implementation of the non-inline methods defined in the Fraction.hpp header file
Fraction::Fraction(int m, int n)
{
    p = m;
    q = n;
    if (n == 0)//if denominator is 0 then it exits
    {

        exit(1);
    }

    if (n < 0)//if the denominator is less than 0 then making the numerator less than 0 to preserve its sign
    {
        p = -m;
        q = -n;
    }
    if (m == 0)//if the numerator is 0 then the denominator is made 1
    {
        p = 0;
        q = 1;
    }

    int y = Fraction::gcd(abs(p), q);//Finding the gcd and then normalizing the numerator and denominator
    p = p / y;
    q = q / y;
}
Fraction::Fraction(int m) //Constructor with 1 integer parameter
{
    p = m;
    q = 1;
}
Fraction::Fraction()//Default parameter
{
    p = 1;
    q = 1;
}
Fraction::Fraction(double d) //Constructor with double parameter
{
    // to handle overflow occurrences
    p = (int)(1ll * d * precision());
    q = precision();
    if (q == 0)
    {

        exit(1);
    }

    if (q < 0)
    {
        p = -p;
        q = -q;
    }
    if (p == 0)
    {
        q = 1;
    }
    int y = Fraction::gcd(abs(p), q);
    p = p / y;
    q = q / y;
}
Fraction::Fraction(const Fraction &f) : p(f.p), q(f.q) 
{
    //Copy constructor
}
Fraction::~Fraction()
{
    //Destructor
}
Fraction &Fraction::operator=(const Fraction &f) // Copy assignment operator should return the object to make chain assignments possible
    // and const parameter so that there is  no change in source.
{
    if (this != &f)//Checked to prevent self-copy
    {
        p = f.p;
        q = f.q;
    }
    return *this;
}
 //The pre-operator should first perform the operation (increment / decrement / other) and
// then return the object. Hence its return type
// should be Fraction& and it should return *this 
Fraction &Fraction ::operator--() //Pre-deccrement operator
{
    p = p - q;
    return *this;
}
Fraction &Fraction ::operator++()//Pre-increment operator
{
    p = p + q;
    return *this;
}

//The post-operator should perform the operation (increment / decrement / other) after it
// returns the original value. Hence it should copy
// the original object in a temporary Fraction f; and
// then return f;. Its return type should be Fraction
Fraction Fraction::operator--(int)//Post-decrement operator
{
    Fraction f(p, q);
    p = p - q;
    return f;
}
Fraction Fraction::operator++(int)//Post -increment operator
{
    Fraction f(p, q);
    p = p + q;
    return f;
}
//Binary arithmetic operators all have const parameters so that operands cannot be changed
//as they are friend of the class Fraction we dont need to access them by Fraction::
Fraction operator+(const Fraction &a, const Fraction &b)
{
    int num = (1ll * a.p * b.q) + (1ll * b.p * a.q);
    int den = (1ll * a.q * b.q);
    return Fraction(num, den);
}
Fraction operator-(const Fraction &a, const Fraction &b)
{
    int num = (1ll * a.p * b.q) - (1ll * b.p * a.q);
    int den = (1ll * a.q * b.q);
    return Fraction(num, den);
}
Fraction operator*(const Fraction &a, const Fraction &b)
{
    int num = (1ll * a.p * b.p);
    int den = (1ll * a.q * b.q);
    return Fraction(num, den);
}
Fraction operator/(const Fraction &a, const Fraction &b)
{
    int num = (1ll * a.p * b.q);
    int den = (1ll * a.q * b.p);
    try //try-catch exception handling
    {
        if (den == 0)
            throw 1;
        else
            return Fraction(num, den);
    }
    catch (int x)
    {
        cerr << "Exception thrown:Division by zero" << endl; //throwing exception if we divide by 0
    }
    return a;
}
Fraction operator%(const Fraction &a, const Fraction &b)
{
    int num = (1ll * a.p * b.q);
    int den = (1ll * a.q * b.p);
    try //try-catch exception handling
    {
        if (den == 0)
            throw 1;
    }
    catch (int x)
    {
        cerr << "Exception thrown:Division by zero" << endl; ////throwing exception if we divide by 0
    }
    Fraction f(num, den);
    int num2, den2;
    num2 = f.p % f.q;
    den2 = f.q;
    num2 = (1ll * num2 * b.p);
    den2 = (1ll * den2 * b.q);
    return Fraction(num2, den2);
}

//Binary Relational Operators
//Paramaters are declared as constant so that there is no change in the operands
bool Fraction::operator==(const Fraction &b)
{
    if (p == b.p && q == b.q)
        return true;
    return false;
}
bool Fraction::operator!=(const Fraction &b)
{
    if (!(p == b.p && q == b.q))
        return true;
    return false;
}
bool Fraction::operator<(const Fraction &b)
{
    int num = (1ll * p * b.q);
    int den = (1ll * q * b.p);
    if (num < den)
        return true;
    return false;
}
bool Fraction::operator>(const Fraction &b)
{
    int num = (1ll * p * b.q);
    int den = (1ll * q * b.p);
    if (num > den)
        return true;
    return false;
}
bool Fraction::operator<=(const Fraction &b)
{
    int num = (1ll * p * b.q);
    int den = (1ll * q * b.p);
    if (num <= den)
        return true;
    return false;
}
bool Fraction::operator>=(const Fraction &b)
{
    int num = (1ll * p * b.q);
    int den = (1ll * q * b.p);
    if (num >= den)
        return true;
    return false;
}
Fraction Fraction::operator!()
{
    try //try and catch exception
    {
        if (p == 0)
            throw 1;
        else
            return Fraction(q, p);
    }
    catch (int t)
    {
        cerr << "Exception thrown:Division by Zero" << endl; //throwing exception on dividing by 0
    }
    return Fraction();
}
//I/O oprators are declared as friend functions
//Return data type is friend because  global operator function is not good for this and member  operator function cannot do this
//and it preserves the encapsulation too.

ostream &operator<<(ostream &os, const Fraction &a) //Return data type ostream as it allows to chain the output and Object to write is passed by constant reference
{
    os << a.p;
    if (a.q != 1)
        os << "/" << a.q ;
   
    return os;
}
istream &operator>>(istream &in, Fraction &a)//Return data type istream as it allows to chain the output and Object to write is passed by constant reference
{
    in >> a.p >> a.q;
    return in;
}

//Constants of the Datatype: Unity and Zero  defined as static constants
//Static constants are defined outside the class scope (in addition to declaration within the class scope)
//to avoid linker error
//this is constructed before the main() starts and destructed after the main ends
Fraction Fraction::sc_fUnity = Fraction();
Fraction Fraction::sc_fZero = Fraction(0);

//Utility Functions of the Datatype
int Fraction::gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int Fraction::lcm(int a, int b)
{
    int pro=(1ll*a*b);
    if(pro)
    return (pro/(Fraction::gcd(a,b)));
    else
    return 0;
}

