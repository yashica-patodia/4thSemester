#include <iostream>
using namespace std;
namespace MyNameSpace
{
    int myData;                                                     // Variable in namespace
    void myFunction() { cout << "MyNameSpace myFunction" << endl; } // Function in namespace
    class MyClass
    {
        int data; // Class in namespace
    public:
        MyClass(int d) : data(d) {}
        void display() { cout << "MyClass data = " << data << endl; }
    };
} // namespace MyNameSpace
int main()
{
    MyNameSpace::myData = 10; // Variable name qualified by namespace name
    cout << "MyNameSpace::myData = " << MyNameSpace::myData << endl;
    MyNameSpace::myFunction();    // Function name qualified by namespace name
    MyNameSpace::MyClass obj(25); // Class name qualified by namespace name
    obj.display();
    return 0;
}