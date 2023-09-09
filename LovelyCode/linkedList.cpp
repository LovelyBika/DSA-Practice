#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node() : data(0), next(nullptr){};
    Node(int x) : data(x), next(nullptr){};
    Node(int x, Node *next) : data(x), next(next){};
};

Node *vec(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    int i = 1;
    Node *temp1 = head;
    while (i < arr.size())
    {
        Node *temp2 = new Node(arr[i]);
        temp1->next = temp2;
        temp1 = temp2;
        i++;
    }

    return head;
}

int main()
{
    vector<int> ar = {4, 2, 5, 1};
    Node *head = vec(ar);
    Node *current = new Node();
    current = head;
    while (current != nullptr)
    {
        cout << current->data;
        current = current->next;
        cout << "->";
    }
    cout << endl;
}