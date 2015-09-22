#include "LongestValidParentheses.h"

int main()
{
	string a;
	cin >> a;
	Solution s;
	int result = s.longestValidParentheses(a);

	cout << result << endl;
	system("pause");
	return 0;
}