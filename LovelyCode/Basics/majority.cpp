
// hash map
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]] += 1;
    }
    for (auto a : mp)
    {
        if (a.second > n / 2)
            return a.first;
    }
    return 0;
}