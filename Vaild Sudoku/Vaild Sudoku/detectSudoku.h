#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
	bool isValidSudoku(vector<vector<char> >& board)
	{
		map<char, int> sudokuMap;
		for (int i = 0; i < 9; i++)
		{
			sudokuMap.clear();
			for (int j = 0; j < 9; j++)
			{
				sudokuMap[board[i][j]]++;
				if ((board[i][j] != '.') && (sudokuMap[board[i][j]] > 1))
					return false;
			}
		}

		for (int i = 0; i < 9; i++)
		{
			sudokuMap.clear();
			for (int j = 0; j < 9; j++)
			{
				sudokuMap[board[j][i]]++;
				if ((board[j][i] != '.') && (sudokuMap[board[j][i]] > 1))
					return false;
			}
		}

		for (int i = 0; i < 9; i += 3)
		{
			for (int j = 0; j < 9; j += 3)
			{
				sudokuMap.clear();
				for (int k = i; k < i + 3; k++)
				{
					for (int l = j; l < j + 3; l++)
					{
						sudokuMap[board[k][l]]++;
						if ((board[k][l] != '.') && (sudokuMap[board[k][l]] > 1))
							return false;
					}
				}
			}
		}
		return true;
	}
};