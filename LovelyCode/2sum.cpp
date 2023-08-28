

// Normal brute force

vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    int s;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        s = 0;
        int f = 0;
        for (int j = i + 1; j < n; j++)
        {
            s = nums[i] + nums[j];
            if (s == target)
            {
                v.push_back(i);
                v.push_back(j);
                f = 1;
                break;
            }
        }
        if (f == 1)
            break;
    }
    return v;
}

// optimal approach
vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    int s, num2;
    vector<int> v;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int num1 = nums[i];
        num2 = target - num1;
        if (mp.find(num2) != mp.end())
        {
            v.push_back(mp[num2]);
            v.push_back(i);
        }
        mp[num1] = i;
    }
    return v;
}
