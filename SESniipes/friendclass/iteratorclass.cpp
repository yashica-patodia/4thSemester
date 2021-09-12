#include <iostream>
using namespace std;

class Node;
class List;
class Iterator
{
    Node *node;
    List *list;

public:
    Iterator() : node(0), list(0) {}
    void begin(List *);
    bool end();
    void next();
    int data();
};
class List
{
    Node *head;
    Node *tail;

public:
    List(Node *h = 0) : head(h), tail(h) {}
    void display();
    void append(Node *p);
    friend class Iterator;
};
class Node
{
    int info;
    Node *next;

public:
    Node(int i) : info(i), next(0) {}
    // friend void List::display();
    // friend void List ::append(Node *n);
    friend class Iterator;
    friend class List;
};
void Iterator::begin(List *l)
{
    list = l;
    node = l->head; // Set list & Init
}
bool Iterator::end() { return node == 0; }
void Iterator::next() { node = node->next; }
int Iterator::data() { return node->info; }
void List::display()
{
    Node *ptr = head;
    while (ptr)
    {
        cout << ptr->info << " ";
        ptr = ptr->next;
    }
}
void List::append(Node *n)
{
    if (head == NULL)
    {
        head = tail = n;
    }
    else
    {
        tail->next = n;
        tail = tail->next;
    }
}
int main()
{
    List l;
    Node n1(1), n2(2), n3(3);
    l.append(&n1);
    l.append(&n2);
    l.append(&n3);
    l.display();
    Iterator i;
    for (i.begin(&l); !i.end(); i.next())
    {
        cout << i.data() << " ";
    }
}