#include <stdlib.h>
#include <stdio.h>

struct stack
{
    int size;
    int top;
    char *arr;
};
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size-1)
        return 1;
    else
        return 0;
}
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }

    else
        return 0;
}

void push(struct stack *ptr, char val)
{
    if (isFull(ptr))
        printf("stack is overflow");
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        
    }
}
char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
        printf("stack is underflow");
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int parathensisMatch(char *exp)
{
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char*)malloc(sp->size*sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '('){
            push(sp, exp[i]);
        }
        else
        {
            if (exp[i] == ')')
            {
                if (isEmpty(sp))
                    return 0;
                else
                    pop(sp);
            }
        }
    }
    if (isEmpty(sp))
        return 1;
    else
        return 0;
}

int main()
{
    char *exp = "(8*2)";
    if (parathensisMatch(exp))
        printf("the expressing is matching\n");
    else
        printf("the expression is not matching\n");
    return 0;
}