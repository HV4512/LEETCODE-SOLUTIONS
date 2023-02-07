class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> f;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            f.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2!=0)
            f.push_back(nums[i]);
        }
        return f;

        
    }
};