#include "HouseRobberII.h"

int main()
{
	vector<int> nums;
	int n;
	cout << "The number of houses: ";
	cin >> n;
	cout << "A list of non-negative integers representing the amount of money of each house: " << endl;

	for (int i = 0; i < n; ++i)
	{
		int temp;
		cin >> temp;
		nums.push_back(temp);
	}

	Solution s;
	int result = s.rob(nums);

	cout << "the maximum amount of money can be robbed: " << result << endl;

	system("pause");
	return 0;
}