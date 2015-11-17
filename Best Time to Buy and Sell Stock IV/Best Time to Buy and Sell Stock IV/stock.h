#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int maxProfit(int k, vector<int> &prices)
	{
		const int SIZE = prices.size();
		if (SIZE < 2 || k < 1)
			return 0;

		vector<vector<int>> profit(k, vector<int>(SIZE))
	}
};