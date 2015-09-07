#include <iostream>

using namespace std;

class Solution
{
public:
	int SearchRotatedSortedArray(int A[], int n, int target)
	{
		int start = 0;
		int end = n;
		int middle = start + (end - start) / 2;
		while (start != end)
		{
			if (target == A[middle])
				return middle;
			if (A[start] < A[middle])
			{
				if ((target < A[middle]) && (A[start] <= target))
					end = middle;
				else
					start = middle + 1;
			}
			else
			{
				if ((target > A[middle]) && (target <= A[end - 1]))
					start = middle + 1;
				else
					end = middle;
			}
		}
		return -1; // 在数组中找不到目标元素时返回-1
	}
};
