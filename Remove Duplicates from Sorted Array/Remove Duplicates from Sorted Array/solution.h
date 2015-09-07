#include <iostream>
using namespace std;

class Solution {
public:
	int removeDuplicates(int A[], int n) 
	{
		if (n < 2) return 0; // 数组元素个数小于2时无需执行算法
		int num = 0;
		for (int i = 1; i < n; i++) {
			if (A[num] != A[i])
				A[++num] = A[i];
		}
		return num + 1;
	}
};
