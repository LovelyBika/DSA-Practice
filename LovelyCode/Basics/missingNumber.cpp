#include <bits/stdc++.h>
using namespace std;
// using Hash method

int missingNumber(vector<int> &nums)
{

    int ar[10] = {0};
    for (int i = 0; i < nums.size(); i++)
    {
        ar[nums[i]] += 1;
    }
    for (int i = 1; i <= 9; i++)
    {
        if (ar[i] == 0)
        {
            cout << i;
        }
    }
    return 0;
}
// using the Sum of natural nof  ----optimal soltion
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int snat = n * (n + 1) / 2;
    int s = 0;
    for (auto a : nums)
    {
        s += a;
    }

    return snat - s;
}
// best optimal solution by xor maathod
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int xor1 = 0;
    for (int i = 1; i <= n; i++)
    {
        xor1 ^= i;
    }
    int xor2 = 0;
    for (auto a : nums)
    {
        xor2 ^= a;
    }
    return xor1 ^ xor2;
}

int main()
{
    vector<int> n = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    missingNumber(n);

    return 0;
}