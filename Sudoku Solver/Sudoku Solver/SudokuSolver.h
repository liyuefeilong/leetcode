#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	bool isValidSudoku(vector<vector<char> >& board)
	{
		for (int i = 0; i < 9; ++i)
		{
			for (int j = 0; j < 9; ++j)
			{
				if (board[i][j] == '.')
				{
					for (int k = 0; k < 9; ++k)
					{
						board[i][j] = '1' + k;
						if ((check(board, i, j)) && (isValidSudoku(board)))
							return true;
						board[i][j] = '.';
					}
					return false;
				}
			}
		}
	}
private:
	bool check(vector<vector<char> >& board, int x, int y)
	{
		for (int i = 0; i < 9; i++)
		{
			if ((board[x][i] == board[x][y]) && (i != y))
				return false;
		}
		for (int j = 0; j < 9; j++)
		{
			if ((board[j][y] == board[x][y]) && (j != x))
				return false;
		}
		for (int k = x / 3; k < x / 3 + 3; k++)
		{
			for (int l = y / 3; l < y / 3 + 3; l++)
			{
				if ((board[k][l] == board[x][y]) && ((k != x) || (l != y)))
					return false;
			}
		}
		return true;
	}
};
