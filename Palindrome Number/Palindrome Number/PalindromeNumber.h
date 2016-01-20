#include <iostream>

using namespace std;

class Solution
{
public:
	bool isPalindrome(int x) 
	{
		if (x < 0) return false;
		int SIZE = 1;
		// ���²�������ȷ��x�����λ
		while (x / SIZE >= 10) SIZE *= 10;
		while (x > 0)
		{
			int left = x / SIZE;
			int right = x % 10;
			if (left != right) return false;
			// ȥ��x�����λ�����λ
			x = x % SIZE / 10;
			SIZE /= 100; // λ����2
		}
		return true;
	}
};