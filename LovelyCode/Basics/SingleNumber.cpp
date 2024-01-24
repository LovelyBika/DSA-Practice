
// hashing by using unordered map
int singleNumber(vector<int> &nums)
{
    unordered_map<int, int> mp;
    for (auto a : nums)
    {
        mp[a] += 1;
    }
    for (auto b : mp)
    {
        if (b.second == 1)
            return b.first;
    }

    return -1;
}