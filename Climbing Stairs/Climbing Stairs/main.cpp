#include "ClimbingStairs.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "How many stairs? " << "Input: ";
	cin >> n;
	Solution s;
	int result = s.climbStairs1(n);

	cout << "How many ways to reach the finish line? " "Result£º" << result << endl;
	system("pause");
	return 0;
}