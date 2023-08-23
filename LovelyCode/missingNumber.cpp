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
void test(vector<int> v)
{
    int n = v.size();
    cout << n;
}

int main()
{
    vector<int> n = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    // missingNumber(n);
    test(n);
    return 0;
}