class Solution {
public:
    set<vector<int>> ans;
    void backtrack(vector<int>&nums, int idx, vector<int>temp)
    {
        if(idx==nums.size())
        {
            if(temp.size()>1)
            {
            ans.insert(temp);
            }
            return;
        }
        int n=temp.size();
        int curr=nums[idx],prev= n==0?-101:temp[n-1];
        if(curr>=prev)
        {
            temp.push_back(curr);
            backtrack(nums,idx+1,temp);
            temp.pop_back();
            backtrack(nums,idx+1,temp);
        }
        else
        {
            backtrack(nums,idx+1,temp);
        }

    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>temp;
        backtrack(nums,0,temp);
        vector<vector<int>> res;
        for(auto i:ans)
        {
            res.push_back(i);
        }
        return res;
    }
};