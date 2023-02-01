class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        if ((str1 + str2) != (str2 + str1))
            return "";
        int s1 = str1.size();
        int s2 = str2.size();
        return str1.substr(0, gcd(s1, s2));
    }
};