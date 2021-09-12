#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
    double re_, im_;
public:
    Complex(double re, double im) : re_(re), im_(im)
    {
        cout << "ctor: ";
        print();
    }
    Complex(const Complex &c) : re_(c.re_), im_(c.im_)
    {
        cout << "cctor: ";
        print();
    }
    ~Complex()
    {
        cout << "dtor: ";
        print();
    }
    Complex &operator=(const Complex &c) // Copy Assignment Operator
    {
        re_ = c.re_;
        im_ = c.im_;
        cout << "copy: ";
        print();
        return *this;
    }
    double norm() { return sqrt(re_ * re_ + im_ * im_); }
    void print() { cout << "|" << re_ << "+j" << im_ << "| = " << norm() << endl; }
};
int main()
{
    Complex c1(4.2, 5.3), c2(7.9, 8.5); // Constructor - Complex(double, double)
    Complex c3(c2);                     // Constructor - Complex(const Complex& c)
    c1.print();
    c2.print();
    c3.print();
    c2 = c1;
    c2.print(); // Copy Assignment Operator
    c1 = c2 = c3;
    c1.print();
    c2.print();
    c3.print(); // Copy Assignment Chain
    return 0;
}