#include <iostream>

class Solution
{
public:
	int maxSubArray(int A[], int n) 
	{
		int Sum = 0, MaxSum = INT_MIN;
		if (n <= 0) return 0;

		for (int i = 0; i < n; ++i)
		{
			Sum += A[i];
			if (Sum < 0) Sum = 0;
			if (MaxSum < Sum) MaxSum = Sum;
		}

		return MaxSum;
	}
};