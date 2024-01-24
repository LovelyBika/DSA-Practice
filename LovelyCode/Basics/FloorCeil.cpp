#include<bits/stdc++.h>
int getFloor(int ar[],int n,int x){
 int l=0,h=n-1;
 int mid;
 int ans=-1;
 while(l<=h){
	 mid=(l+h)/2;
	 if(ar[mid]<=x){
		 ans=ar[mid];
		 l=mid+1;
	 }
	 else
	    h=mid-1;
 }
 return ans;
}
int getCeil(int ar[],int n,int x){
 int l=0,h=n-1;
 int mid;
int ans=-1;
 while(l<=h){
	 mid=(l+h)/2;
	 if(ar[mid]>=x){
		 ans=ar[mid];
		 h=mid-1;
	 }
	 else
	    l=mid+1;
 }
 return ans;
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	// Write your code here.
      sort(arr,arr+n);
	  pair<int,int>FC;
	  int floor=getFloor(arr,n,x);
	  int ceil=getCeil(arr,n,x);
	  FC=make_pair(floor,ceil);
	  return FC;

}

