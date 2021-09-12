#include <iostream>
using namespace std;
class Complex
{
public:
    double re, im;
    Complex(double r = 0, double i = 0) : re(r), im(i) {}
};
ostream &operator<<(ostream &os, const Complex &a)
{
    os << a.re << " +j " << a.im << endl;
    return os;
}
istream &operator>>(istream &is, Complex &a)
{
    is >> a.re >> a.im;
    return is;
}
int main()
{
    Complex d;
    cin >> d;
    cout << d;
    return 0;
}