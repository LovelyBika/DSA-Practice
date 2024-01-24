#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}
int isEpmty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}

void push(struct stack *ptr, int val)
{

    if (isFull(ptr))
    {
        printf("Stack is overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        printf("not full %d\n", isFull(ptr));
    }
}
int pop(struct stack *ptr)
{
    if (isEpmty(ptr))
        printf("stack is underflow\n");
    else
    {
        int val = ptr->arr[ptr->top] = val;

        ptr->top--;
        return val;
    }
}

 int peek(struct stack *ptr,int i)
{   
    int arrayInd=ptr->top-i+1;
    if(arrayInd<0)
    {
        printf("o-O invalid\n");
        return -1;
    }
else return ptr->arr[arrayInd];

}


void main()
{

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 40;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    while (1)
    {
        int num;
        printf("Pres 1 for push\npress 2 for pop\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            // printf("enter the elemnet u want to insert\n");
            // int val;
            // scanf("%d", &val);
            // push(sp, val);
            push(sp,1);
            push(sp,34);
            push(sp,45);
            push(sp,56);
            push(sp,66);
            push(sp,55);
            push(sp,16);
            push(sp,17);
            break;
        case 2:
            pop(sp);
            printf("top elemnent-%d is popeed\n", pop(sp));

            break;

        case 3:
            for (int j = 1; j <=sp->top + 1; j++)
            {
                printf("the value at %d position is %d\n",j,peek(sp,j));
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("out of choices\n");
        }
    }


}