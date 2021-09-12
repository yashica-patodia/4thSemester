// #include <iostream>
// using namespace std;
// // Class Hierarchy
// class A
// {
// };
// class B : public A
// {
// };
// int main()
// {
//     A a;
//     B b;
//     // UPCAST
//     A *p = &b;                // implicit -- okay
//     p = static_cast<A *>(&b); // static_cast -- okay
//     p = (A *)&b;              // C-style -- okay
//     // DOWNCAST
//     q = &a;                   // implicit -- error
//     q = static_cast<B *>(&a); // static_cast -- okay: RISKY: Should use dynamic_cast
//     q = (B *)&a;              // C-style -- okay
//     return 0;
// }
// //easies type of casting -converting int to float ,double like just a fancy word for normal casting

// #include <iostream>
// using namespace std;
// // Class Hierarchy
// class A
// {
// };
// class B : public A
// {
// };
// int main()
// {
//     A a;
//     B b;
//     // UPCAST
//     A *p = &b;                // implicit -- okay
//     p = static_cast<A *>(&b); // static_cast -- okay
//     p = (A *)&b;              // C-style -- okay
//     // DOWNCAST
//     q = &a;                   // implicit -- error
//     q = static_cast<B *>(&a); // static_cast -- okay: RISKY: Should use dynamic_cast
//     q = (B *)&a;              // C-style -- okay
//     return 0;
// }
// // we cannot cast unrelated type
// //type-casting can be done btw unrealted classses if there is a constructor in  target class with the other class pointer

// #include <iostream>
// using namespace std;
// // Un-related Types
// class B;
// class A
// {
// public:
//     A(int i = 0) { cout << "A::A(i)\n"; }
//     A(const B &) { cout << "A::A(B&)\n"; }
// };
// class B
// {
// };
// int main()
// {
//     A a;
//     B b;
//     int i = 5;
//     // B ==> A
//     a = b;                 // Uses A::A(B&)
//     a = static_cast<A>(b); // Uses A::A(B&)
//     a = (A)b;              // Uses A::A(B&)
//     // int ==> A
//     a = i;                 // Uses A::A(int)
//     a = static_cast<A>(i); // Uses A::A(int)
//     a = (A)i;              // Uses A::A(int)
//     return 0;
// }
// #include <iostream>
// using namespace std;
// // Un-related Types
// class B;
// class A
// {
//     int i_;

// public:
//     A(int i = 0) : i_(i)
//     {
//         cout << "A::A(i)\n";
//     }
//     operator int()
//     {
//         cout << "A::operator int()\n";
//         return i_;
//     }
// };
// class B
// {
// public:
//     operator A()
//     {
//         cout << "B::operator A()\n";
//         return A();
//     }
// };
// int main()
// {
//     A a;
//     B b;
//     int i = 5;
//     // B ==> A
//     a = b;                 // B::operator A()
//     a = static_cast<A>(b); // B::operator A()
//     a = (A)b;              // B::operator A()
//     // A ==> int
//     i = a;                   // A::operator int()
//     i = static_cast<int>(a); // A::operator int()
//     i = (int)a;              // A::operator int()
//     return 0;
// }