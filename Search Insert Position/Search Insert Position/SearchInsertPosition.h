#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size(), low = 0, high = n - 1, midIndex = 0;
		while (low <= high)
		{
			midIndex = (low + high) / 2;
			if (nums[midIndex] == target)
				return midIndex;
			else if (nums[midIndex] > target)
				high = midIndex - 1;
			else
				low = midIndex + 1;
		}
		// ±ß½ç
		if (low > n)
		    return n;
		if (high < 0)
			return 0;
    }
};