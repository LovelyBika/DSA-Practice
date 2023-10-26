#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m,x,k;
	int total=0;
	int f=0;
    cin>>t;
	while(t--){
	   cin>>n>>m>>k>>x; 
	    for(int i=1;i<x;i++)
	     if(i%k==0)
	       {
	          total += n+m;
	          if(total>x)
	          {
	              f=1;
	          }
	       }
	      else  {total+=n; f=0;}
	      if(f==1)
            cout<<"Yes"<<"\n";
          
          else cout<<"No"<<endl;
	}
	return 0;
}
