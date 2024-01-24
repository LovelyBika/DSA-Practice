#include <bits/stdc++.h>
using namespace std;
// Best Approaach BY
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();
}

// OPtimal approach
bool binarySearch(vector<int> matrix, int target)
{
    int l = 0;
    int h = matrix.size() - 1;

    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (matrix[mid] == target)
            return true;
        else if (matrix[mid] < target)
            l = mid + 1;
        else
            h = mid - 1;
    }
    return false;
}

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();

    for (int i = 0; i < m; i++)
        if (matrix[i][0] <= target && target <= matrix[i][n - 1])
            return binarySearch(matrix[i], target);
    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};
    bool result = searchMatrix(matrix, 3);
    if (result)
        cout << "Element found";
    else
        cout << "Element not found";
    return 0;
}