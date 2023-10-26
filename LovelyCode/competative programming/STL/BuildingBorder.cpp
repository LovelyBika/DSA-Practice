#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int num,n,m;
	int count=0;
   
	vector <int > vc;
    cin>> num;    //Reading input from STDIN
	while(num--)
 {
    cin>>n>>m;
     char ch[n][m];
    for(int i=0;i<n;i++)
	 for(int j=0;j<m;j++)
     {
          cin>>ch[i][j];
	 }
    for(int i=0;i<n;i++)
    { count =0;
	    for(int j=0;j<m;j++)
        {
               if(ch[i][j]=='#')
                    {    count++;   
                        vc.push_back(count);
                    }
             
        }
        
    }
    cout<<*max_element(vc.begin(),vc.end())<<endl;
        vc.clear();
 }
  return 0;
}