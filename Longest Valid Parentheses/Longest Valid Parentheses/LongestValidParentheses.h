#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution
{
public:
	int longestValidParentheses(string s)
	{
		int maxLength = 0, start = 0;
		int Size = s.size();
		stack<int> temp;
		for (int i = 0; i < Size; ++i)
		{
			if (s[i] == '(')
			{
				temp.push(s[i]);
			}
			else
			{
				if (temp.empty())
				{
					start = i;
				}
				else
				{
					temp.pop();
					if (temp.empty())
					{
						if (maxLength < i - start + 1)
							maxLength = i - start + 1;
					}
				}
			}
		}
		return maxLength;
	}
};