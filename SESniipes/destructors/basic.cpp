#include <iostream>
 using namespace std;
class Stack
{
private:
    char *data_;
    int top_; // Dynamic
public:
    Stack();  // Constructor
    ~Stack(); // Destructor
    // More Stack methods
};
Stack::Stack() : data_(new char[10]), top_(-1)
{
    cout << "Stack::Stack() called\n";
}
Stack::~Stack()
{
    cout << "\nStack::~Stack() called\n";
    delete data_;
}
int main()
{
    char str[10] = "ABCDE";
    Stack s; // Init by Stack::Stack() call
    // Reverse string using Stack
    return 0;
} // De-Init by Stack::~Stack() callc