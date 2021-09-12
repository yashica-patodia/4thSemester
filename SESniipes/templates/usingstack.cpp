#include <iostream>
#include "Stack.h"
using namespace std;
int main()
{
    char str[10] = "ABCDE";
    Stack<char> s; // Instantiated for char
    for (unsigned int i = 0; i < strlen(str); ++i)
        s.push(str[i]);
    cout << "Reversed String: ";
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}