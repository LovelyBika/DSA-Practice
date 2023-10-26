#include <iostream>
using namespace std;

int main() {
	int T,C,X,Y,M;
	cin>>T;
	while(T--){
	    cin>>C>>X>>Y;
	    M=(C-X)*Y;
	    cout<<M;
    }
	
	return 0;
}