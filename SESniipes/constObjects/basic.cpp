#include <iostream>
using namespace std;
class MyClass
{
    int myPriMember_;

public:
    int myPubMember_;
    MyClass(int mPri, int mPub) : myPriMember_(mPri), myPubMember_(mPub) {}
    int getMember() const { return myPriMember_; }
    void setMember(int i) { myPriMember_ = i; }
    void print() const { cout << myPriMember_ << ", " << myPubMember_ << endl; }
};
int main()
{
    MyClass myObj(0, 1);            // Non-constant object
    const MyClass myConstObj(5, 6); // Constant object
    cout << myObj.getMember() << endl;
    myObj.setMember(2);
    myObj.myPubMember_ = 3;
    myObj.print();
    cout << myConstObj.getMember() << endl;
    //myConstObj.setMember(7);
    //myConstObj.myPubMember_ = 8;
    myConstObj.print();
    return 0;
}
