#include <bits/stdc++.h>
using namespace std;
// vector<vector<int>> 
void zeroMatrix(vector<vector<int>> &matrix, int n, int m)
{   cout<<matrix.size();

// for(int i=0;i<n;i++){
// 		for(int j=0;j<m;j++){
// 			matrix[i][j]*=0;
// 		}
// 	}
//  return matrix;
}

int main()
{
    vector<vector<int>> vc = {
        {4, 1, 5},
        {2, 5, 7},
        {1, 8, 9}};
    zeroMatrix(vc, 3, 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << vc[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// int main()
// {
//     int A[3][3] = {
//         {4, 1, 5},
//         {2, 5, 7},
//         {1, 8, 9}};
//     int B[3][3] = {
//         {1, 1, 1},
//         {2, 2, 2},
//         {3, 3, 3}};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             int Mul[3][3] = {0};
//             for (int k = 0; k < 3; k++)
//             {
//                 Mul[i][j] = Mul[i][j] + A[i][k] * B[k][j];
//                         }
//             cout << Mul[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }