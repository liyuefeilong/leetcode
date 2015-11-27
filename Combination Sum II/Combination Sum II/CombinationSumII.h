#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
	vector<vector<int> > combinationSum2(vector<int> &candidates, int target)
	{
		vector<int> temp; // 用于存放临时组合
		sort(candidates.begin(), candidates.end());
		combinationDFS(candidates, temp, 0, target);
		return resultult;
	}

private:
	vector<vector<int> > resultult;

	void combinationDFS(vector<int> &candidates, vector<int> &temp, size_t index, int target)
	{
		if (target == 0)
		{
			resultult.push_back(temp);
			return;
		}

		else
		{
			int prev = -1;
			for (size_t i = index; i < candidates.size(); ++i)
			{
				// 由于candidates中元素可能有重复，以下操作的意义是判断上轮循
				// 环是否选择了candidates[i]，是则跳过选择下一个candidates元素
				// 直到下标到达比prev大的元素，选择该元素进行下一轮递归
				if (prev == candidates[i])
					continue;

				if (candidates[i] > target)
					return;

				prev = candidates[i];
				temp.push_back(candidates[i]);
				combinationDFS(candidates, temp, i + 1, target - candidates[i]);
				temp.pop_back();
			}
		}
	}
};
