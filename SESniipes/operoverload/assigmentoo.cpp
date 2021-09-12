#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
class String
{
public:
    char *str_;
    size_t len_;
    String(char *s) : str_(strdup(s)), len_(strlen(str_)) {}        // ctor
    String(const String &s) : str_(strdup(s.str_)), len_(s.len_) {} // cctor
    ~String() { free(str_); }                                       // dtor
    String &operator=(const String &s)
    {
        if (this != &s)
        {
            free(str_);
            str_ = strdup(s.str_);
            len_ = s.len_;
        }
        return *this;
    }
    void print() { cout << "(" << str_ << ": " << len_ << ")" << endl; }
};
int main()
{
    String s1 = "Football", s2 = "Cricket";
    s1.print();
    s2.print();
    s1 = s1;
    s1.print();
    return 0;
}
