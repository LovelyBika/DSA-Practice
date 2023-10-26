#include<bits/stdc++.h>
using namespace std;


int main(){
    vector <int > v={3,2,3,3};
   for(int i=0;i<v.size();i++){
         if(v[i]==3)
            {  
                v.erase(v.begin()+i);
            }
            }
      
       for(auto a:v){
        cout<<a<<" ";
       }
        

    return 0;
}