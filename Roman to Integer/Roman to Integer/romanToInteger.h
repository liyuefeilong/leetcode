#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
int getRomanValue(char c) {
        switch (c) {
			case 'I': return 1;
			case 'V': return 5;
			case 'X': return 10;
			case 'L': return 50;
			case 'C': return 100;
			case 'D': return 500;
			case 'M': return 1000;
			default: return 0;		
		}
	}

	int romanToInt(string s)
	{
		if (s.size() < 1) return -1;
		int result = 0;
		int temp = getRomanValue(s[0]);
		int k = temp;
		for (size_t i = 1; i < s.size(); i++)
		{
			int curr = getRomanValue(s[i]);
			if (temp > curr)
			{
				result += k;
				k = curr;
			}
			else if (temp == curr)
				k = k + curr;
			else
				k = curr - k;
			temp = curr;
		}
		result += k;
		return result;
	}
};