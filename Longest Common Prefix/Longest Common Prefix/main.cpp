#include "LongestCommonPrefix.h"

int main()
{
	vector<string> a;
	a.push_back("abcd");
	a.push_back("abcdef");
	a.push_back("ab");
	a.push_back("abckfc");
	a.push_back("abcabc");

	cout << "The array of strings: " << endl;
	for (int i = 0; i < a.size(); ++i)
		cout << a[i] << endl;

	Solution s;

	string result = s.longestCommonPrefix(a);

	cout << "The longest common prefix string is: " << result << endl;

	system("pause");
	return 0;
}