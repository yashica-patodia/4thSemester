#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
class Complex
{
    double re_;
    double im_;

public:
    Complex(double re = 0.0, double im = 0.0) : re_(re), im_(im){};
    double norm() const { return sqrt(re_ * re_ + im_ * im_); }
    friend bool operator>(const Complex &c1, const Complex &c2)
    {
        return c1.norm() > c2.norm();
    }
    friend ostream &operator<<(ostream &os, const Complex &c)
    {
        os << "(" << c.re_ << ", " << c.im_ << ")";
        return os;
    }
};
template <class T>
T Max(T x, T y) { return x > y ? x : y; }
template <>
char *Max<char *>(char *x, char *y) { return strcmp(x, y) > 0 ? x : y; }
int main()
{
    Complex c1(2.1, 3.2), c2(6.2, 7.2);
    cout << "Max(" << c1 << ", " << c2 << ") = " << Max(c1, c2) << endl;
    // Output: Max((2.1, 3.2), (6.2, 7.2)) = (6.2, 7.2)
    return 0;
}