#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
	vector<vector<int> > combinationSum2(vector<int> &candidates, int target)
	{
		vector<int> temp; // ���ڴ����ʱ���
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
				// ����candidates��Ԫ�ؿ������ظ������²������������ж�����ѭ
				// ���Ƿ�ѡ����candidates[i]����������ѡ����һ��candidatesԪ��
				// ֱ���±굽���prev���Ԫ�أ�ѡ���Ԫ�ؽ�����һ�ֵݹ�
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
