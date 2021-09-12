#include <iostream>
using namespace std;
class MyClass
{
    int data_;

public:
    MyClass(int i) : data_(i) {}
    friend void display(const MyClass &a);
};
void display(const MyClass &a)
{
    cout << "data = " << a.data_; // Okay
}
int main()
{
    MyClass obj(10);
    display(obj);
    return 0;
}
