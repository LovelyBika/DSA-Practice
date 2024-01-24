#include <bits/stdc++.h>
using namespace std;
struct S
{
    int x;
    S &operator=(const S &others)
    {
        x = others.x;

        return *this;
    }
};

int main()
{
    S ob;
    cout << operator+(3 + 3);
    return 0;
}