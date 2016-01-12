#include "Subsets.h"

int main()
{
	int n;
	cin >> n;
	vector<int> nums(n);

	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;
		nums[i] = a;
	}

	Solution s;

	vector<vector<int> > result = s.subsets(nums);

	for (int i = 0; i < result.size(); ++i)
	{
		for (int j = 0; j < result[0].size(); ++j)
		{
			cout << result[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}