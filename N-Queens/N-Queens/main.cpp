#include "NQueens.h"

int main()
{
	int n;
	cout << "Please input the size of the chessboard (n * n): ";
	cin >> n;

	Solution s;

	vector<vector<string> > result = s.solveNQueens(n);

	for (size_t i = 0; i < result.size(); ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n; ++k)
				cout << result[i][j][k] << " ";
			cout << endl;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
