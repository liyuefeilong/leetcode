#include <string>
#include <iostream>
using std::string;

class Solution
{
public:
	bool validPalindrome(string s)
	{
		if (s == "")
			return true;
		auto index_start = s.begin(), index_end = prev(s.end());
		while (index_start < index_end)
		{
			if (!isalpha(*index_start))
				index_start++;
			else if (!isalpha(*index_end))
				index_end--;
			else if (*index_start == *index_end)
			{
				index_start++;
				index_end--;
			}
			else return false;
		}
		return true;
	}
};
