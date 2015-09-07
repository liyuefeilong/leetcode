#include <iostream>

using namespace std;

class Solution
{
public:
	int RemoveElement(int A[], int n, int Elem)
	{
		int num = 0;
		for (int i = 0; i < n; i++)
		{
			if (A[i] != Elem)
				A[num++] = A[i];  // Ö§³Öin placeÔËËã
		}
		return num;
	}
};
