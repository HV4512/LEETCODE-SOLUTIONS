class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int> m;
        int n=nums.size();
        m[0]=1;
         int sum=0,ans=0;
         for(int i=0;i<n;i++)
         {
             sum+=nums[i];
             int rem=((sum%k)+k)%k;
             ans+=m[rem]++; // adding to the answer
         }
    return ans;  
    }
};