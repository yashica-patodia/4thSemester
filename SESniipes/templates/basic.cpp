#include <iostream>
#include<string.h>
using namespace std;
template <class T>
class Stack;                                   // Forward declaration
void ReverseString(Stack<char> &s, char *str); // Stack template definition is not needed
template <class T>                             // Definition
class Stack
{
    T data_[100];
    int top_;

public:
    Stack() : top_(-1) {}
    ~Stack() {}
    void push(const T &item) { data_[++top_] = item; }
    void pop() { --top_; }
    const T &top() const { return data_[top_]; }
    bool empty() const { return top_ == -1; }
};
int main()
{
    char str[10] = "ABCDE";
    Stack<char> s; // Stack template definition is needed
    ReverseString(s, str);
    return 0;
}
void ReverseString(Stack<char> &s, char *str)
{ // Stack template definition is needed
    for (unsigned int i = 0; i < strlen(str); ++i)
        s.push(str[i]);
    cout << "Reversed String: ";
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}
