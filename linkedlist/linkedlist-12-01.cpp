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