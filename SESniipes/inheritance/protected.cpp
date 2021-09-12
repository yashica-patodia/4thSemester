class B
{
protected: // Accessible to child
    // Inaccessible to others
    int data_;

public:
    // ...
    void Print()
    {
        cout << "B Object: ";
        cout << data_ << endl;
    }
};
class D : public B
{
    int info_;

public:
    // ...
    void Print()
    {
        cout << "D Object: ";
        cout << data_ << ", "; // Accessible
        cout << info_ << endl;
    }
};
B b(0);
D d(1, 2);
b.data_ = 5; // Inaccessible to others
b.Print();
d.Print();
