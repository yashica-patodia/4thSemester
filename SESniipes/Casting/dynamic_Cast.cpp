// But dynamic cast can also downcast (convert from pointer-to-base to
// pointer-to-derived) polymorphic classes (those with virtual members)
// if-and-only-if the pointed object is a valid complete object of the target type
//THIS IS THE MOST IMP FEATURE

#include <iostream>
using namespace std;
class A
{
public:
    virtual ~A() {}
};
class B : public A
{
};
class C
{
public:
    virtual ~C() {}
};
int main()
{
    A a;
    B b;
    C c;
    A *pA;
    B *pB;
    C *pC;
    void *pV;
    pB = &b;
    pA = dynamic_cast<A *>(pB);
    cout << pB << " casts to " << pA << ": Up-cast: Valid" << endl;
    pA = &b;
    pB = dynamic_cast<B *>(pA);
    cout << pA << " casts to " << pB << ": Down-cast: Valid" << endl;
    pA = &a;
    pB = dynamic_cast<B *>(pA);
    cout << pA << " casts to " << pB << ": Down-cast: Invalid" << endl;
    pA = (A *)&c;
    pC = dynamic_cast<C *>(pA);
    cout << pA << " casts to " << pC << ": Unrelated-cast: Invalid" << endl;
    pA = 0;
    pC = dynamic_cast<C *>(pA);
    cout << pA << " casts to " << pC << ": Unrelated-cast: Valid for null" << endl;
    pA = &a;
    pV = dynamic_cast<void *>(pA);
    cout << pA << " casts to " << pV << ": Cast-to-void: Valid" << endl;
    //pA = dynamic_cast<A*>(pV); // error: ’void *’: invalid expression type for dynamic_cast
    return 0;
}
//upcaste should be done by static_Cast and not by dynamic_cast
//dynamic_cast has the same functionality for pointers as well as references
//if the static and the dynamic tupe are the same for a object then it is an invalid casting 