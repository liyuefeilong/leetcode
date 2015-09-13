#include <iostream>
#include "CountAndSay.h"

int main()
{
	int n;
	Solution s;
	cout << "Please input the number of sequential element(s): ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		string result = s.CountAndSay(i);
		cout << result << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}