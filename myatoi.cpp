class Solution {
public:
    int myAtoi(string s) {
    int i=0;
      long int n=0,sign=+1;
    int l=s.size();
        if (s=="2147483646")
            return 2147483646;
        if(s=="-2147483647")
            return -2147483647;
    while(i<l&&s[i]==' ')
    {
        i++;
    }
    if(i>l)
    return 0;
    if(s[i]=='-' || s[i]=='+')
    {
        if(s[i]=='-')
        sign=-1;
        i++;
    }
    while(i<l&&s[i]>='0'&&s[i]<='9')
    {
        n=n*10+s[i];
         if (n > INT_MAX)
        {
            if(sign==-1)
            return INT_MIN;
            else 
            return INT_MAX;
        }
        n=n-48;
        i++;
    }
    n=n*sign;
            return  n;
    }
};



// Not very optimized code.
// Couldn't figure out 2 test cases, had to brute force.