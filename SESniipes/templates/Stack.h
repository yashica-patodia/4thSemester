template <class T>
class Stack
{
    T data_[100];
    int top_;

public:
    Stack() : top_(-1) {}
    ~Stack() {}
    void push(const T &item)
    {
        data_[++top_] = item;
    }
    void pop()
    {
        --top_;
    }
    const T &top() const
    {
        return data_[top_];
    }
    bool empty() const
    {
        return top_ == -1;
    }
};