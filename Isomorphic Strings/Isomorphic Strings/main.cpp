#include "IsomorphicStrings.h"

int main()
{
	cout << "The first string is: ";
	string s;
	cin >> s;
	cout << "The second string is: ";
	string t;
	cin >> t;
	Solution a;
	bool result = a.isIsomorphic(s, t);

	cout << boolalpha << "The result is: " << result << endl;
	system("pause");
	return 0;
}