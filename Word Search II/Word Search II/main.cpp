#include "WordSearchII.h"

int main()
{
	cout << "Please input the number of rows: ";
	int m;
	cin >> m;
	cout << "Please input the number of cols: ";
	int n;
	cin >> n;

	vector<vector<char> > board(m, vector<char>(n, '.'));

	cout << "Please input a 2D board: " << endl;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			char val;
			cin >> val;
			board[i][j] = val;
		}
	}
	cout << endl;

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
		cout << "Please input the number of words: ";
		int k;
		cin >> k;

		cout << "Please input several words: ";
		vector<string> word(k);
		
		for (int i = 0; i < k; ++i)
		{
			cin.clear();
			getline(cin, word[i]); // getline属于string流，与cin.getline不同
			cin >> word[i];
		}

		Solution s;

		vector<string> result = s.findWords(board, word);

		const int SIZE = result.size();

		for (int i = 0; i < SIZE; ++i)
			cout << result[i] << " ";
		cout << endl;
	}
	system("pause");
	return 0;
}