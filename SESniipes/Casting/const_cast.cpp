//read gfg
//moslty used to make const operator non-const
#include <iostream>
using namespace std;
class A
{
    int i_;

public:
    A(int i) : i_(i) {}
    int get() const { return i_; }
    void set(int j) { i_ = j; }
};
void print(char *str) { cout << str; }
int main()
{
    const char *c = "sample text";
    // print(c); // error: ’void print(char *)’: cannot convert argument 1
    // from ’const char *’ to ’char *’
    print(const_cast<char *>(c));
    const A a(1);
    a.get();
    // a.set(5); // error: ’void A::set(int)’: cannot convert
    // ’this’ pointer from ’const A’ to ’A &’
    const_cast<A &>(a).set(5);
    // const_cast<A>(a).set(5); // error: ’const_cast’: cannot convert
    // from ’const A’ to ’A’
    return 0;
}