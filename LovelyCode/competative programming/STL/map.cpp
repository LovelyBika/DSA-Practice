#include<iostream>
#include<map>
#include<string>
using namespace std;
void printMap(map<string, int>);
int main()
{ 
    map<string,int> marksmap;
  
  marksmap["Science"]=99;
  marksmap["Math"]=92;
  marksmap["English"]=90;
  marksmap["Computer Science"]=100;
 marksmap.insert(make_pair("lovely",1));
 marksmap.insert(make_pair("Britany",2));
 marksmap.insert(make_pair("Lana",3));
  map< string, int>::iterator iter;
  marksmap.insert({{"hindi",89},{"Sanskrit",94}});
//   for(iter=marksmap.begin();iter!=marksmap.end();iter++){
//     cout<<iter->first<<" "<<iter->second<<endl;

auto it= marksmap.find("Science");
if(it==marksmap.end()){
cout<<"No values";}
else {
  cout<<it->first<<" "<<it->second<<endl;
}
  printMap(marksmap);
  return 0;

}
void printMap(map<string, int>m){
    cout<<m.size()<<endl;
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
// int main() {
//     int q,type,y;
//     string x;
//     map<string,int> marks;
//     cin>>q;
//     for(int i=0; i<q; i++) {
//         cin>>type>>x;
//         if(type == 1){
//             cin>>y;
//             marks[x] +=y;
//         }
//         if(type == 2){
//             marks.erase(x);
//         }
//         if(type == 3){
//             cout<<marks[x]<<endl;
//         }
        
//     }