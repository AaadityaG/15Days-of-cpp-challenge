#include <iostream>
using namespace std;
class Node; // Forward declaration
class List
{
    Node *head; // Head of the list
    Node *tail; // Tail of the list
public:
    List(Node *h = 0) : head(h), tail(h) {}
    void display();
    void append(Node *p);
};
class Node
{
    int info;   // Data of the node
    Node *next; // Ptr. to next node
public:
    Node(int i) : info(i), next(0) {}
    friend void List::display();
    friend void List::append(Node *);
};

void List::display()
{ // friend of Node class
    Node *ptr = head;
    while (ptr)
    {
        cout << ptr->info << " ";
        ptr = ptr->next;
    }
}
void List::append(Node *p)
{ // friend of Node
    if (!head)
        head = tail = p;
    else
    {
        tail->next = p;
        tail = tail->next;
    }
}
int main()
{
    List l;                   // Init. null list
    Node n1(1), n2(2), n3(3); // Few nodes
    l.append(&n1);            // Add nodes to list
    l.append(&n2);
    l.append(&n3);
    l.display(); // Show list
}