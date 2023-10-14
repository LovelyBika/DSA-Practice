#include <bits/stdc++.h>
using namespace std;
void insert(vector<int> &vc, int temp)
{
    if (vc.size() == 0 || temp >= vc[vc.size() - 1])
    {
        vc.push_back(temp);
        return;
    }
    int val = vc[vc.size() - 1];
    vc.pop_back();
    insert(vc, temp);
    vc.push_back(val);
}
void sortByRecur(vector<int> &vc)
{
    int n = vc.size();
    if (n == 1)
    {
        return;
    }

    int temp = vc[n - 1];
    vc.pop_back();
    sortByRecur(vc);
    insert(vc, temp);
}

int main()
{
    vector<int> vc = {4, 2, 3, 1, 10, 9};
    sortByRecur(vc);
    for (auto i : vc)
        cout << i << " ";

    return 0;
}