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

//У�ſڿ����õ����� ������Ҫȥ�����ط�������Ի�����εľ������ǰ�����������磬֮��ȷ��ί������