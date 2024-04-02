// removing duplicates from a sorted DLL
#include <iostream>
using namespace std;

struct Node
{
    Node *prev;
    int data;
    Node *next;
};

Node *head;

class doubly 
{
    public:
        
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
        void deletenode(Node **head_ref, Node *del)
        {
            if(*head_ref ==NULL || del==NULL)
                return;
            
            if(*head_ref==del)
                *head_ref = del -> next;    // move on to the next node after head deletion
            
            if(del -> next != NULL)         // if the node to be deleted is not the last node
                del -> next -> prev = del -> prev;
            
            if(del -> prev != NULL)         // change the previous node. if the node to be deleted is not the 1st node
                del -> prev -> next = del -> next;

            free(del);
            return;            
        }
        void duplicates()
        {
            if (head == NULL) // empty list
            {
                return;
            }
            Node *current = head;
            Node *next;
            // travers the linked list towards the last node
            while(current -> next != NULL)
            {
                if(current -> data == current -> next -> data)
                {
                    deletenode(&head, current -> next); // remove duplicate(current -> next)
                }
                else
                {
                    current = current -> next;
                }
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
    s1.create(4);
    s1.create(5);
    s1.create(7);
    s1.duplicates();
    s1.display();
}