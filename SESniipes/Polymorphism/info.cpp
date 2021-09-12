// #include<iostream>
// using namespace std;
// class A
// {
// };
// class B : public A
// {
// };
// int main()
// {
//     A *p;      //static type is A
//     p = new B; //dynamic type is B
// }
// #include <iostream>
// using namespace std;
// class B
// {
// public:
//     void f() {}
// };
// class D : public B
// {
// public:
//     void f() {}
// };
// int main()
// {
//     B b;
//     D d;
//     b.f(); // B::f()
//     d.f(); // D::f() ----- Overridden
//     // masks the base class function
// }
// //If a member of a base class is redefined in the derived class with the same signature then it masks the base class
// // The derived class method f() is linked to the
// // object d. As f() is redefined in the derived class,
// // the base class version cannot be called with the
// // object of a derived class

// //Non-Virtual method --when calling a function ,binding is always decided by the type of the pointer same goes for references!
// #include <iostream>
// using namespace std;
// class B
// {
// public:
//     void f() {}
// };
// class D : public B
// {
// public:
//     void f() {}
// };
// int main()
// {
//     B b;
//     D d;
//     B *p;
//     p = &b;
//     p->f(); // B::f()
//     p = &d;
//     p->f(); // B::f()
// }
// //Virtual method -Binding is decided by the type of object it currently refers to
// #include <iostream>
// using namespace std;
// class B
// {
// public:
//     virtual void f() {}
// };
// class D : public B
// {
// public:
//     virtual void f() {}
// };
// int main()
// {
//     B b;
//     D d;
//     B *p;
//     p = &b;
//     p->f(); // B::f()
//     p = &d;
//     p->f(); // D::f()
// }
// // CPP program to illustrate
// // working of Virtual Functions
// // #include <iostream>
// // using namespace std;

// // class base {
// // public:
// //     void fun_1() { cout << "base-1\n"; }
// //     virtual void fun_2() { cout << "base-2\n"; }
// //     virtual void fun_3() { cout << "base-3\n"; }
// //     virtual void fun_4() { cout << "base-4\n"; }
// // };

// // class derived : public base {
// // public:
// //     void fun_1() { cout << "derived-1\n"; }
// //     void fun_2() { cout << "derived-2\n"; }
// //     void fun_4(int x) { cout << "derived-4\n"; }
// // };

// // int main()
// // {
// //     base* p;
// //     derived obj1;
// //     p = &obj1;

// //     // Early binding because fun1() is non-virtual
// //     // in base
// //     p->fun_1();

// //     // Late binding (RTP)
// //     p->fun_2();

// //     // Late binding (RTP)
// //     p->fun_3();

// //     // Late binding (RTP)
// //     p->fun_4();

// //     // Early binding but this function call is
// //     // illegal(produces error) becasue pointer
// //     // is of base type and function is of
// //     // derived class
// //     // p->fun_4(5);
// // }
// // Output:

// // base-1
// // derived-2
// // base-3
// // base-4
// ///If we have created a virtual function in the base class and it is being overridden in the derived class then we don’t need virtual keyword in the derived class, functions are automatically considered as virtual functions in the derived class.
