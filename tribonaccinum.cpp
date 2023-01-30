class Solution
{
public:
    int tribonacci(int n)
    {
        int i, tr[50];
        tr[0] = 0;
        tr[1] = 1;
        tr[2] = 1;
        for (i = 3; i <= n; i++)
        {
            tr[i] = tr[i - 3] + tr[i - 2] + tr[i - 1];
        }
        return tr[n];
    }
};