// insertion after a given node
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
            Node *p = new Node;
            Node *q;
            p -> data = integer;
            
            if (head == NULL)
            {
                p -> prev = NULL;
                p -> next = NULL;
                head = p;
                q = p;
            }
            else
            {
                p -> next = NULL;
                p -> prev = q;
                q -> next = p;
                q = p; 
            }
        }
        void newhead(int integer)
        {
            Node *newpointer = head;
            Node *p = new Node;
            p -> data = integer;
            head = p;
            head -> next = newpointer;
            newpointer -> prev = head;
        }
        void attheend(int integer)
        {
            Node *endnode = head;
            while(endnode -> next != NULL)
            {
                endnode = endnode -> next;
            }
            Node *p = new Node;
            p -> data = integer;
            endnode -> next = p;
            p -> prev = endnode;
            p -> next = NULL;
            endnode = p;
        }

        void afteranode(int key, int integer)
        {
            Node *w = head;
            Node *e;
            while(w -> data != key)
            {
                w = w -> next;
            }
            e = w -> next;
            Node *p = new Node;
            p -> data = integer;
            w -> next = p;
            p -> prev = w;
            p -> next = e;
            e -> prev = p;
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
    s1.newhead(2);
    s1.attheend(9);
    s1.afteranode(5, 6);
    s1.display();
}