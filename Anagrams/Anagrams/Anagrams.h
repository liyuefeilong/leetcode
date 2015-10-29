#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution
{
public:
	vector<string> anagrams(vector<string> &strs)
	{
		map<string, int> result;
		vector<string> temp;
		vector<string> ak;
		size_t SIZE = strs.size();

		for (size_t i = 0; i < SIZE; ++i)
		{
			temp.push_back(strs[i]);
			sort(temp.begin(), temp.end());

			if (result.find(temp[0]) == result.end())
				result.insert(map<string, int>::value_type("temp[0]", 1));
			else
				ak.push_back(strs[i]);

			temp.clear();
		}
		return ak;
	}
};