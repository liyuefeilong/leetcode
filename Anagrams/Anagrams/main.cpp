#include "Anagrams.h"

int main()
{
	vector<string> strs;
	strs.push_back("abc");
	strs.push_back("cba");
	strs.push_back("abcd");
	strs.push_back("bac");
	strs.push_back("adbc");

	Solution s;
	vector<string> result = s.anagrams(strs);

	for (size_t i = 0; i < result.size(); ++i)
		cout << result[i] << endl;

	system("pause");
	return 0;
}