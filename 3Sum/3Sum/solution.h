#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class solution
{
public:
	vector<vector<int>> threeSum(vector<int> &num)
	{
		int size = num.size();
		vector<vector<int>> result;

		if (size < 3)
			return result;

		sort(num.begin(), num.end()); // 参数为起点和终点

		for (int index = 0; index < (size - 2); index++)
		{
			int first = num[index];
			int second = num[index + 1];

			const int target = 0;

			// 以下操作排除重复组合的情况
			if ((index != 0) && (first == num[index - 1]))
				continue;

			int start = index + 1;
			int end = size - 1;

			while (start < end)
			{
				second = num[start];
				int third = num[end];

				int Sum = first + second + third;

				if (Sum == target)
				{
					vector<int> temp;
					temp.push_back(first);
					temp.push_back(second);
					temp.push_back(third);

					result.push_back(temp);

					start++;
					end--;

					while (num[start] == num[start - 1])
						start++;
					while (num[end] == num[end + 1])
						end--;

				}

				if (Sum > target)
				{
					end--;
					while (num[end] == num[end - 1]) // 避免出现重复的整数
						end--;
				}

				if (Sum < target)
				{
					start++;
					while (num[start] == num[start + 1]) //避免出现重复的整数
						start++;
				}
			}
		}
		return result;
	}
};