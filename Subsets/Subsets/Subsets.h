#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
		sort(nums.begin(), nums.end());
        // nums.erase(unique(nums.begin(), nums.end()), nums.end()); // 去除重复元素
		int n = nums.size();
		int MAX = 1 << n;
		vector<vector<int>> result;
		for (int i = 0; i < MAX; ++i)
		{
			vector<int> temp;
			int index = 0;
			int j = i;
			while (j > 0)
			{
				if (j & 1) // 二进制数的最低位为1，表示该位出现在此次排列中
					temp.push_back(nums[index]);
				j = j >> 1; // 一次次移位，判断各位上是否为1
				++index;    // nums的下标逐次加1
			}
			result.push_back(temp);
		}
		return result;
    }
};