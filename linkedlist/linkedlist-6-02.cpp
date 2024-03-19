// insertion in linked list. done at the start
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
            head = NULL;
            tail = NULL;
        }    
    void create(int value)
    {
        Node *temp = new Node;
        temp -> data = value;
        temp -> next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            temp = NULL;
        } 
        else
        {
            tail -> next = temp;
            tail = temp;
        }
    }
    void display()
    {
        Node *temp = new Node;
        temp = head;
        while(temp != NULL)
        {
            cout << temp -> data << endl;
            temp = temp -> next;
        }
    }
    void insert_start(int value)
    {
        Node * temp = new Node;             // create a Node
        temp -> data = value;   
        temp -> next = head;                // connect the head to the newly created Node
        head = temp;                        // head is the recently created Node now
    }
};

int main()
{
    singly s1 = singly();
    s1.create(2);
    s1.create(3);
    s1.create(4);
    s1.insert_start(7);
    s1.display();
}