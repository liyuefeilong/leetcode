#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int rob(vector<int> &num)
	{
		size_t n = num.size();
		if (n == 0) return 0;
		else if (n == 1) return num[0];
		else
		{
			vector<int> maxVal(n, 0);
			maxVal[0] = num[0];
			maxVal[1] = max(num[0], num[1]);
			for (size_t i = 2; i < n; ++i)
			{
				maxVal[i] = max(maxVal[i - 2] + num[i], maxVal[i - 1]);
			}
			return maxVal[n - 1];
		}
	}
};