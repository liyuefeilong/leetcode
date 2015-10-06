#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool isValidSudoku(vector<vector<char> > &board, int x, int y) {

		// 同一列中是否出现相同的数
		for (int row = 0; row < 9; ++row) 
			if ((x != row) && (board[row][y] == board[x][y])) 
				return false;

		// 同一行中是否出现相同的数
		for (int col = 0; col < 9; ++col)
			if ((y != col) && (board[x][col] == board[x][y]))
				return false;

		// 3 * 3方格中是否出现相同的数
		for (int row = (x / 3) * 3; row < (x / 3 + 1) * 3; ++row) 
			for (int col = (y / 3) * 3; col < (y / 3 + 1) * 3; ++col) 
				if ((x != row) && (y != col) && (board[row][col] == board[x][y])) 
					return false;

		// 满足条件，则返回true
		return true;
	}

	bool internalSolveSudoku(vector<vector<char> > &board) {
		for (int row = 0; row < 9; ++row) 
		{
			for (int col = 0; col < 9; ++col) 
			{
				if (board[row][col] == '.') 
				{
					for (int i = 1; i <= 9; ++i)
					{
						board[row][col] = '0' + i;

						if (isValidSudoku(board, row, col)) 
							if (internalSolveSudoku(board)) 
								return true;
						// 若当前格子的数不正确，将其重置为'.'
						// 然后进行下一个尝试
						board[row][col] = '.';
					}
					// 0~9均重复，输出false
					return false;
				}
			}
		}
		return true;
	}

	void solveSudoku(vector<vector<char> > &board) 
	{
		internalSolveSudoku(board);
	}
};
