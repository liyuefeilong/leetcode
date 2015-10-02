#include "TrappingRainWater.h"

int main()
{
	int num;
	vector<int> height;
	cout << "How many numbers in the input: ";
	cin >> num;
	cout << "Please input the numbers: ";
	int *input = new int[num];
	for (int i = 0; i < num; ++i)
	{
		cin >> input[i];
		height.push_back(input[i]);
	}

	

	Solution s;
	int result = s.trap(height);
	cout << "how much water it is able to trap after raining: ";
	cout << result << endl;

	delete[] input;
	system("pause");
	return 0;
}