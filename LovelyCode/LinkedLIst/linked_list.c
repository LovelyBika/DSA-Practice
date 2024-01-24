#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int f_insert();
void e_insert();
struct list
{
  int info;
  struct list *next;
};
typedef struct list node;
node *start, *ptr;
int f_insert()
{
  node *item;
  item = (node *)malloc(sizeof(node));
  printf("enter the item to be inserted");
  scanf("%d", &item->info);
  if (start == NULL)
  {
    start = item;
    item->next = NULL;
  }
  else
  {
    item->next = start;
    start = item->info;
  }
  return start;
}

void e_insert()
{
  node *item, *temp;
  item = (node *)malloc(sizeof(node));
  printf("enter the item to be inserted to end");
  scanf("%d", &item->info);
  item->next == NULL;
  if (start == NULL)
  {
    start = item;
  }
  else
  {
    temp = start;
    while (temp->next != NULL)
    {
      temp = temp->next;
      temp->next = item;
    }
  }
}

void main()
{
  int show;
  show = f_insert();
  printf("%d", show);
  getch();
}