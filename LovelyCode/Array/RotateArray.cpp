
//  BruteForce
void rotate(vector<int> &nums, int k)
{
    vector<int> nums = {};
    int k;
    cin >> k;
    int s = nums.size();
    stack<int> st;
    for (int i = s - 1; i >= 0; i--)
    {
        st.push(nums[i]);
        nums.pop_back();
        s--;
        k--;
        if (k == 0)
            break;
    }
    while (!st.empty())
    {
        nums.push_back(st.top());
        st.pop();
    }
    for (int j = 0; j < s; j++)
    {
        nums.push_back(nums[j]);
    }

    nums.erase(nums.begin(), nums.begin() + s);
}

// comesWithEffort    BUT TimeLimitExceed
void rotate(vector<int> &nums, int k)
{

    int s = nums.size();

    for (int i = 0; i < k; i++)
    {
        int newval = nums[s - 1];
        nums.insert(nums.begin(), newval);
        nums.pop_back();
    }
}

// finally solution
void rotate(vector<int> &nums, int k)
{

    int s = nums.size();
    k = k % nums.size();
    cout << k;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.begin() + k);
}
