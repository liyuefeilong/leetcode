#include "detectSudoku.h"

int main()
{
	vector<vector<char> > board;
	vector<char> vec;
	vec.push_back('5');
	vec.push_back('3');
	vec.push_back('4');
	vec.push_back('6');
	vec.push_back('7');
	vec.push_back('8');
	vec.push_back('9');
	vec.push_back('1');
	vec.push_back('2');
	board.push_back(vec);
	vec.clear();
	vec.push_back('6');
	vec.push_back('7');
	vec.push_back('2'); 
	vec.push_back('1'); 
	vec.push_back('9'); 
	vec.push_back('5');
	vec.push_back('3');
	vec.push_back('4');
	vec.push_back('8');
	board.push_back(vec);
	vec.clear();
	vec.push_back('1');
	vec.push_back('9');
	vec.push_back('8');
	vec.push_back('3');
	vec.push_back('4'); 
	vec.push_back('2');
	vec.push_back('5');
	vec.push_back('6');
	vec.push_back('7');
	board.push_back(vec);
	vec.clear();
	vec.push_back('8');
	vec.push_back('5');
	vec.push_back('9');
	vec.push_back('7');
	vec.push_back('6');
	vec.push_back('1'); 
	vec.push_back('4'); 
	vec.push_back('2');
	vec.push_back('3');
	board.push_back(vec);
	vec.clear();
	vec.push_back('4');
	vec.push_back('2');
	vec.push_back('6');
	vec.push_back('8');
	vec.push_back('5');
	vec.push_back('3');
	vec.push_back('7'); 
	vec.push_back('9'); 
	vec.push_back('1');
	board.push_back(vec);
	vec.clear();
	vec.push_back('7');
	vec.push_back('1');
	vec.push_back('3');
	vec.push_back('9');
	vec.push_back('2');
	vec.push_back('4');
	vec.push_back('8'); 
	vec.push_back('5'); 
	vec.push_back('6');
	board.push_back(vec);
	vec.clear();
	vec.push_back('9');
	vec.push_back('6');
	vec.push_back('1');
	vec.push_back('5');
	vec.push_back('3');
	vec.push_back('7');
	vec.push_back('2');
	vec.push_back('8');
	vec.push_back('4');
	board.push_back(vec);
	vec.clear();
	vec.push_back('2');
	vec.push_back('8');
	vec.push_back('7'); 
	vec.push_back('4'); 
	vec.push_back('1');
	vec.push_back('9');
	vec.push_back('6'); 
	vec.push_back('3');
	vec.push_back('5');
	board.push_back(vec);
	vec.clear();
	vec.push_back('3');
	vec.push_back('4');
	vec.push_back('5');
	vec.push_back('2');
	vec.push_back('8');
	vec.push_back('6');
	vec.push_back('1');
	vec.push_back('7');
	vec.push_back('9');
	board.push_back(vec);
	vec.clear();

	Solution s;
	cout << "The sudoku is: " << endl;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
		
	if (s.isValidSudoku(board))
		cout << "\nThe Sudoku is valid! " << endl;
	else
		cout << "\nThe Sudoku is not valid! " << endl;
	
	system("pause");

	return 0;
}