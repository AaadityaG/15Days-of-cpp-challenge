#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack(): data_(new char[100]), top_(-1) { }
Stack::~Stack() { delete[] data_; }
int Stack::empty() { return (top_ == -1); }
void Stack::push(char x) { data_[++top_] = x; }
void Stack::pop() { --top_; }
char Stack::top() { return data_[top_]; }

int main()
{
    Stack s;
    char str[10] = "ABCDE";
    for (int i = 0; i < 5; ++i)
        s.push(str[i]);
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}