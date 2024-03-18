// insertion in linked list. done at the end
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node * next;
};

class singly
{
    private:
        Node *tail, *head;
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
    s1.display();
}