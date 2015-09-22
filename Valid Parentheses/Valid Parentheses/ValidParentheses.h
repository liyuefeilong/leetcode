#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
	bool isValid(string const& s)
	{
		if (s.size() == 0)
			return false;
		stack<char> temp;
		for (size_t i = 0; i < s.size(); ++i)
		{
			if (s[i] == ')' || s[i] == ']' || s[i] == '}')
			{
				if (temp.empty())
					return false;
				else
				{
					char k = temp.top();
					temp.pop();
					if ((k == '(' && s[i] != ')') || (k == '[' && s[i] != ']') || (k == '{' && s[i] != '}'))
						return false;
				}
			}
			else if (s[i] == '(' || s[i] == '[' || s[i] == '{')
				temp.push(s[i]);
			else return false;
		}
		return temp.empty(); // 只有当最后栈为空时才说明输入字符串是有效的
	}
};
