#include "SearchForARange.h"

int main()
{

	int n;
	cout << "Please input the size of vector: ";
	cin >> n;
	vector<int> nums(n);

	cout << "Please input the sorted numbers: ";
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;
		nums[i] = a;
	}

	cout << "Please input the target number: ";
	int target;
	cin >> target;

	Solution S;
	vector<int> result = S.searchRange(nums, target);

	cout << "The starting and ending position of a given target value is: " << result[0] << " " << result[1] << endl;

	system("pause");
	return 0;
}