// class A
// {
// };
// class B : public A
// {
// };
// void main()
// {
//     A *pa = 0;
//     B *pb = 0;
//     void *pv = 0;
//     pa = pb; // okay ------------------------------------------------- // UPCAST generalizing less going up in the hierarchy
//     pb = pa; // error C2440: ’=’ : cannot convert from ’A *’ to ’B *’ // DOWNCAST
//     pv = pa; // okay ------------------------------------------------- // Lose the type ,losing all the data
//     pv = pb; // okay ------------------------------------------------- // Lose the type
//     pa = pv; // error C2440: ’=’ : cannot convert from ’void *’ to ’A *’
//     pb = pv; // error C2440: ’=’ : cannot convert from ’void *’ to ’B *’
// }
//Once a virtual always a virtual down the hierarchy
#include <iostream>
using namespace std;
class A
{
public:
    void f() { cout << "A::f()" << endl; }         // Non-Virtual
    virtual void g() { cout << "A::g()" << endl; } // Virtual
    void h() { cout << "A::h()" << endl; }         // Non-Virtual
};
//Even though g is not declared virtual in the subsequence classes it remains virtual down the hierarchy
class B : public A
{
public:
    void f() { cout << "B::f()" << endl; }         // Non-Virtual
    void g() { cout << "B::g()" << endl; }         // Virtual
    virtual void h() { cout << "B::h()" << endl; } // Virtual
};
class C : public B
{
public:
    void f() { cout << "C::f()" << endl; } // Non-Virtual
    void g() { cout << "C::g()" << endl; } // Virtual
    void h() { cout << "C::h()" << endl; } // Virtual
};
int main()
{
    B *q = new C;
    A *p = q;
    p->f();
    p->g();
    p->h();
    q->f();
    q->g();
    q->h();
    return 0;
}