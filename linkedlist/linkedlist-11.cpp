// doubly linked list
#include <iostream>
using namespace std;

// pros: 
// can be traveresed in both forward and backward direction
// insert a new node before a node 
// cons:
// main: every node requires extra space for prev pointers
// in insertion, we need to modify prev and next pointers. 
struct Node
{
    Node *prev;
    int data;
    Node *next;
};

int main()
{
    Node *p;
    p = new Node;
    p -> data = 10;
    p -> prev = NULL;
    p -> next = NULL;

    Node *q = new Node;
    q -> data = 20;
    q -> next = NULL;
    q -> prev = p;  // create connection
    p -> next = q; 

    cout << p -> next -> data << endl;  // traverse forward direction
    cout << q -> prev -> data << endl;  // traverse backward direction
}