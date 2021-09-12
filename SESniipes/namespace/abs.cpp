#include <iostream>
#include <cstdlib>
namespace myNS
{
    int abs(int n)
    {
        if (n < -128)
            return 0;
        if (n > 127)
            return 0;
        if (n < 0)
            return -n;
        return n;
    }
} // namespace myNS
int main()
{
    std::cout << myNS::abs(-203) << " "
              << myNS::abs(-6) << " "
              << myNS::abs(77) << " "
              << myNS::abs(179) << std::endl;
    // Output: 0 6 77 0
    std::cout << abs(-203) << " "
              << abs(-6) << " "
              << abs(77) << " "
              << abs(179) << std::endl;
    // Output: 203 6 77 179
    return 0;
}