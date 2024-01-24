#include<stdio.h>
#include<conio.h>
int linearSearch(int ar[],int item, int n)
{for(int i=0;i<n;i++)
  {if(item==ar[i])
    return i;
  }
  return -1;
}

void main()
{ system("cls");
int ar[]={2,5,7,0,4,8,30};
  int item,n,result;
   n=sizeof(ar)/ar[0];
  printf("enter the item u want to search");
  scanf("%d",&item);
  result=linearSearch(ar,item,n);
  if(result==-1)
  {
      printf("item is not find");
  }
  else 
  {
      printf(" your item is found i.e.=%d",item);
  }
getch();
}