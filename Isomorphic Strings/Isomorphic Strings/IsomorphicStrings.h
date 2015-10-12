#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
	bool isIsomorphic(string s, string t)
	{
		vector<unsigned char> First(256, 0); // 创建一个含有256个0拷贝的vector
		vector<unsigned char> Second(256, 0);

		for (size_t index = 0; index < s.size(); ++index)
		{
			unsigned char charOfFirst = s[index];
			unsigned char charOfSecond = t[index];

			unsigned char& First2Second = First[charOfFirst];
			unsigned char& Second2First = Second[charOfSecond];

			if (First2Second == 0 && Second2First == 0)
			{
				First2Second = charOfFirst;
				Second2First = charOfSecond;
				continue;
			}

			if (First2Second != 0 && Second2First != 0)
			{
				if (First2Second != charOfFirst && Second2First != charOfSecond)
					return false;
				continue;
			}
			return false;
		}
		return true;
	}
};
