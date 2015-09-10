#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	void turnRightImage(vector<vector<int> >& image)
	{
		int imaSize = image.size();
		// ���Խ������µ�Ԫ�������Խ�����Ԫ���������Խ��ߴ�ֱ����Ի�
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
