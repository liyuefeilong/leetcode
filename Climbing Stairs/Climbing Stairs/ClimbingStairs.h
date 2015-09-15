#include <iostream>
using namespace std;

class Solution
{
public:
	// 时间复杂度O(1)
	int climbStairs1(const int n)
	{
		const double sqrtNum = sqrt(5);
		return int(floor((pow((1 + sqrtNum) / 2, n + 1) - pow((1 - sqrtNum) / 2, n + 1)) / sqrtNum));
	}

	// 时间复杂度O(n)
	int climbStairs2(const int n)
	{
		int current = 1;
		int last = 0;
		for (int i = 1; i <= n; i++)
		{
			int temp = current;
			current += last;
			last = temp;
		}
		return current;
	}
};