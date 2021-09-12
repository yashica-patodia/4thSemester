#include <iostream>
#include <exception>
using namespace std;
class MyException : public exception
{
};
class MyClass
{
    ~MyClass() {}
};
void h()
{
    MyClass h_a;
    //throw 1; // Line 1
    //throw 2.5; // Line 2
    //throw MyException(); // Line 3
    //throw exception(); // Line 4
    //throw MyClass(); // Line 5
} // Stack unwind, h_a.~MyClass() called
// Passes on all exceptions
void g()
{
    MyClass g_a;
    try
    {
        h();
        bool okay = true; // Not executed
    }
    // Catches exception from Line 1
    catch (int)
    {
        cout << "int\n";
    }
    // Catches exception from Line 2
    catch (double)
    {
        cout << "double\n";
    }
    // Catches exception from Line 3-5
    // & passes on
    catch (...)
    {
        throw;
    }
} // Stack unwind, g_a.~MyClass() called
void f()
{
    MyClass f_a;
    try
    {
        g();
        bool okay = true; // Not executed
    }
    // Catches exception from Line 3
    catch (MyException)
    {
        cout << "MyException\n";
    }
    // Catches exception from Line 4
    catch (exception)
    {
        cout << "exception\n";
    }
    // Catches exception from Line 5
    // & passes on
    catch (...)
    {
        throw;
    }
} // Stack unwind, f_a.~MyClass() called
int main()
{
    try
    {
        f();
        bool okay = true; // Not executed
    }
    // Catches exception from Line 5
    catch (...)
    {
        cout << "Unknown\n";
    }
    cout << "End of main()\n";
    return 0;
}