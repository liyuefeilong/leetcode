#include <iostream>
#include <vector>

class Solution
{
public:
	int RemoveDuplicatesII(int A[], int n, int dupNum) // dupNumΪ�����ظ��Ĵ���
	{
		if (n < (dupNum + 1)) return n; // ����Ԫ�ع��٣�����ɾ���ظ�����

		int num = dupNum; // ���ɾ���������Ԫ�ظ�����������2��Ԫ��
		for (int i = dupNum; i < n; i++)
		{
			if (A[i] != A[num - dupNum])
			{
				A[num++] = A[i]; // ʹ�ò��ظ�Ԫ���滻��num��Ԫ�ص�λ��
			}
		}
		// ִ���㷨������A��ǰnum��Ԫ���������һ������
		return num;
	}
};
