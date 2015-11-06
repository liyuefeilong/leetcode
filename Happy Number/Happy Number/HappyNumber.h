#include <iostream>
<<<<<<< HEAD
#include <map>
=======
>>>>>>> e7bc77ac672264a98865e9416d34fc3676481b78

using namespace std;

class Solution
{
public:
<<<<<<< HEAD
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
			else if (showNum[temp] == true) // 陷入循环，判为非快乐数
				return false;
			else
			{
				showNum[temp] = true;
				n = temp;
			}
		}
	}
=======
	
>>>>>>> e7bc77ac672264a98865e9416d34fc3676481b78
};