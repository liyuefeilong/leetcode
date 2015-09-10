#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	void turnRightImage(vector<vector<int> >& image)
	{
		int imaSize = image.size();
		// 主对角线以下的元素与主对角线上元素沿着主对角线垂直方向对换
		for (int i = 1; i < imaSize; i++)
		{
			for (int j = i - 1; j >= 0; j--)
				swap(image[i][j], image[j][i]);
		}
		for (int k = 0; k < imaSize / 2; k++)
		{
			for (int l = 0; l < imaSize; l++)
				swap(image[l][k], image[l][imaSize - k - 1]);
		}
	}
};
