class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> cn;
        int c,s,i=0;
        s=arr.size();
        sort(arr.begin(),arr.end());
        while(i<s)
        {
            c=1;
            for(int j=i+1;j<s;j++)
            {
            if(arr[i]==arr[j])
            {
                c++;
            }
            else
             break;
            }
            i=i+c;
            cn.push_back(c); 
        }
        s=cn.size();
        sort(cn.begin(),cn.end());
        for(i=0;i<s-1;i++)
      {
            if(cn[i]==cn[i+1])
                return false;
        }
        return true;   
    }
};