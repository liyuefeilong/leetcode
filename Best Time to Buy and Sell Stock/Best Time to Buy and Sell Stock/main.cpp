#include "Stock.h"

int main()
{
	int n;
	cout << "Enter the number of days: ";
	cin >> n;
	int *temp = new int[n];

	cout << "Input the prices: " << endl;
	vector<int> prices(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> temp[i];
		prices[i] = temp[i];
	}

	Solution s;
	int result = s.maxProfit(prices);

	cout << "The the maximum profit is: " << result << endl;
	
	delete [] temp;
	system("pause");
	return 0;
}