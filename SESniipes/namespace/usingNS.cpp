#include <iostream>
using namespace std;
namespace name1
{
    int v11 = 1;
    int v12 = 2;
} // namespace name1
namespace name2
{
    int v11 = 3;
    int v12 = 4;
} // namespace name2
using namespace name1; // All symbols of namespace name1 will be available
//using name2::v21;      // Only v21 symbol of namespace name2 will be available
int main()
{
    cout << v11 << endl;        // name1::v11
    // cout << name1::v12 << endl; // name1::v12
    // cout << v21 << endl;        // name2::v21
    // cout << name2::v21 << endl; // name2::v21
    // cout << v22 << endl;  
    cout<< v12<<endl;    // Treated as undefined
    cout<<name2 ::v11<<endl;
    cout<<name2::v12<<endl;
    return 0;
}