#include "SetMatrixZeroes..h"
#include <iostream>

int main()
{
	vector<vector<int> > matrix;
	vector<int> input;
	input.push_back(4);
	input.push_back(7);
	input.push_back(1);
	input.push_back(0);
	matrix.push_back(input);
	input.clear();
	input.push_back(2);
	input.push_back(3);
	input.push_back(4);
	input.push_back(5);
	matrix.push_back(input);
	input.clear();
	input.push_back(1);
	input.push_back(9);
	input.push_back(6);
	input.push_back(3);
	matrix.push_back(input);
	input.clear();
	input.push_back(6);
	input.push_back(6);
	input.push_back(3);
	input.push_back(5);
	matrix.push_back(input);
	input.clear(); 
	input.push_back(1);
	input.push_back(2);
	input.push_back(0);
	input.push_back(4);
	matrix.push_back(input);
	input.clear();
	input.push_back(7);
	input.push_back(7);
	input.push_back(8);
	input.push_back(1);
	matrix.push_back(input);
	input.clear();

	const size_t x = matrix.size();
	const size_t y = matrix[0].size();
	cout << "Input: " << endl;
	for (size_t i = 0; i < x; i++)
	{
		for (size_t j = 0; j < y; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}

	Solution s;
	s.setZerosBetter(matrix);
	cout << "Output: " << endl;
	for (size_t i = 0; i < x; i++)
	{
		for (size_t j = 0; j < y; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}

	system("pause");
}