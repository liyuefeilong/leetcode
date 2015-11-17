#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
	int numDecodings(string s)
	{
		if (s.size() < 1 || (s.size() > 0 && s[0] == '0')) return 0;
		vector<int> f(s.size() + 1, 0);

		f[0] = 1;
		f[1] = 1;

		for (size_t i = 2; i < s.size() + 1; ++i)
		{
			if (s[i - 1] == '0')
				f[i] = f[i - 1]; 
			else if (s[i - 1] <'7' && (s[i - 2] == '1' || s[i - 2] == '2'))
				;
		}
	}
};