#include "WordSearch.h"

int main()
{
	cout << "Please input the number of rows: ";
	int m;
	cin >> m;
	cout << "Please input the number of cols: ";
	int n;
	cin >> n;

	vector<vector<char> > board(m, vector<char>(n, '.'));

	cout << "Please input a 2D board: ";
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			char val;
			cin >> val;
			board[i][j] = val;
		}
	}

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}

	while(1)
	{
		cout << "Please input a word: ";
		string word;
		
		cin.clear();
		getline(cin, word); // getline属于string流，与cin.getline不同
		cin >> word;

		Solution s;

		int result = s.exist(board, word);

		if (result)
			cout << "True! " << endl;
		else
			cout << "False! " << endl;
	}

	system("pause");
	return 0;
}