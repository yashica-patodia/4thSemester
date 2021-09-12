#include <iostream>
using namespace std;
class B
{
    public:
    void f(int x)
    {
        cout<<"f:B"<<x<<endl;
    }
    void g(int x)
    {
         cout<<"g:B"<<x<<endl;

    }
};
class A  :public B
{
    public:
    void f(int x)
    {
        cout<<"A:f"<<x<<endl;
    }
    void f(string &str)
    {
        cout<<"A:f:string"<<str<<endl;

    }


};
int main()
{
    B b;
    A a;
    b.f(1);
    b.g(2);
    a.f(3);
   string str="hi";
    a.f(str);
    

}