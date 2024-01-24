#include<iostream>
#include<stdio.h>
using namespace std;
 
class Node{
public :
int data;

Node *left;
Node *right;

Node(int val){
    data =val;

  left =NULL;
    right=NULL;

}

};

 Node *buildTree(Node *root){
    int data;
    cin>>data;
    root =new Node(data);
    if (data==-1)
      return NULL;
    root->left= buildTree(root->left);
    
    root->right=buildTree(root->right);

    return root;
 }
 
 void printTree(Node *root){
    if(root==NULL)      
    return;
     printTree(root->left);
     cout<<root->data<<"->";
     printTree(root->right);
     
 }
int main(){
    
    Node* root = NULL;

    // root->left= new Node(2);
    // root->right =new Node(3);

    // root->left->left=new Node(4);
    root =buildTree(root);
    
    printTree(root);
    return 0;

}