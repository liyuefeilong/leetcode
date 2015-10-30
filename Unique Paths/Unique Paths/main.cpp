#include "UniquePaths.h"

int main()
{
	int m, n;
	cout << "Input m: ";
	cin >> m;
	cout << "Input n: ";
	cin >> n;

	Solution s;
	int result = s.uniquePaths(m, n);

	cout << "How many possible unique paths are there? " << result << endl;

	int result2 = s.uniquePaths2(m, n);

	cout << "How many possible unique paths are there? " << result2 << endl;

	system("pause");
	return 0;
}