#include <iostream>
using namespace std;
class Engine
{
public:
    Engine(int numCylinders) {}
    // Starts this Engine
    void start() {}
};
class Car : private Engine
{ // Car has-a Engine
public:
    // Initializes this Car with 8 cylinders
    Car() : Engine(8) {}
    // Start this Car by starting its Engine
    using Engine::start;// making the start engine accessible to the derived class
    //use private inheritance when u need to make the base class non-copyable hierarchy,inherit a implementation property propagated to the base class
};
int main()
{
    Car c;
    c.start();
    return 0;
}
