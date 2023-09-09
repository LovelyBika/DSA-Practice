int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int ans = 0;
    int minPrice = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        minPrice = min(minPrice, prices[i]);
        ans = max(ans, prices[i] - minPrice);
    }

    return ans;
}