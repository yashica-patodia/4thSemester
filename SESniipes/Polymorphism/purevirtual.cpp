//has  a function name but not a body
#include <iostream>
using namespace std;
//if  a class has atleast one virtual function then the instance of the class cannot be created
class Shapes
{
public:                      // Abstract Base Class
    virtual void draw() = 0; // Pure Virtual Function //as we dont know how to draw a "shape" 

};
class Polygon : public Shapes
{ // Concrete Class
    void draw() { cout << "Polygon: Draw by Triangulation" << endl; } //override draw ,here draw can be implemented,made it impure
};
class ClosedConics : public Shapes
{ // Abstract Base Class
    // draw() inherited - Pure Virtual //it inherits the pure virtual function
};
class Triangle : public Polygon
{
public: // Concrete Class
    void draw() { cout << "Triangle: Draw by Lines" << endl; }
};
class Quadrilateral : public Polygon
{
public: // Concrete Class
    void draw() { cout << "Quadrilateral: Draw by Lines" << endl; }
};
class Circle : public ClosedConics
{
public: // Concrete Class
    void draw() { cout << "Circle: Draw by Breshenham Algorithm" << endl; }
};
class Ellipse : public ClosedConics
{
public: // Concrete Class
    void draw() { cout << "Ellipse: Draw by ..." << endl; }
};
int main()
{
    Shapes *arr[] = {new Triangle, new Quadrilateral, new Circle, new Ellipse};
    for (int i = 0; i < sizeof(arr) / sizeof(Shapes *); ++i)
        arr[i]->draw();
    // ...
    return 0;
}
//A cCONCRETE CLASS MUST IMPLEMENT ALL THE PURE FUNCTION CLASS OF THE BASE CLASS TO GET AN OBJECT INSTANTIATED
//A PURE VIRTUAL FUNCTION CAN ALSO HAVE A BODY-->MANY COMPILERS DONT SUPPORT THIS,THEN U CAN DEFINE THE VIRTUAL FUNCTION OUTSIDE THE CLASS