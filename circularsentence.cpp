class Solution
{
public:
    bool isCircularSentence(string sentence)
    {
        string s = sentence;
        int l = sentence.size(), f, c = 0;

        //       for one word in the string
        if (l == 0)
        {
            return 0;
        }

        for (int i = 0; i < l; i++)
        {
            if (s[i] == ' ')
                c++;
        }
        if (c == 0)
        {
            if (s[0] == s[l - 1])
            {
                f = 1;
            }
            else
                return 0;
        }

        for (int i = 0; i < l; i++)
        {
            // if(i==l-1)
            //     break;
            if (s[0] == s[l - 1])
            {
                f = 1;
            }
            else
                return 0;
            if (s[i] == ' ')
            {
                if (s[i - 1] == s[i + 1])
                {
                    f = 1;
                }
                else
                    return 0;
            }
            else
                continue;
        }

        return f;
    }
};