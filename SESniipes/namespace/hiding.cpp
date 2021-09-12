#include <iostream>
using namespace std;
int data = 0; // Global Data
namespace name1
{
    int data = 1; // namespace Data
}
int main()
{
    using name1::data;
    cout << data << endl;        // 1 // name1::data -- Hides global data
    cout << name1::data << endl; // 1
    cout << ::data << endl;      // 0 // ::data -- global data
    return 0;
}