class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ls;
       vector<int> s1hash(26, 0);
        vector<int> s2hash(26, 0);
        int s1len = p.size();
        int s2len = s.size();
        if (s1len > s2len)
            return ls;

        int left = 0, right = 0;
        while (right < s1len)
        {
            s1hash[p[right] - 'a'] += 1;
            s2hash[s[right] - 'a'] += 1;
            right += 1;
        }
        right -= 1; // to point right to the end of the window
        while (right < s2len)
        {
            if (s1hash == s2hash)
                ls.push_back(left);
            right += 1;
            if (right != s2len)
                s2hash[s[right] - 'a'] += 1;
            s2hash[s[left] - 'a'] -= 1;
            left += 1;
        }
        return ls;
    }
};