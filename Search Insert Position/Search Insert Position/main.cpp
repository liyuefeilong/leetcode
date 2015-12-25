#include "SearchInsertPosition.h"

int main()
{
	while (1)
	{
		int n;
		cout << "Please input the size of vector: ";
		cin >> n;

		vector<int> nums(n);

		cout << "Please input the sorted numbers: ";
		for(int i = 0; i < n; ++i)
		{
			int a;
			cin >> a;
			nums[i] = a;
		}
	
		int target;
		cout << "Please input the target number: ";
		cin >> target;

		Solution s;
		int result = s.searchInsert(nums, target);

		cout << "The index of the target is: " << result << endl << endl;
	}

	system("pause");
	return 0;
}