#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream myfile("deno.txt");
    // myfile.open("deno.txt");
    myfile<<"hello";
    string str;
    while(!myfile.eof()){ 
        cin>>s;
        }
    
    myfile.close();
    return 0;
}