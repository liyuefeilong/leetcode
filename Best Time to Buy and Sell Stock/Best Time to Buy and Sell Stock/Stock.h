#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Solution
{
public:
	int maxProfit(vector<int> &prices)
	{
		const size_t SIZE = prices.size();
		if (SIZE < 2) return 0;

		int profit = 0;
		int maxVal = prices[SIZE - 1];

		for (int i = SIZE - 1; i >= 0; --i)
		{
			maxVal = max(prices[i], maxVal);
			// i + 1 ~ SIZE 天的最大值减去交易当天i的值
			profit = max(profit, maxVal - prices[i]);
		}
		return profit;
	}

};