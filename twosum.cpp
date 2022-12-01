class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ar;
        int s=nums.size();
        for(int i=0;i<s;i++)
        {
            for(int j=i+1;j<s;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ar.push_back(i);
                    ar.push_back(j);
                }
            }
        }
          return ar;
    }
};