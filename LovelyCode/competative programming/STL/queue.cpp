#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    string x;

    for (int i = 0; i < 4; i++)
    {
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
}