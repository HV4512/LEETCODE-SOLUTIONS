#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="babad";
    int st=0,end=0,max=1,l,r;
    int n=s.size();
    if(n==1)
    cout<<s;
    for(int i=0;i<n-1;i++)
    {
        if(n%2==0)
        l=r=i;
        else{
            l=i;r=i+1;
        }
        // l=r=i;
        while(l>=0 &&r<n)
        {
            if(s[l]==s[r])
            {
                l--;
                r++;
            }
            else
            break;
        }
        int c=r-l-1;
        if(max<c)
        {
            max=c;
            st=l+1;
            end=r-1;
        }
    }
    // string s2=;
    cout<<s.substr(st,max);
}












// class Solution {
// public:
//     string longestPalindrome(string s) {
//         string s2,s3,ans;
//     int c,i,j,max=0;
//     for(i=0;i<s.size();i++)
//     {
//         c=0;
//         s2="";
//         for(j=i;j<s.size();j++)
//         {
//             s2=s2+s[j];
//             s3=s2;
//             reverse(s3.begin(),s3.end());
//             if(s3==s2)
//             c=s2.size();
//             if(max<c){
//                 ans=s2;
//             max=c;
//             }
//         }
//     }
//         return ans;
//     }
// };