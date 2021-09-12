#include <iostream>
#include <cstring>
using namespace std;
template <class T>
T Max(T x, T y) { return x > y ? x : y; }
template <> // Template specialization for ’char *’ type
char *Max<char *>(char *x, char *y)
{
    return strcmp(x, y) > 0 ? x : y;
}
int main()
{
    char *s1 = new char[6], *s2 = new char[6];
    strcpy(s1, "black");
    strcpy(s2, "white");
    cout << "Max(" << s1 << ", " << s2 << ") = " << Max<char *>(s1, s2) << endl;
    // Output: Max(black, white) = white
    strcpy(s1, "white");
    strcpy(s2, "black");
    cout << "Max(" << s1 << ", " << s2 << ") = " << Max<char *>(s1, s2) << endl;
    // Output: Max(black, white) = white
    return 0;
}