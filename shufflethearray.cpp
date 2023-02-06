class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> f;
        int j = 0;
        int k = n;
        for (int i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 0)
                f.push_back(nums[j++]);
            else
                f.push_back(nums[k++]);
        }
        return f;
    }
};