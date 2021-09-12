// class A
// {
// public:
//     virtual void f(int) {}
//     virtual void g(double) {}
//     int h(A *) {}
// };
// class B : public A //here the function g is not over-ridden
// {
// public:
//     void f(int) {}
//     virtual int h(B *) {}
// };
// class C : public B
// {
// public:
//     void g(double) {}
//     int h(B *) {}
// };
// void main()
// {
//     A a;
//     B b;
//     C c;
//     A *pA;
//     B *pB;
//     pA=&b //here when we call pA->g(5.6) // as the class b doesnt not have the definitaion of g so the base class is called
//     //see the virtual functions wrt to its base class

// }