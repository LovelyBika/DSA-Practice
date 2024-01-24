#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string s) {
    // Complete this function
     vector<int>v;
     stringstream ss;
     
      
   }

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
