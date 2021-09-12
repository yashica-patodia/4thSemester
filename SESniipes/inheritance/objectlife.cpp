#include <iostream>
using namespace std;
class B
{
    protected : 
    int _data;
    public:
    B(int d=0):_data(d)
    {
        cout<<"B : constructor called"<<endl;
    }
    ~B()
    {
        cout<<"Destructor of base class called"<<endl;
    }

};
class D :public B
{
    int _info;
    public:
    D(int d,int i) : B(d),_info(i)
    {
        cout<<"Explicit constructuor called"<<endl;
    }
    D(int i):_info(i)
    {
        cout<<"Default construction of base object"<<endl;
    }
    ~D()
    {
        cout<<"Destructor of derived class called"<<endl;
    }

};
int main()
{
    B b(0);
    D d1(0,2);
    D d2(3);
}