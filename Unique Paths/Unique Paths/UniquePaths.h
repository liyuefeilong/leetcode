#include <iostream>

using namespace std;

class Solution

{
public:
	int uniquePaths(int m, int n)
	{
		if (m <= 0 || n <= 0)
			return 0;

		if (m == 1 || n == 1)
			return 1;

		return uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
	}

	int uniquePaths2(int m, int n) // 动态规划
	{
		int *k = new int[m * n];

		// 到两条边处各点的走法只有一种
		for (int i = 0; i < m; ++i)
			k[i * n] = 1;
		for (int j = 0; j < n; ++j)
			k[j] = 1;

		for (int i = 1; i < m; ++i)
		{
			for (int j = 1; j < n; ++j)
			{
				k[i * n + j] = k[(i - 1) * n + j] + k[i * n + j - 1];
			}
		}

		int result = k[(m - 1) * n + n - 1];
		delete [] k;
		return result;
	}
};