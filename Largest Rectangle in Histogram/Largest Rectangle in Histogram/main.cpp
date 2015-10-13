#include "LargestRectangleInHistogram.h"

int main()
{
	vector<int> height;
	
	height.push_back(2);
	height.push_back(1);
	height.push_back(5);
	height.push_back(6);
	height.push_back(2);
	height.push_back(3);
	cout << "given height = [2, 1, 5, 6, 2, 3]" << endl;

	Solution s;
	int result = s.largestRectangleArea(height);

	cout << "The area of largest rectangle is: " << result << endl;

	system("pause");
	return 0;
}