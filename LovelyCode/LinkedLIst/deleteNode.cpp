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
Node *deleteLast(Node *list)
{
    Node *head = list;
    Node *prev;
    Node *current = list;
    while (current->next != nullptr)
    {
        prev = current;
        current = current->next;
    }
    prev->next = nullptr;
    delete current;
    return head;
}
// **
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         node->val=node->next->val;
//         node->next=node->next->next;
//     }
// }
int main()
{
    Node *one = new Node(4);
    Node *two = new Node(5);
    Node *three = new Node(2);
    Node *four = new Node(1);

    one->next = two;
    two->next = three;
    three->next = four;

    Node *current = one;
    current = deleteLast(current);
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}