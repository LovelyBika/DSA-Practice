#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element :%d \n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertionAtFirst(struct node *head, int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = item;
    return ptr;
}

struct node *insertAtIndex(struct node *head, int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    int index;
    printf("enter the index where you want to insert node\n");
    scanf("%d", &index);
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = item;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct node *insertAtEnd(struct node *head, int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = item;
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct node *DeleteAtFirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct node *deleteAtIndex(struct node *head, int index)
{
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    struct node *q = p->next;
    p->next = q->next;
    free(q);
    return head;
}
struct node *deleteAtEnd(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

void main()
{
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
    fourth->next = NULL;
    int n;
    while (1)
    {
        printf("\npress 1 to display list \npress 2 for insert at first\npress 3 for insert at index\npress 4 for insert at end\npress 5 for exit\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            linkedTraversal(head);
            break;
        case 2:
            printf("enter the data into node\n");
            int item;
            scanf("%d", &item);
            head = insertionAtFirst(head, item);
            break;


        case 3:
            printf("enter the data into node\n");
            scanf("%d", &item);
            head = insertAtIndex(head, item);

            break;
        case 4:
            printf("enter the data into node\n");
            scanf("%d", &item);
            head = insertAtEnd(head, item);

            break;
        case 5:
            exit(0);
            break;
        default:
            printf("out of choice");
            break;
        }
    }
}