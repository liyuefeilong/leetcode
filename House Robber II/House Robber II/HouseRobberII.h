#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int rob(vector<int>& nums)
	{
		size_t n = nums.size();
		if (n == 0) return 0;
		else if (n == 1) return nums[0];
		else
			return max(maxRobVal(nums, 0, n - 2), maxRobVal(nums, 1, n - 1));
	}

private:
	int maxRobVal(vector<int>& nums, int start, int end)
	{
		vector<int> temp(end - start + 2, 0);
		temp[start] = nums[start];
		temp[start + 1] = max(nums[start + 1], nums[start]);
		for (int i = start + 2; i <= end; ++i)
			temp[i] = max(nums[i] + temp[i - 2], temp[i - 1]);
		return temp[end];
	}
};