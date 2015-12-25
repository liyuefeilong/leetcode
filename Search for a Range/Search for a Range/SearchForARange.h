#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
		int n = nums.size();
        int left = searchRangeIndex(nums, target, 0, n - 1, true);
		int right = searchRangeIndex(nums, target, 0, n - 1, false);
		vector<int> result;
		result.push_back(left);
		result.push_back(right);
		return result;
    }

private:
	int searchRangeIndex(vector<int>& nums, int target, int low, int high, bool isLeft)
	{
		while (low <= high)
		{
			int midIndex = (low + high) >> 1;
			if (nums[midIndex] == target)
			{
				int temp = -1;
				if (isLeft)
				{
					if (nums[midIndex] == nums[midIndex - 1] && low < midIndex)
						temp = searchRangeIndex(nums, target, low, midIndex - 1, true);
				}
				else
				{
					if (nums[midIndex] == nums[midIndex + 1] && high > midIndex)
						temp = searchRangeIndex(nums, target, midIndex + 1, high, false);
				}
				return temp == -1 ? midIndex : temp; // temp == -1时表示只有中间一个值等于target
			}
			else if (nums[midIndex] > target)
				high = midIndex - 1;
			else
				low = midIndex + 1;
		}
			
		return -1; // 找不到target，输出-1

	}
};