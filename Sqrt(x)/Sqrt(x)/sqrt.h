#include <iostream>

using namespace std;

class Solution
{
public:
	int sqrt(int x)
	{
		if (x == 0 || x == 1) return x;
		int min = 1, max = x / 2; // �����ڴ�������
		// ���ֲ���
		int mid, result;
		while (min <= max)
		{
			mid = min + (max - min) / 2;
			if (x / mid > mid)
			{				
				// ����ƽ����С�ڵ���x�����ÿ�����ڴ˴����¸���ֵ
				result = mid; 
				min = mid + 1;
			}
			else if (x / mid < mid) max = mid - 1;
			else return mid;
		}
		return result;
	}
};