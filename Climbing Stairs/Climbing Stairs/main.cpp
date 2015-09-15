#include "ClimbingStairs.h"
#include <iostream>

int main()
{
	int n;
	cout << "How many stairs? " << "Input: ";
	cin >> n;
	Solution s;
	int result1 = s.climbStairs1(n);
	int result2 = s.climbStairs2(n);

	cout << "How many ways to reach the finish line? " "Result1£º" << result1 << endl;
	cout << "How many ways to reach the finish line? " "Result2£º" << result2 << endl;
	system("pause");
	return 0;
}