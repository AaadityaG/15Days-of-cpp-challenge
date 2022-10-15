class Stack
{
private: // Implementation
    char *data_;
    int top_;

public: // Interface
    Stack();
    ~Stack();
    int empty();
    void push(char x);
    void pop();
    char top();
};
