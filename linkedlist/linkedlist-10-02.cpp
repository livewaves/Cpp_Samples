// sepparate even odd in SLL
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
    void separateevenodd()
    {
        Node *end = head;
        Node *prev = NULL;
        Node *curr = head;
        while(end -> next != NULL)
        {
            end = end -> next;
        }
        Node *new_end = end;
        while(curr -> data %2 !=0 && curr != end) 
        {
            new_end -> next = curr;
            curr = curr -> next;
            new_end -> next -> next = NULL;
            new_end = new_end -> next;
        }
        if (curr -> data %2 ==0)
        {
            head = curr;
            while(curr != end)
            {
                if ((curr -> data)%2 == 0)
                {
                    prev = curr;
                    curr = curr -> next;
                }
                else
                {
                    prev -> next = curr -> next;
                    curr -> next = NULL;
                    new_end -> next = curr;
                    new_end = curr;
                    curr = prev -> next;
                }
            }
        }
        else prev = curr;
        if(new_end !=end && (end->data)%2 != 0)
        {
            prev -> next = end -> next;
            end -> next = NULL;
            new_end -> next = end;
        }
        return; 
    }
};

int main()
{
    singly s1 = singly();
    s1.create(20);
    s1.create(3);
    s1.create(41);
    s1.create(6);
    s1.create(12);
    s1.create(9);
    s1.create(15);
    s1.separateevenodd();
    s1.display();
}