#include <iostream>
using namespace std;
class B
{
public:
    void f() { cout << "B::f()" << endl; }
    virtual void g() { cout << "B::g()" << endl; }
};
class D : public B
{
public:
    void f() { cout << "D::f()" << endl; }
    virtual void g() { cout << "D::g()" << endl; }
};
int main()
{
    B b;
    D d;
    B *pb = &b;
    B *pd = &d; // UPCAST
    B &rb = b;
    B &rd = d; // UPCAST
    b.f();     // B::f() //THERE IS NO DIFF WHEN WE CALL BY OBJECT,POLYMORPHISM COMES INTO PLAY ONLY WHEN WE CALL BY POINTERS OR REFERENCES
    b.g();     // B::g()
    d.f();     // D::f()
    d.g();     // D::g()
    pb->f();   // B::f() -- Static Binding
    pb->g();   // B::g() -- Dynamic Binding
    pd->f();   // B::f() -- Static Binding
    pd->g();   // D::g() -- Dynamic Binding
    rb.f();    // B::f() -- Static Binding
    rb.g();    // B::g() -- Dynamic Binding
    rd.f();    // B::f() -- Static Binding
    rd.g();    // D::g() -- Dynamic Binding
    return 0;
}

// SAME STATIC AND DYNAMIC BEHAVIOUR  FOR REFERENCES AND POINTERS
// Using the virtual keyword 
// 1)A virtual function is a member function which is declared within a base class and is re-defined(Overriden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function. 

// Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.
// They are mainly used to achieve Runtime polymorphism
// Functions are declared with a virtual keyword in base class.
// The resolving of function call is done at Run-time.

// They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used