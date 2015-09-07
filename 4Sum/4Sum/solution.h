#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class solution
{
public:
	vector<vector<int> > fourSum(vector<int> &num, int target)
	{
		vector<vector<int> > result;

		int Size = num.size();

		if (Size < 4)
			return result;

		// 对输入的数据进行排序
		sort(num.begin(), num.end());

		for (int first = 0; first < (Size - 3); first++)
		{		
			if ((first != 0) && (num[first] == num[first - 1]))
			{
				continue;
			}
			
			int first_num = num[first];

			for (int second = first + 1; second < (Size - 2); second++)
			{
				if ((second != first + 1) && (num[second] == num[second - 1]))
				{
					continue;
				}
				int second_num = num[second];
				int third = second + 1;
				int forth = Size - 1;

				// 对第三和第四个数进行左右夹逼
				while (third < forth)
				{
					int third_num = num[third];
					int forth_num = num[forth];
					int Sum = first_num + second_num + third_num + forth_num;

					if (Sum == target)
					{
						// 存放一维数据
						vector<int> temp;
						temp.push_back(first_num);
						temp.push_back(second_num);
						temp.push_back(third_num);
						temp.push_back(forth_num);
						// 将组合存入容器result中
						result.push_back(temp);

						third++;
						while ((third < Size - 1) && (num[third] == num[third - 1]))
						{
							third++;
						}

						forth--;
						while ((forth > second) && (num[forth] == num[forth + 1]))
						{
							forth--;
						}
					}

						if (Sum > target)
						{
							forth--;
							while ((forth > second) && (num[forth] == num[forth + 1]))
							{
								forth--;
							}
						}

						if (Sum < target)
						{
							third++;
							while ((third < Size) && (num[third] == num[third - 1]))
							{
								third++;
							}
						}
					}
				}
			}
		return result;
	}	
};