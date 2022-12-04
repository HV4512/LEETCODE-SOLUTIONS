class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
         int n = nums.size();
    long long a1, a2, s = 0, s2 = 0, j, min = 99999,c=0,i;
    int res, ab;
        if(n==1)
            return 0;
    for(i=0;i<n;i++)
    {
        s2=s2+nums[i];
        c++;
    }
    c--;
    // cout<<s2;
    for (i = 0; i < n; i++)
    {
        s = s + nums[i];
        a1 = s / (i + 1);
        s2=s2-nums[i];
        // cout<<s2<<endl;
        if(s2==0)
        a2=0;
        else
        a2=s2/(c--);
        res=abs(a1-a2);
        // cout<<a1<<" - "<<a2<<" = "<<res<<endl;
        if(min>res)
        {
            min = res;
            j=i;
            // cout<<j<<endl;;
        }
    }
    return j;
    }
};
