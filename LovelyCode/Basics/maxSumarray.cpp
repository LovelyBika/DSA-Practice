int longestSubarrayWithSumK(vector<int> a, long long k)
{
    // Write your code here
    int n = a.size();
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            sum += a[j];
            count++;
            if (sum == k)
                return count;
        }
    }
}