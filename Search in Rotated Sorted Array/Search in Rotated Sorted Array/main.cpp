#include "Solution.h"
#include <algorithm>

int main()
{
	int a[100];
	int num = 100;
	for (int i = 0; i < 100; i++)
		a[i] = rand() % 25 - 30;

	sort(a, a + 100);
}