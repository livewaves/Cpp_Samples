#include <iostream>
using namespace std;

// Define the structure of a node in the singly linked list
struct Node {
    int data;      // Data stored in the node
    Node *next;    // Pointer to the next node in the list
};

int main() {
    // Declare a pointer to a node
    Node *p;

    // Create a new node and assign its address to 'p'
    p = new Node;

    // Assign data to the node
    p->data = 10;

    // Set the next pointer of the node to NULL since it's the only node in the list for now
    p->next = NULL;

    // Output the data and next pointer of the node
    cout << "Data: " << p->data << endl;
    cout << "Next Pointer: " << p->next << endl;

    // Create another node
    Node *q;
    q = new Node;
    q->data = 20;
    q->next = NULL;

    // Connect the first node ('p') to the second node ('q')
    p->next = q;

    // Output the data of the next node from the first node ('p')
    cout << "Data of Next Node: " << p->next->data << endl;

    // Output: Data: 10
    //         Next Pointer: 0
    //         Data of Next Node: 20

    return 0;
}
