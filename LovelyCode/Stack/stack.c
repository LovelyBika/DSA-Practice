#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;

};
int isEmpty(struct stack* ptr){
    if(ptr->top==-1)
       return 1;
    else 
    
        return 0;
} 

int isFull(struct stack* ptr){
   if(ptr->top==ptr->size-1)
   {return 1;}
   else 
   {return 0;}  

}


void main()
{ struct stack *s=(struct stack*)malloc(sizeof(struct stack));
s->size=20;
s->top=-1;
s->arr=(int*)malloc(s->size*sizeof(int));

// s->arr[0]=1;
// s->top++;

if(isEmpty(s))
   printf("the stack is empty");
else
printf("stack is not empty");


 
}