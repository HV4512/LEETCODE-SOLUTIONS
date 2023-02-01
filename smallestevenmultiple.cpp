class Solution
{
public:
    int smallestEvenMultiple(int n)
    {
        int i = 1;
        int r;
        while (true)
        {
            r = n * i;
            if (r % 2 == 0)
                return r;
            i++;
        }
    }
};