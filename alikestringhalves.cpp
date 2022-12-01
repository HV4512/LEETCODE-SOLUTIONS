class Solution {
public:
    bool halvesAreAlike(string s) {
        int l,a=0,b=0;
        l=s.size();
        for(int i=0;i<l/2;i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
            a++;    
            }
        }
          for(int i=l/2;i<l;i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
            b++;    
            }
        }
        if(a==b)
            return true;
        return false;
    }
};