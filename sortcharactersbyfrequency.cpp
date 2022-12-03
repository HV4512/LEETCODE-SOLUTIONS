class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp; //A map to get the frequency 
        for(auto it:s)
        {
            mp[it]++;
        }
        vector<pair<int,char>> vp; //a pair of frequency and char
        for(auto it:mp)
        {
            vp.push_back({it.second,it.first});
        }
        sort(vp.begin(),vp.end()); //sorted the frequencies.
        string ans;
        for(auto it:vp)
        {
            while(it.first!=0)
            {
                ans.push_back(it.second);//inserted according to the frequency
                it.first--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};