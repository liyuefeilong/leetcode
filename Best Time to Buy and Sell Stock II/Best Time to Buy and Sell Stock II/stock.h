#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int maxProfit(vector<int> &prices)
	{
		const size_t SIZE = prices.size();
		if (SIZE < 2) return 0;

		int profit = 0;
		int temp = 0;

		for (int i = 1; i < SIZE; ++i)
			if (prices[i] > prices[i - 1])
				profit += prices[i] - prices[i - 1];
		
		return profit;
	}
};