#include "CombinationSum.h"

int main()
{
	int target, n;
	cout << "How much numbers? ";
	cin >> n;
	vector<int> candidates(n);

	cout << "Please input a set of candidate numbers: ";
	for (int i = 0; i < n; ++i)
		cin >> candidates[i];

	cout << "The set of candidate numbers: ";
	for (int i = 0; i < n; ++i)
		cout << candidates[i] << " ";
	cout << endl;

	cout << "Please input the target: ";
	cin >> target;

	Solution s;
	vector<vector<int> > result = s.combinationSum(candidates, target);

	for (size_t j = 0; j < result.size(); ++j)
	{
		for (size_t k = 0; k < result[j].size(); ++k)
		{
			cout << result[j][k] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}