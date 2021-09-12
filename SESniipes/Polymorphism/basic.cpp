#include <iostream>
using namespace std;
class A
{
public:
    int i;
};
class B
{
public:
    double d;
};
int main()
{
    A a;
    B b;
    a.i = 5;
    b.d = 6.8;

    A *p = &a;

    B *q = &b;
    cout << p->i << endl;
    cout << q->d << endl;
    p = (A *)&b; //conversion of unrelated pointers is not allowed but it can be forced typecasted with pointers
    q = (B *)&a;
    cout << p->i << endl;
    cout << q->d << endl;
}
