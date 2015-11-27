#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
	vector<vector<int> > combinationSum(vector<int> &candidates, int target)
	{
		vector<int> temp;
		sort(candidates.begin(), candidates.end());
		// 结果要求输出的组合不能重复，需要去除candidates中的重复元素
		candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end());
		combination(candidates, temp, 0, target);
		return result;
	}

private:
	vector<vector<int> > result;

	void combination(vector<int> &candidates, vector<int> &temp, size_t index, int target)
	{
		if (target == 0)
		{
			result.push_back(temp);
			return;
		}

		else
		{
			for (size_t i = index; i < candidates.size(); ++i)
			{
				if (candidates[i] > target)
					return;

				temp.push_back(candidates[i]);
				combination(candidates, temp, i, target - candidates[i]);
				temp.pop_back();
			}
		}
	}
};