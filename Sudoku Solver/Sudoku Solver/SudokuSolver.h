#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool isValidSudoku(vector<vector<char> > &board, int x, int y) {

		// ͬһ�����Ƿ������ͬ����
		for (int row = 0; row < 9; ++row) 
			if ((x != row) && (board[row][y] == board[x][y])) 
				return false;

		// ͬһ�����Ƿ������ͬ����
		for (int col = 0; col < 9; ++col)
			if ((y != col) && (board[x][col] == board[x][y]))
				return false;

		// 3 * 3�������Ƿ������ͬ����
		for (int row = (x / 3) * 3; row < (x / 3 + 1) * 3; ++row) 
			for (int col = (y / 3) * 3; col < (y / 3 + 1) * 3; ++col) 
				if ((x != row) && (y != col) && (board[row][col] == board[x][y])) 
					return false;

		// �����������򷵻�true
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
						// ����ǰ���ӵ�������ȷ����������Ϊ'.'
						// Ȼ�������һ������
						board[row][col] = '.';
					}
					// 0~9���ظ������false
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
