#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
		sort(nums.begin(), nums.end());
        // nums.erase(unique(nums.begin(), nums.end()), nums.end()); // ȥ���ظ�Ԫ��
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
				if (j & 1) // �������������λΪ1����ʾ��λ�����ڴ˴�������
					temp.push_back(nums[index]);
				j = j >> 1; // һ�δ���λ���жϸ�λ���Ƿ�Ϊ1
				++index;    // nums���±���μ�1
			}
			result.push_back(temp);
		}
		return result;
    }
};