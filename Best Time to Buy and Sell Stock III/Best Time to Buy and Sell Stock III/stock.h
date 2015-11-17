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

		 vector<int> f1(SIZE);
		 vector<int> f2(SIZE);
		 int profit = 0;

		 for (int i = 1, minVal = prices[0]; i < SIZE; ++i)
		 {
			 minVal = min(minVal, prices[i]);
			 f1[i] = max(f1[i - 1], prices[i] - minVal);
		 }

		 for (int j = SIZE - 2, maxVal = prices[SIZE - 1]; j >=0; --j)
		 {
			 maxVal = max(maxVal, prices[j]);
			 f2[j] = max(f2[j + 1], maxVal - prices[j]);
		 }

		 for (int k = 0; k < SIZE; ++k)
		 {
			 int temp = f1[k] + f2[k];
			 profit = profit < temp ? temp : profit;
		 }

		 return profit;
	 }
};