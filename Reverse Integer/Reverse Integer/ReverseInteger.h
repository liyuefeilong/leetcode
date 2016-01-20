#include <iostream>

using namespace std;

class Solution
{
public:
	int reverse (int x)
	{
		long long result = 0;
		const int max = 0x7fffffff;  //int���ֵ  
        const int min = 0x80000000;  //int��Сֵ

		for (int time = 0; x != 0; x /= 10, ++time)
		{
			result = result * 10 + x % 10;
			if (result > max || result < min)
				result = result > 0 ? max : min;  
		}
		
		return result;
	}
};