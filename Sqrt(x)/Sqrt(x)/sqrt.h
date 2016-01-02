#include <iostream>

using namespace std;

class Solution
{
public:
	int sqrt(int x)
	{
		if (x == 0 || x == 1) return x;
		int min = 1, max = x / 2; // 根必在此区间中
		// 二分查找
		int mid, result;
		while (min <= max)
		{
			mid = min + (max - min) / 2;
			if (x / mid > mid)
			{				
				// 根的平方需小于等于x，因此每次须在此处更新根的值
				result = mid; 
				min = mid + 1;
			}
			else if (x / mid < mid) max = mid - 1;
			else return mid;
		}
		return result;
	}
};