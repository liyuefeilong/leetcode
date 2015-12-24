#include "SortColors.h"

int main()
{
	int n;
	cout << "Input the size of objects: ";
	cin >> n;
	vector<int> nums(n);
	cout << "Input the objects: ";
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;
		nums[i] = a;
	}

	Solution s;

	s.sortColors(nums);

	int SIZE = nums.size();

	cout << "The sorted colors are: ";
	for (int i = 0; i < SIZE; ++i)
		cout << nums[i] << " ";
	cout << endl;

	system("pause");
	return 0;
}