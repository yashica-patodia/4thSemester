#include <iostream>
using namespace std;
void Function_under_param_test( // Function prototype
    int &b,                     // Reference parameter
    int c);                     // Value parameter
int main()
{
    int a = 20;
    cout << "a = " << a << ", &a = " << &a << endl
         << endl;
    Function_under_param_test(a, a); // Function call
    return 0;
}
void Function_under_param_test(int &b, int c)
{ // Function definition
    cout << "b = " << b << ", &b = " << &b << endl
         << endl;
    cout << "c = " << c << ", &c = " << &c << endl
         << endl;
}