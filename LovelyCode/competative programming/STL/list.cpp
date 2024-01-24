#include <iostream>
#include<list>
using namespace std;

list <int> li;
void Add(int n,int k ){
int frend;

for(int i=0;i<n;i++){
  cin>>frend;
  li.push_back(frend);
}
}
void del(int n,int k){
	bool del =false;
	
	for(auto i=li.begin();i!=li.end();i++)
{   auto val1=*i;
    auto val2= *next(i);
 	if(val1<val2)
 	 {	li.erase(i);
  		del =true;
  		k--;
  		if(k==0)
	  	break;
  
  	}
  
}
if (del==false)
  li.pop_back();
}

void print(){
    for(auto a:li){
        cout<<a<<" ";    }
}
int main() {
	int num,n,k;
	cin >> num;    //Reading input from STDIN
	while(num--){
       cin>>n>>k;
	   Add(n,k);
	   del(n,k);
       print();
       cout<<"\n";
       li.clear();
	}
	return 0;
}