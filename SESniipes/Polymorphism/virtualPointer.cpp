// #include <iostream>
// using namespace std;
// class B
// {
//     int i;

// public:
//     B(int i_) : i(i_) {}
//     void f(int);         // B::f(B*const, int)
//     virtual void g(int); // B::g(B*const, int)
// };
//  void main()
// {
//     B b(100);
//     B *p = &b

//                 b.f(15);
//     p->f(25);
//     b.g(35);
//     p->g(45);
//     B::f(&b, 15);
//     B::f(p, 25);
//     B::g(&b, 35);
//     p->vft[0](p, 45);
// }
// //on the object we always have static binding
// in the virtual function table the virtual  function table gets updated
// Every class has its own vft
// we always inherit the entire virtual function table from
//  the parent class and then if a function is not written 
//  (or not over-ridden)then it remains the same as that of parent class ,otherwise it changes to the current derived class