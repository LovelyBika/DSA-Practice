#include <bits/stdc++.h>
using namespace std;

// int main(){
// string s;
// getline(cin,s);
// stringstream word(s);
// stack <string> st;
// while(word>>s){
//   cout<<s;
// }
// string last = st.top();
// cout<<last.size();

// return 0;

// }
int main()
{
  // {
  //   // int x=2;
  //   // while(x){
  //   //   cout<<x;
  //   //   x--;
  //   // }

  //   // char ch ='1';
  //   // int i = (int)ch;
  //   // cout<<i;
  //   // return 0;
//  #ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
// #endif
 string s;
  string st;
  int i = 1;
 cin>>s;
  for (i = 1; i < s.size();i++)
  {
    if (s[i] == s[i - 1])
    {
     continue;
    }
    else
    {
      st += s[i - 1];
    }
    cout<<i;
  }
  st += s[i-1];
  cout << st;
  

  return 0;
}
