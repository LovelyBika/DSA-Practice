#include <bits/stdc++.h>
using namespace std;
// short-cuts for common data-types in contest;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000 // 1 billion, safer than 2B for Floyd Warshall’s

// common memset settings
// memset(memo, -1, sizeof memo);  //Intailise DP memoizations table with -1
// memeset(arr, 0, sizeof arr)     //to clear the array of integers

// some more shortcuts
// ans = a ? b : c;  //for if else task
// ans+=val;   // ans=ans+val;
// index=(index + 1) % n;  //index++ ; if (index>=n) index=0;
// index =(index-1)%n; //index--; if (index<=n) index=n-1;

// int ans =(int)((double)d + 0.5) // for rounding the integer to nearest value

// ans = min(ans,computational_value);
//  (AND) &&
//  (OR)  ||

// Some Global varibale be okay to write in competative programming
int N, target;

double dist[20][20], memo[1 << 16]; // 1<<16=2^16  N=8 maximum