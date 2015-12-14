#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
	vector<int> spiralOrder(vector<vector<int> >& matrix)
	{
		vector<int> result;
		if (matrix.empty())
			return result;
		int beginX = 0;
		int endX = matrix[0].size() - 1;
        int beginY = 0;
		int endY = matrix.size() - 1;

		while (true)
		{
			// 从左到右
			for (int i = beginX; i <= endX; ++i)
				result.push_back(matrix[beginY][i]);
			if (++beginY > endY)
				break;
			// 从上到下
			for (int i = beginY; i <= endY; ++i)
				result.push_back(matrix[i][endX]);
			if (--endX < beginX)
				break;
			// 从右到左
			for (int i = endX; i >= beginX; --i)
				result.push_back(matrix[endY][i]);
			if (--endY < beginY)
				break;
			// 从下到上
			for (int i = endY; i >= beginY; --i)
				result.push_back(matrix[i][beginX]);
			if (++beginX > endX)
				break;
		}
	}
};