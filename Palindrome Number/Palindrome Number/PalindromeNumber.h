#include <iostream>

using namespace std;

class Solution
{
public:
	bool isPalindrome(int x) 
	{
		if (x < 0) return false;
		int SIZE = 1;
		// 以下操作用于确认x的最高位
		while (x / SIZE >= 10) SIZE *= 10;
		while (x > 0)
		{
			int left = x / SIZE;
			int right = x % 10;
			if (left != right) return false;
			// 去除x的最高位和最低位
			x = x % SIZE / 10;
			SIZE /= 100; // 位数减2
		}
		return true;
	}
};