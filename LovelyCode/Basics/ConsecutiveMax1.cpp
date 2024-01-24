int findMaxConsecutiveOnes(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    int max = 0;
    for (auto a : nums)
    {
        if (a == 1)
            count++;

        if (a == 0)
        {
            if (count >= max)
                max = count;
            count = 0;
        }
        if (count >= max)
            max = count;
    }
    return max;
}