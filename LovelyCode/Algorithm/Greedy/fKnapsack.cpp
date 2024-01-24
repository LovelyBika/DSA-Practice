#include <bits/stdc++.h>
using namespace std;
// Fracional Knapsack (Breaking of Items is allowed)
// bool cmp(pair<int, int> a, pair<int, int> b)
// {
//     if (a > b)
//         return false;// comparator take opposite bool value to perform Swap function
//     return true;
// }
bool cmp(pair<int, int> a, pair<int, int> b)
{
    double r1 = (double)a.second / (double)a.first;
    double r2 = (double)b.second / (double)b.first;
    return r1 > r2;
}
double fracionalKnapSack(vector<pair<int, int>> &items, int n, int w)
{
    sort(items.begin(), items.begin() + n, cmp);
    int currWeight = 0;
    double finalValue = 0;
    for (int i = 0; i < n; i++)
    {
        if (currWeight + items[i].first <= w)
        {
            currWeight += items[i].first;
            finalValue += items[i].second;
        }
        else
        {
            int remain = w - currWeight;
            finalValue += (items[i].second / (double)items[i].first) * (double)remain;
            break;
        }
    }

    return finalValue;
    for (int i = 0; i < n; i++)
    {
        cout << items[i].second << " "
             << items[i].first << " " << items[i].second / items[i].first << endl;
    }
}

int main()
{ // Vector Containing Value and theirs weights of Objects {{weight,values}}
    int n = 6, w = 200;
    vector<pair<int, int>> items = {{50, 40}, {40, 50}, {90, 25}, {120, 100}, {10, 30}, {200, 45}};
    double maxProfit = fracionalKnapSack(items, n, w);
    cout << "maxProfit: " << maxProfit << endl;
    return 0;
}