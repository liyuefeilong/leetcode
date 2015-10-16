#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution
{
public:
	int str2int(string s) // string转int
	{
		int result = 0;
		int base = 1;
		int t = 1; // 正负号

		if (s[0] == '-')
			t = -1;

		for (int i = s.size() - 1; i >= 0; --i)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				result += base * (s[i] - '0');	
				base *= 10;
			}
		}

		return result * t;
	}

	int evalRPN(vector<string> &tokens)
	{
		stack<int> k;

		for (int i = 0; i < tokens.size(); ++i)
		{
			if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
			{
				int Num2 = k.top(); // 第一个取出的是右操作数
				k.pop();
				int Num1 = k.top(); // 左操作数
				k.pop();

				if (tokens[i] == "+"){
					k.push(Num1 + Num2);
				}
				else if (tokens[i] == "-"){
					k.push(Num1 - Num2);
				}
				else if (tokens[i] == "*"){
					k.push(Num1 * Num2);
				}
				else if (tokens[i] == "/"){
					k.push(Num1 / Num2);
				}
			}
			else
				k.push(str2int(tokens[i]));
		}
		return k.top(); // 最后栈剩下一个元素，就是结果
	}
};