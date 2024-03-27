// insertion in DLL 
#include <iostream>
using namespace std;

struct Node
{
    Node *prev;
    int data;
    Node *next;
};

class doubly 
{
    public:
        Node *head;
        doubly()
        {
            head = NULL;
        }
        void create(int integer)
        {
            Node *p = new Node;         // new created node
            Node *q;                    // previous node
            p -> data = integer;
            
            if (head == NULL)
            {
                p -> prev = NULL;
                p -> next = NULL;
                head = p;               // head is new node when DLL is empty
                q = p;                  // prev node is p for next time
            }
            else
            {
                p -> next = NULL;
                p -> prev = q;          // create a connection
                q -> next = p;          
                q = p; 
            }
        }
        void display()
        {
            Node *dis = head;
            while(dis != NULL)
            {
                cout << dis -> data << endl;
                dis = dis -> next;
            }
        }
};

int main()
{
    doubly s1 = doubly();
    s1.create(4);
    s1.create(5);
    s1.create(7);
    s1.display();
}