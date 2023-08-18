

void moveZeroes(vector<int> &nums)
{
    int size = nums.size();
    int count = 0, temp = 0;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == 0)
        {
            count++;
        }
        else if (count > 0)
        {
            temp = nums[i];
            nums[i] = 0;
            nums[i - count] = temp;
        }
    }
}