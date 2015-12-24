#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	int firstMissingPositive(vector<int>& nums)
	{
		int n = nums.size();
		for (int i = 0; i < n; ++i)
		{
			int temp = 0;
			while (i + 1 != nums[i] && nums[i] != nums[nums[i] - 1] && nums[i] > 0)
			{
				temp = nums[i];
				nums[i] = nums[temp - 1];
				nums[temp - 1] = temp;
			}
		}

		for (int i = 0; i < n; ++i)
		{
			if (i + 1 != nums[i])
				return i + 1;
		}

		return n + 1;
	}
};

//校门口可以拿到菜谱 船上需要去各个地方和人物对话，大段的剧情过后前往莱恩福特社，之后确认委托内容