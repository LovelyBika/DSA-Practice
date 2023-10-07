#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string str;
    getline(cin, str);
    stack<string> s;
    string word;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            s.push(word);

            word = "";
        }
        else
            word += str[i];
    }
    string ans = "";
    while (s.size()!=1)
    {
        ans += s.top() + " ";

        s.pop();
    }
    ans+=s.top();
    for (auto a : ans)
    {
        cout << a;
    }
    return 0;
}