class Solution
{
public:
    int fib(int n)
    {
        int fn[31];
        fn[0] = 0;
        fn[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            fn[i] = fn[i - 2] + fn[i - 1];
        }
        return fn[n];
    }
};