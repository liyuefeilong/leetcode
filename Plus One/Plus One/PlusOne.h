#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
	void plusOne(vector<int>& digits)
	{
		int carry = 1;
		const int digitsSize = digits.size();
		for (int i = digitsSize - 1; i >= 0; i--)
		{
			digits[i] += carry;
			if (digits[i] < 10)
			{
				carry = 0;
				break;
			}
			carry = digits[i] / 10;
			digits[i] %= 10;
		}
		if (carry != 0)
			digits.insert(digits.begin(), carry);
	}
};