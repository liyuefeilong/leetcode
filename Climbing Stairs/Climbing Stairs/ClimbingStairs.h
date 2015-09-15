#include <iostream>

class Solution
{
public:
	int climbStairs1(int n)
	{
		const double sqrtNum = sqrt(5);
		return floor(pow((1 + sqrtNum) / 2, n) - pow((1 - sqrtNum) / 2, n) / sqrtNum);
	}

	int climbStairs2(int n)
	{
		;
	}
};