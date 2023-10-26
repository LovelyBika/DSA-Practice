#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int num,count;
	cin>> num;    //Reading input from STDIN
	int ar[num], ar2[num];
    for(int i=0;i<num;i++)
	  cin>>ar[i];
	for(int j=0;j<num;j++)
	  cin>>ar2[j];  
    for(int k=0;k<num;k++){ count=0;
		while(ar[k]>=ar2[k]){ 
			ar[k]=ar[k]-ar2[k];
		     
             if(ar[k]==ar2[k])
		   {
			   cout<<count;
			   return 0;
		   }
         count++;    
	}
		 
		 
	}
cout<<-1;

}
