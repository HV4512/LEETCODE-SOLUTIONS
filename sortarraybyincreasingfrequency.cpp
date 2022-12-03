class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
 unordered_map<int,int> ct;
        for(auto x:nums)
        ct[x]++;
    sort(nums.begin(),nums.end(),[&](int a, int b)
    {return ct[a]!=ct[b]?ct[a]<ct[b]:a>b;} );
    
        return nums;
    }
};