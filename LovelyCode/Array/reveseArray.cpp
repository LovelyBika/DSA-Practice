#include <bits/stdc++.h>
using namespace std;
vector<int> reverseArray(int n, vector<int> &nums)
{
    int i = 0, p = n - 1;
    while (i < p)
    {
        int temp;
        temp = nums[i];
        nums[i] = nums[p];
        nums[p] = temp;
        i++;
        p--;
    }
    return nums;
}
/* with the help of reccursion

void reveseHelper(int s,int l,vector<int>&vc)
{   
      if(s>l)
        return;
     swap(vc[s],vc[l]);
     reveseHelper(s+1,l-1, vc);
}
vector<int> reverseArray(int n, vector<int> &nums)
{  reveseHelper(0,n-1,nums); 
   return nums;     
}
 */
int main()
{
    int i = 0;

    vector<int> ar = {1, 2, 3, 4, 5};
    reverseArray(ar.size(), ar);
    for (auto b : ar)
    {
        cout << b << " ";
    }
    return 0;
}
