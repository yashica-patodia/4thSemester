#include <iostream>
using namespace std;
class Complex
{ // Private data members
    double re, im;

public:
    Complex(double a = 0.0, double b = 0.0) : re(a), im(b) {}
    ~Complex() {}
    void display();
    Complex operator+(const Complex &c)
    {
        Complex r;
        r.re = re + c.re;
        r.im = im + c.im;
        return r;
    }
};
void Complex::display()
{
    cout << re;
    cout << " +j " << im << endl;
}
int main()
{
    Complex c1(4.5, 25.25), c2(8.3, 10.25), c3;
    cout << "1st complex No:";
    c1.display();
    cout << "2nd complex No:";
    c2.display();
    c3 = c1 + c2;
    cout << "Sum = ";
    c3.display();
    return 0;
}