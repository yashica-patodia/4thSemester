#include <iostream>
using namespace std;
int data = 0; // Global name ::
namespace name1
{
    int data = 1; // In namespace name1
    namespace name2
    {
        int data = 2; // In nested namespace name1::name2
    }
} // namespace name1
int main()
{
    cout << data << endl;               // 0
    cout << name1::data << endl;        // 1
    cout << name1::name2::data << endl; // 2
    return 0;
}