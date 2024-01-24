#include <bits/stdc++.h>
using namespace std;

double pow(double a, int n)
{
    double ans = 1.0;
    long nn = n;
    if (nn < 0)
        nn = -1 * nn;
    while (nn)
    {
        if (n % 2 == 1)
        {
            ans = ans * a;
            nn = n - 1;
        }
        else
        {
            ans = a * a;
            nn = nn / 2;
        }
    }

    if (n < 0)
        ans = (double)(1.0) / (double)(ans);
    return ans;
}
double pow(double a, int n)
{

    pow(a * a, n / 2);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, n;
    cin >> a >> n;
    double x = pow(a, n);
    cout << x;
    return 0;
}