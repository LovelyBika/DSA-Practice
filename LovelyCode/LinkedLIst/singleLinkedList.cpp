#include <iostream>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node() : val(0), next(nullptr){};
    node(int data) : val(data), next(nullptr){};
    node(int data, node *next) : val(data), next(next){};
};
class LinkedList
{
private:
    node *head, *tail;

public:
    LinkedList() : head(nullptr){};
    void insertAtTail(int val)
    {
        node *newNode = new node(val);
        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void searchNode(int keyValue)
    {
        node *current = head;
        while (current != nullptr && current->val != keyValue)
        {
            current = current->next;
        }

        if (current == nullptr)
        {
            cout << "\nData is not Found";
        }
        else
            cout << "\nvalue is found:" << current->val;
    }

    void DisplayList()
    {

        node *current = head;
        while (current != nullptr)
        {
            cout << current->val;
            current = current->next;
            if (current != nullptr)
                cout << "->";
        }
        }
};
int main()
{
    LinkedList list;
    list.insertAtTail(1);
    list.insertAtTail(45);
    list.insertAtTail(60);
    list.insertAtTail(12);
    list.DisplayList();
    list.searchNode(12);
    return 0;
}