#include <bits/stdc++.h>
using namespace std;

int main()
{
    string plaintText;
    getline(cin, plaintText);

    for (int i = 0; i < plaintText.size(); i++)
    {
        int ch = plaintText[i] + 3;

        cout << (ch);
    }

    return 0;
}