#include <iostream>

using namespace std;

class Solution
{
public:
	int atoi(const char *str)
	{
		int num = 0;
		int sign = 1; // 正负数标记
		int strSize = strlen(str);

		int index = 0;
		while (str[index] == ' ' && index < strSize)
			index++;

		if (str[index] == '+')
			++index;
		else if (str[index] == '-') 
		{
			sign = -1;
			++index;
		}

		for (; index < strSize; ++index) 
		{
			if (str[index] < '0' || str[index] > '9')
				break;
			// 以下操作检查是否溢出
			if (num > INT_MAX / 10 || ((num == INT_MAX / 10) && (str[index] - '0') > (INT_MAX % 10))) 
				return sign == -1 ? INT_MIN : INT_MAX;
			num = num * 10 + str[index] - '0';
		}

		return num * sign;
	}
};