#include <iostream>
#include <exception>
using namespace std;

class Base {
public:
    virtual void f() { cout << "B::f() "; }
};

class Derived : public Base {
public:
    using Base::f;

    void f() { cout << "D::f() "; }
};

int main() {
    Derived d;
    Derived& rd = d;

    d.Base::f();
    rd.Base::f();

    return 0;
}