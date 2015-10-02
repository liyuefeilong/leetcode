#include "SimplifyPath.h"

int main()
{
	string input;
	cout << "Please input the path: ";
	cin >> input;

	Solution s;
	string result = s.simplifyPath(input);

	cout << "The simplify path is: ";
	for (size_t j = 0; j < result.size(); ++j)
		cout << result[j];
	cout << endl;
	system("pause");
	return 0;
}