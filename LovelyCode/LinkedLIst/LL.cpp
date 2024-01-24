#include <iostream>
using namespace std;
typedef struct Nod
{
    int data;
    struct Nod *next;
} Node;
Node *head = NULL;
void CreateNewNode(int val)
{
    Node *one = new Nod;
    one->data = val;
    one->next = NULL;

    if (head == NULL)
    {
        head = one;
        
    }
    else
    {
        Node *ptr ;
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
            
        }
        ptr->next=one;
      
    }

   
}

void printNode()
{
    Node *ptr;
    ptr = head;
    while (ptr!= NULL)
    {

        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
    cout<<"NULL";
}
int main()
{   
    CreateNewNode(10);
    CreateNewNode(20);
     CreateNewNode(30);
     CreateNewNode(40);
    printNode();
    // Node *one = new Node;
    // Node *two = new Node;
    // Node *three = new Node;

    // one->data=1;
    // one->next= two;

    // two->data=2;
    // two->next=three;

    // three->data=3;
    // three->next= NULL;
    // head=one;

    // printNode();

    return 0;
}