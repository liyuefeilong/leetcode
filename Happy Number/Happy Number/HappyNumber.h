#include <iostream>
#include <map>

using namespace std;

class Solution
{
public:
	bool isHappy(int n)
	{
		if (n < 0) return false;
		if (n == 1) return true;

		map<int, bool> showNum;

		while (true)
		{
			int temp = 0;
			while (n)
			{
				temp += (n % 10) * (n % 10);
				n /= 10;
			}
			if (temp == 1)
				return true;
			else if (showNum[temp] == true) // ����ѭ������Ϊ�ǿ�����
				return false;
			else
			{
				showNum[temp] = true;
				n = temp;
			}
		}
	}
};