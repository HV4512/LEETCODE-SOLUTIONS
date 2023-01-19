class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {        
   int c=0;
            unordered_map<int,int> ans;
            ans[k]=1;
            int sum=0;
            for(int num:nums)
            {
                sum+=num;
                c+=ans[sum];
                ans[sum+k]++;  
            }
             return c;
    }
};