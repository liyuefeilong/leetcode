#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	int trap(vector<int>& height)
	{
		int n = height.size();
		int max_index = 0; // 最高的柱子
		for (int i = 0; i < n; ++i)
			if (height[max_index] < height[i]) 
				max_index = i;
		int water = 0;
		// 以最高柱子为界限，左右分开扫描
		for (int j = 1, left_max = 0; j < max_index; ++j)
		{
			if (height[j] < height[left_max]) water += height[left_max] - height[j];
			else left_max = j;
		}
		for (int k = n - 2, right_max = n - 1; k > max_index; --k)
		{
			if (height[k] < height[right_max]) water += height[right_max] - height[k];
			else right_max = k;
		}
		return water;
	}
};
