#include<iostream>
using namespace std;
typedef struct Tre {
    int data;
    struct Tre *left;
    struct Tre *right;
} Tree;
Tree *root=NULL;
int count =0;

Tree* insert(Tree *root ,int value){
     Tree *newNode ;
     newNode = new Tre;
     newNode->data=value;
     if(root==NULL){
       newNode->left=newNode->right=NULL;
       count++;
     }
     else{
        if(count%2!=0){
            root->left= insert(root->left,value);
            }
        else 
        root->right=insert(root->right,value);    
     }
  return root ;
}
void display(Tree *root)
{
    if(root!=NULL){
        display(root->left);
        cout<<"\t"<<root->data;
        display(root->right);

    }
}
int main(){
insert(root,5);
insert(root ,7);
insert(root ,6);
insert(root ,88);
display(root);
return  0;

}