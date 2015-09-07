#include <iostream>
#include <vector>

class Solution
{
public:
	int RemoveDuplicatesII(int A[], int n, int dupNum) // dupNum为允许重复的次数
	{
		if (n < (dupNum + 1)) return n; // 数组元素过少，无需删除重复数据

		int num = dupNum; // 存放删除后数组的元素个数，至少有2个元素
		for (int i = dupNum; i < n; i++)
		{
			if (A[i] != A[num - dupNum])
			{
				A[num++] = A[i]; // 使用不重复元素替换第num个元素的位置
			}
		}
		// 执行算法后，数组A的前num个元素是所求的一个集合
		return num;
	}
};
