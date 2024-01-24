#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void traversal(int ar[], int size)
{
  for (int i = 0; i < size; i++)
    printf("%d ", ar[i]);
  printf("\n");
}

int indInserstion(int ar[], int size, int index, int element)
{
  if (index >= 100)
  {
    return -1;
  }
  for (int i = size - 1; i >= index; i--)
  {
    ar[i + 1] = ar[i];
  }
  ar[index] = element;
  return 1;
}
void indDeletion(int ar[], int index, int size)
{
  for (int i = index; i < size - 1; i++)
  {
    ar[i] = ar[i + 1];
  }
}
void linearsearch(int ar[], int size)
{
  printf("enter the element you want to search\n");
  int element;
  scanf("%d", &element);
  for (int i = 0; i < size; i++)
    if (ar[i] == element)
    {
      printf("the element is %d present at position of %d ", ar[i], i);
      printf("\n");
    }
}

int binearySearch(int ar[], int size)
{
  int mid, l, r, ele;
  l = 0;
  r = size - 1;
  mid = (l + r) / 2;
  printf("enter the elment u want to search\n");
  scanf("%d", &ele);
  while (l <= r)
  {
    if (ar[mid] == ele)
      printf("%d element is found at position of %d\n", ele, mid);
    if (mid > ele)
      l = mid--;
    else
      r = mid++;
  }
  return -1;
}

int main()
{ 
  int arr[100];
  int size;
  printf("enter the sizr of array upto 100\n");
  scanf("%d", &size);
  printf("enter the elements\n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
  traversal(arr, size);
  while (1)
  {
    int num;

    printf(" Enter the 1 for see the elments of array\n Enter the 2  for insertion in array\n Enter the 3 for deletion in array\n enter 4 to search the elemnt\n enter 5 for  bineary search\n enter 6 for exit\n ");
    scanf("%d", &num);
    switch (num)
    {

    case 1:
      printf("the elements of your array\n");
      traversal(arr, size);
      break;
    case 2:
      printf("Enter the index where you want to insert\n");
      int index;
      scanf("%d", &index);
      printf("enter the element you want to insert\n");
      int element;
      scanf("%d", &element);
      indInserstion(arr, size, index, element);
      traversal(arr, size + 1);
      break;
    case 3:
      printf("enter the index where u want to perform deletion\n");
      scanf("%d", &index);
      indDeletion(arr, index, size);
      traversal(arr, size - 1);
      break;

    case 4:
      linearsearch(arr, size);
      break;
    case 5:
      binearySearch(arr, size);
      break;
    case 6:
      exit(0);
      break;
    default:
      printf("you out of given choices");
      break;
    }
  }
}