#include <bits/stdc++.h>
using namespace std;
void Merge(int ar[], int low, int mid, int high)
{
    vector<int> vc;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (ar[left] <= ar[right])
        {
            vc.push_back(ar[left]);

            left++;
        }
        else
        {
            vc.push_back(ar[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        vc.push_back(ar[left]);
        left++;
    }
    while (right <= high)
    {
        vc.push_back(ar[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        ar[i] = vc[i - low];
    }

    return;
}
void MergeSort(int ar[], int low, int high)
{
    int mid = (low + high) / 2;
    if (low >= high)
        return;
    MergeSort(ar, low, mid);
    MergeSort(ar, mid + 1, high);
    Merge(ar, low, mid, high);
    return;
}
int main()
{
#ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int vc[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vc[i];
    }
    MergeSort(vc, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << vc[i] << " ";
    }
    return 0;
}