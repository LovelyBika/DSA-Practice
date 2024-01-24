#include <stdio.h>
#include <conio.h>
#define size 10
void push(int);
void pop();
void display();
int stack[size], top = -1;
int main()
{ system("cls");

 while(1){
  int n = 0;
  printf("\npress 1 for Push\n");
  printf("press 2 for pop\n");
  printf("press 3 for display\n");
  printf("press 4 for exit\n");
  printf("enter the case no :");
  scanf("%d", &n);
  int value;
  switch (n)
  {
  case 1:
    printf("enter the value to be inserted");
    scanf("%d", &value);
    push(value);
    break;
  case 2:
    printf("enter the value for pop");
    pop();
    break;
  case 3:printf("your values are ");
    display();
    break;
  case 4:
    
    exit(0);
    break;
  default:
    printf("no is out given choice");
    break;
  }
 }
}
void push(int val)
{
  if (top == size - 1)
  {
    printf("stack is overflow");
  }
  top++;
  stack[top] = val;
  printf("insertion is done");
}

void pop()
{
  if (top == -1)
  {
    printf("stack is underflow");
  }
  else
  {
    printf("\n deleted the stack%d", stack[top]);
    top--;
  }
}
void display()
{
  if (top == -1)
    printf("stack is empty");

  else
  {
    printf("the elements in stack are\n");
    for (int i = top; i >= 0; i--)
      printf("%d", stack[i]); 
  }
}
