#include <iostream>
#include <string>
using namespace std;
template <class T1 = int, class T2 = string> // Version 1 with default parameters
class Student
{
    T1 roll_;
    T2 name_;

public:
    Student(T1 r, T2 n) : roll_(r), name_(n) {}
    void Print() const { cout << "Version 1: (" << name_ << ", " << roll_ << ")" << endl; }
};
template <class T1> // Version 2: Partial Template Specialization
class Student<T1, char *>
{
    T1 roll_;
    char *name_;

public:
    Student(T1 r, char *n) : roll_(r), name_(strcpy(new char[strlen(n) + 1], n)) {}
    void Print() const { cout << "Version 2: (" << name_ << ", " << roll_ << ")" << endl; }
};
int main()
{
    Student<int, string> s1(2, "Ramesh"); // Version 1: T1 = int, T2 = string
    Student<int> s2(11, "Shampa");        // Version 1: T1 = int, defa T2 = string
    Student<> s3(7, "Gagan");             // Version 1: defa T1 = int, defa T2 = string
    Student<string> s4("X9", "Lalita");   // Version 1: T1 = string, defa T2 = string
    Student<int, char *> s5(3, "Gouri");  // Version 2: T1 = int, T2 = char*
    s1.Print();
    s2.Print();
    s3.Print();
    s4.Print();
    s5.Print();
    return 0;
}
