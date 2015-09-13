#include <vector>
using namespace std;

class Solution
{
public:
	// 时间复杂度O(m * n)，空间复杂度O(m + n)
	void setZeros(vector<vector<int> >& matrix)
	{
		const size_t x = matrix.size();
		const size_t y = matrix[0].size();
		if (x == 0 || y == 0) return;
		vector<bool> rowRes(x, false);
		vector<bool> colRes(y, false);

		for (size_t i = 0; i < x; i++)
		{
			for (size_t j = 0; j < y; j++)
			{
				if (matrix[i][j] == 0)
					rowRes[i] = colRes[j] = true;
			}
		}

		// set zero
		for (size_t i = 0; i < x; i++)
		{
			if (rowRes[i])
				for (size_t k = 0; k < x; k++)
					matrix[i][k] = 0;
		}
		for (size_t j = 0; j < y; j++)
		{
			if (colRes[j])
				for (size_t k = 0; k < x; k++)
					matrix[k][j] = 0;
		}
	}

	void setZerosBetter(vector<vector<int> >& matrix)
	{
		const size_t x = matrix.size();
		const size_t y = matrix[0].size();
		bool x_key = false, y_key = false;
		if (x == 0 || y == 0) return;

		for (size_t i = 0; i < y; i++)
		{
			if (matrix[0][i] == 0)
			{
				x_key = true;
				break;
			}
		}

		for (size_t i = 0; i < x; i++)
		{
			if (matrix[i][0] == 0)
			{
				y_key = true;
				break;
			}
		}
			
		for (size_t i = 0; i < x; i++)
		{
			for (size_t j = 0; j < y; j++)
			{
				if (matrix[i][j] == 0 && i > 0 && j > 0)
				{
					matrix[i][0] = 0;
					matrix[0][j] = 0;
				}
			}
		}
		// 调整1~x行、1~y列的元素
		for (size_t i = 1; i < x; i++)
			if (matrix[i][0] == 0)
			{
				for (size_t k = 1; k < y; k++)
					matrix[i][k] = 0;
			}
		for (size_t j = 1; j < y; j++)
			if (matrix[0][j] == 0)
			{
				for (size_t k = 1; k < x; k++)
					matrix[k][j] = 0;
			}
		
		// 最后调整第一行第一列
		
		if (y_key)
			for (size_t k = 0; k < x; k++)
				matrix[k][0] = 0;
		
		if (x_key)
			for (size_t k = 0; k < y; k++)
				matrix[0][k] = 0;
	}
};