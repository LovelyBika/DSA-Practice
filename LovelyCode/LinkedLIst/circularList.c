#include<stdio.h>
#include<stdlib.h>
struct node{
int data ;
struct node *next;
};
struct node *CircularTraversal(struct node *head){
    struct node *ptr=head;
//   printf("element is: %d\n",ptr->data);
//         ptr=ptr->next;
      
do{
        printf("elemnt is: %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
    
  return head;
}



void main(){
 struct node *head, *second, *third, *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
   fourth->next = head;
      
    CircularTraversal(head);
 
}