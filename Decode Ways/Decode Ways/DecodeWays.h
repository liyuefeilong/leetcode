#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    int numDecodings(const string &s) 
	{
		if (s.empty()) return 0;

		int pre = 1, cur;

		for (size_t i = 2; i < s.size(); ++i)
		{
			if (s[i - 1] < '3' && s[i] < '7')
			{
				cur = pre + 2;
				pre = cur;
			}
			else 
				cur = pre + 1;
		}
		return cur;
	}
};