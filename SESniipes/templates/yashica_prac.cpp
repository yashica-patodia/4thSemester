#include <iostream>
#include <cstring>
#include<string.h>
using namespace std;
template <class T>
T Max(T x, T y)
{
    return x > y ? x : y;
}
template <>
char *Max<char *>(char *x, char *y)
{
    return strcmp(x, y) > 0 ? x : y;
}
template <class T, int size>
T Max(T x[size])
{
    T t = x[0];
    for (int i = 0; i < size; i++)
    {
        if (x[i] > t)
            t = x[i];
    }
    return t;
}

template <class T>
class Stack
{
    T data_[100];
    int top_;

public:
    Stack() : top_(-1) {}
    ~Stack() {}
    void push(const T &item)
    {
        data_[++top_] = item;
    }
    void pop()
    {
        --top_;
    }
    const T &top() const
    {
        return data_[top_];
    }
    bool isempty() const
    {
        return top_ == -1;
    }

};
 int main()
{
    int a = 3, b = 5;
    double c = 3.5, d = 4.5;
    int a1 = Max<int>(a++, b++);
    cout << "Max(" << a << ", " << b << ") = " << a1 << endl;
    double a2 = Max<double>(c, d);
    cout << "Max(" << c << ", " << d << ") = " << a2 << endl;
    char *s1 = new char[6], *s2 = new char[6];
    strcpy(s1, "black");
    strcpy(s2, "white");
    cout << "Max(" << s1 << ", " << s2 << ") = " << Max<char *>(s1, s2) << endl;
    // Output: Max(black, white) = white
    strcpy(s1, "white");
    strcpy(s2, "black");
    cout << "Max(" << s1 << ", " << s2 << ") = " << Max<char *>(s1, s2) << endl;
    // Output: Max(black, white) = white

    int arr[] = {2, 5, 6, 3, 7, 9, 4};
    cout << "Max(arr) = " << Max<int, 7>(arr) << endl; // Output: Max(arr) = 9
    char str[10] = "ABCDE";
    Stack<char> s; // Instantiated for char
    for (unsigned int i = 0; i < strlen(str); ++i)
        s.push(str[i]);
    cout << "Reversed String: ";
    while (!s.isempty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}