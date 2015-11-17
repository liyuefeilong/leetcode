#include <iostream>
#include <string>
<<<<<<< HEAD
=======
#include <vector>
>>>>>>> origin/master

using namespace std;

class Solution
{
public:
<<<<<<< HEAD
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
=======
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
>>>>>>> origin/master
	}
};