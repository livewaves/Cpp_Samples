// deleting from a singly linked list
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node * next;
};
 Node *tail, *head;
class singly
{
    
       
    public:
        singly()
        {
            // used just to avoid any garbage values; initialization    
            head = NULL;
            tail = NULL;
        }    
    void create(int value)
    {
        Node *temp = new Node;
        temp -> data = value;
        temp -> next = NULL;
        if (head == NULL)           // if list is empty, head and tail is the new created Node
        {
            head = temp;
            tail = temp;
            temp = NULL;
        } 
        else
        {
            tail -> next = temp;    // create connection
            tail = temp;            // move forward to the latest created Node. (append)
        }
    }
    void deletenode(struct Node **head_ref, int key)
    {
        struct Node* temp = *head_ref, *prev;
        if(temp != NULL and temp -> data == key)
        {
            *head_ref = temp -> next;
            free(temp);
            return;
            while(temp != NULL && temp -> data != key)
            {
                prev = temp;
                temp = temp -> next;
            }
            if (temp == NULL) return;
            prev -> next = temp ->next;
            free(temp);
        }
    }
    void display()
    {
        Node *temp = new Node;
        temp = head;
        while(temp != NULL)         // display until the last Node since the last node points to NULL
        {
            cout << temp -> data << endl;
            temp = temp -> next;
        }
    }
};

int main()
{
    singly s1 = singly();   // initialization
    s1.create(2);
    s1.create(3);
    s1.create(4);
    s1.deletenode(&head,2);
    s1.display();
}