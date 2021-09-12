#include <iostream>
using namespace std;
class Complex
{
private:
    double re_, im_;

public:
    Complex(double re, double im) : re_(re), im_(im) {} // Two parameters
    Complex(double re) : re_(re), im_(0.0) {}           // One parameter
    Complex() : re_(0.0), im_(0.0) {}                   // No parameter
    double norm() { return sqrt(re_ * re_ + im_ * im_); }
    void print() { cout << "|" << re_ << "+j" << im_ << "| = " << norm() << endl; }
};
int main()
{
    Complex c1(4.2, 5.3), // Complex::Complex(4.2, 5.3)
        c2(4.2),          // Complex::Complex(4.2)
        c3;               // Complex::Complex()
    c1.print();
    c2.print();
    c3.print();
    return 0;
}
