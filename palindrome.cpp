class Solution {
public:
    bool isPalindrome(int x) {
        string s,st;
        stringstream ss;
        ss<<x;
        ss>>s;
        st=s;
        //using reverse function
        reverse(s.begin(),s.end());
        if(s==st)//checking for palindrome
            return 1;
        return 0;
    }
};
