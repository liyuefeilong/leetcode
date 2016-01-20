#include "PhoneNumber.h"

int main()
{
	string s = "";

	Solution k;

	vector<string> result = k.letterCombinations(s);

	for (int i = 0; i < result.size(); ++i)
	{
		cout << result[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}