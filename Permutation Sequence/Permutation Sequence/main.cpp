#include "PermutationSequence.h"

int main()
{
	Solution s;

	int n = 6, k = 150;
	string result = s.PermutationSequence(n, k);

	std::cout << "n = " << n << " and the " << k << "th sequence is: " << result << std::endl;

	getchar();

	return 0;
}