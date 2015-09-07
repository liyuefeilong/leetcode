#include <iostream>
using namespace std;

class Solution {
public:
	int removeDuplicates(int A[], int n) 
	{
		if (n < 2) return 0; // ����Ԫ�ظ���С��2ʱ����ִ���㷨
		int num = 0;
		for (int i = 1; i < n; i++) {
			if (A[num] != A[i])
				A[++num] = A[i];
		}
		return num + 1;
	}
};
