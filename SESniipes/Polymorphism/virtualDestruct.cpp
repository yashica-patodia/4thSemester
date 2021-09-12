#include <iostream>
using namespace std;
class B
{
    int data_;

public:
    B(int d) : data_(d) { cout << "B()" << endl; }
    virtual ~B() { cout << "~B()" << endl; } // Destructor made virtual ,if we dont use the virtual keyword then the destructor of D is not called
    virtual void Print() { cout << data_; }
};
class D : public B
{
    int *ptr_;

public:
    D(int d1, int d2) : B(d1), ptr_(new int(d2)) { cout << "D()" << endl; }
    ~D()
    {
        cout << "~D()" << endl;
        delete ptr_;
    }
    void Print()
    {
        B::Print();
        cout << " " << *ptr_;
    }
};
int main()
{
    B *p = new B(2);
    B *q = new D(3, 5);
    p->Print();
    cout << endl;
    q->Print();
    cout << endl;
    delete p;
    delete q;//without the virtual destructor the ~D is not called
    return 0;
} 