class Solution {
public:
    bool isPalindrome(int x) {
        string s,st;
        stringstream ss;
        ss<<x;
        ss>>s;
        st=s;
        reverse(s.begin(),s.end());
        if(s==st)
            return 1;
        return 0;
    }
};