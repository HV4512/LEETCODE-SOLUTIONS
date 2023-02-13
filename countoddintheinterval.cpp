class Solution
{
public:
    int countOdds(int low, int high)
    {
        int x = high - low + 1;
        if (x % 2 == 0)
            return x / 2;
        else
        {
            if (high % 2 == 0 && low % 2 == 0)
                return x / 2;
            else
                return (x + 1) / 2;
        }
    }
};