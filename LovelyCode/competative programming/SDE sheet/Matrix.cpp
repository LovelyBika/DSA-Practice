#include <bits/stdc++.h>
using namespace std;
#define Floop(i, n) for (int i = 0; i < n; i++)
#define Feach(ele, Container) for (auto ele : Container)

int main()
{
    vector<vector<int>> Matrix
        {
        {1, 2},
        {3, 4},
        {5, 8}};
       Floop(i,3){
        Floop(j,2){
            cout<<Matrix[i][j]<<" ";
        }
        cout<<"\n";
       }
    

    return 0;
}
