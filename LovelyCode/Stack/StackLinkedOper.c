#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void linkedTraversal(struct node *top)
{
    while (top != NULL)
    {
        printf("element is: %d\n", top->data);
        top = top->next;
    }
}

int isEmpty(struct node *top)
{
    if (top == NULL)
        return 1;
    else
        return 0;
}
int isFull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
        return 1;
    else
        return 0;
}
struct node *push(struct node *top, int x)
{

    if (isFull(top))
    {
        printf("the stack is overflow");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
    }
}
int pop(struct node **top)
{ // this coould be done also via making top global variable and **top will change into tp
    if (isEmpty(*top))
    {
        printf("underflow\n");
    }
    else
    {
        struct node *n = (*top);
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int peek(struct node* top,int pos){
    struct node* ptr =top;
    for(int i=0;i<pos-1&&ptr!=NULL;i++){
      ptr=ptr->next;

    }
    if(ptr!=NULL){
        return ptr->data;}
        else
         return-1;
    

}
int main()
{
    struct node *top = NULL;
    top = push(top, 23);
    top = push(top, 45);
    top = push(top, 56);
    linkedTraversal(top);
    // int ele = pop(&top);
    // printf("poped elemnt is: %d\n", ele);
   
   
   printf("value at positon 2 is: %d\n",peek(top,2));
   
    linkedTraversal(top);
    
    return 0;
}