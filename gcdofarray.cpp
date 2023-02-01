class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        int min = INT_MAX, max = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if (min > nums[i])
                min = nums[i];
            if (max < nums[i])
                max = nums[i];
        }
        return gcd(min, max);
    }
};