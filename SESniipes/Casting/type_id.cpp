#include <iostream>
#include <typeinfo>
using namespace std;
// Polymorphic Hierarchy
class A
{
public:
    virtual ~A() {}
};
class B : public A
{
};
int main()
{
    A a;
    cout << typeid(a).name() << ": " << typeid(&a).name() << endl; // Static
    A *p = &a;
    cout << typeid(p).name() << ": " << typeid(*p).name() << endl; // Dynamic
    B b;
    cout << typeid(b).name() << ": " << typeid(&b).name() << endl; // Static
    p = &b;
    cout << typeid(p).name() << ": " << typeid(*p).name() << endl; // Dynamic
    A &r1 = a;
    A &r2 = b;
    cout << typeid(r1).name() << ": " << typeid(r2).name() << endl;
    return 0;
}
#include <iostream>
#include <typeinfo>
using namespace std;
class A
{
public:
    virtual ~A() {}
};
class B : public A
{
};
int main()
{
    A *pA = new A;
    try
    {
        cout << typeid(pA).name() << endl;
        cout << typeid(*pA).name() << endl;
    }
    catch (const bad_typeid &e)
    {
        cout << "caught " << e.what() << endl;
    }
    delete pA;
    try
    {
        cout << typeid(pA).name() << endl;
        cout << typeid(*pA).name() << endl;
    }
    catch (const bad_typeid &e)
    {
        cout << "caught " << e.what() << endl;
    }
    pA = 0;
    try
    {
        cout << typeid(pA).name() << endl;
        cout << typeid(*pA).name() << endl; //null pointer de-referencing
    }
    catch (const bad_typeid &e)
    {
        cout << "caught " << e.what() << endl;
    }
    return 0;
}
