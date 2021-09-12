#include<iostream>
using namespace std;
class B
{
public:
    B() { cout << "B "; }
    ~B() { cout << "~B "; }
};
class C :public B
{
public:
    C() { cout << "C "; }
    ~C() { cout << "~C "; }
};
class D : public C
{
    C data_;
    B info_;
    int x;

public:
    D() { cout << "D " << endl; }
    ~D() { cout << "~D "; }
};
int main()
{
    D d;
    return 0;
}

//play with this template
//first the top parent class of the inheritance chain is called and accordingly go down then data types of the class are taken care of 