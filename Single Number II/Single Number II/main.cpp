/*#include <iostream>

class Solution
{
public:
	int findSingleNumberII(int A[], int n)
	{
		;
	}
};
class Solution 
{
public:
	int findSingleNumber(int A[], int n) 
	{
		const int intWidth = sizeof(int) * 8;
		int bitNum[intWidth] = { 0 };  // initialize
		int res = 0;
		for (int i = 0; i < intWidth; i++){
			for (int j = 0; j < n; j++){
				bitNum[i] += (A[j] >> i) & 1;
			}
			res |= (bitNum[i] % 3) << i;
		}
		return res;
	}
};*/
