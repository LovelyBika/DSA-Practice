#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> items = {
        {6, 3}, {1, 6}, {5, 1}, {3, 4}};

    sort(items.begin(), items.end());

    for (auto a : items)
    {
        cout << a.first << " " << a.second << endl;
    }
    return 0;
}