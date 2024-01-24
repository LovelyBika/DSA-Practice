#include<stdio.h>
#include<conio.h>
int binarySearch(); 
void main(){
    system("cls"); 
    int ar[]={2,5,8,9,10,13,19,20};
    int item,result,n;
    n=sizeof(ar)/ar[0];
    printf("Enter the item u want to search");
    scanf("%d",&item);
    result=binarySearch(ar,item,n);
    if(result==-1)
    { printf("item %d is not found ",result);

    }
    else
    printf("item is found i.e.=%d",ar[result]);
    getch();

}
int binarySearch(int ar[],int item,int size)
{  int mid,low,high;
   low=0,high=size-1;
   mid=low+high/2;
   while(low<=high)
   { 
       if(ar[mid]==item)
       return mid;
       if (ar[mid]>item)
         low=mid--;
        if (ar[mid]<item)
        high=mid++;
   }
return -1;

}