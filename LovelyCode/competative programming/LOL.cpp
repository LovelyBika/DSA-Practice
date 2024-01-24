#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans, cl, co;
    string LOL;
    cin >> n;
    cin >> LOL;
    for (int i = 0; i < n; i++)
    {
        if (LOL[i] == 'L')
        {
            cl++;
        }
        else
            co++;
    }

    cout << ans;
    return 0;
}