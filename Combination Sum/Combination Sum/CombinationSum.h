#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
	vector<vector<int> > combinationSum(vector<int> &candidates, int target)
	{
		vector<int> temp; // ���ڴ����ʱ���
		sort(candidates.begin(), candidates.end());
		// ���Ҫ���������ϲ����ظ�����Ҫȥ��candidates�е��ظ�Ԫ��
		candidates.erase(unique(candidates.begin(), candidates.end()), candidates.end());
		combinationDFS(candidates, temp, 0, target);
		return result;
	}

private:
	vector<vector<int> > result;

	void combinationDFS(vector<int> &candidates, vector<int> &temp, size_t index, int target)
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
				combinationDFS(candidates, temp, i, target - candidates[i]);
				temp.pop_back();
			}
		}
	}
};