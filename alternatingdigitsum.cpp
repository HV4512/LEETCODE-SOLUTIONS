class Solution {
public:
    int alternateDigitSum(int n) {
        int N, s = 0, c = 0;
	int i = 1;
	if (n == 10 || n == 100)
	{
		return 1;
	}
	N = n;
	while (N != 0)
	{
		N =N/10;
		c++;
	}
	while (n != 0)
	{

		int rem = n % 10;
		if (c % 2 != 0)
		{
			if (i % 2 == 0)
			{
				s = s - rem;
			}
			else
			{

				s += rem;
			}
		}
		else
		{
			if (i % 2 == 0)
			{
				s = s + rem;
			}
			else
			{

				s -= rem;
			}
		}
		n /= 10;
		i++;
	}
        return s;
    
        
    }
};
