#include <iostream>

using namespace std;

class Solution
{
public:
	double MedianOfTwoSortedArrays(int A[], int m, int B[], int n, int index)
	{
		;
	}

private:
};

//LeetCode, Merge Sorted Array
// ʱ�临�Ӷ�O(m+n)���ռ临�Ӷ�O(1)
class Solution {
public:
	void merge(int A[], int m, int B[], int n) {
		int ia = m - 1, ib = n - 1, icur = m + n - 1;
		while (ia >= 0 && ib >= 0) {
			A[icur--] = A[ia] >= B[ib] ? A[ia--] : B[ib--];
		}
		while (ib >= 0) {
			A[icur--] = B[ib--];
		}
	}
};