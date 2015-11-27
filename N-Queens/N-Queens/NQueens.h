
#include <iostream>
#include <vector>

using namespace std;
/*
class Solution
{
public:
	vector<vector<string> > solveNQueens(int n)
	{
		this->row = vector<int>(n, 0); // 行信息
		this->col = vector<int>(n, 0); // 列信息
		dfs(0, n, result); // 深搜
		return result;
	}

private:
	vector<vector<string> > result; // 存放打印的结果
	vector<int> row; // 记录每一行哪个下标是Q
	vector<int> col; // 记录每一列是否已有Q

	void dfs(int r, int n, vector<vector<string> > & result) // 遍历第r行，棋盘总共有n行
	{
		if (r == n) // 可遍历到棋盘底部，填入本次遍历结果
		{
			vector<string> temp;
			for (int i = 0; i < n; ++i)
			{
				string s(n, '.'); // 每行先被初始化为'.'
				s[row[i]] = 'Q';  // 每行下标被标记为1的元素被标记为Q
				temp.push_back(s);	
			}
			result.push_back(temp);
		}

		int i, j;
		for (i = 0; i < n; ++i)
		{
			if (col[i] == 0)
			{
				
				for (j = 0; j < r; ++j)
					if (abs(r - j) == abs(row[j] - i))
						break;
				
				if (j == r)
				{
					col[i] = 1; // 标记第i列，已存在Q
					row[j] = i; // 第j行的第i个元素放入Q
					dfs(r + 1, n, result); // 遍历第r + 1行
					col[i] = 0;
					row[j] = 0;
				}

			}
		}
	}
};
*/

class Solution
{
public:
	int totalNQueens(int n)
	{
		this->row = vector<int>(n, 0); // 行信息
		this->col = vector<int>(n, 0); // 列信息
		result = 0;
		dfs(0, n, result); // 深搜
		return result;
	}

private:
	int result; // 存放打印的结果
	vector<int> row; // 记录每一行哪个下标是Q
	vector<int> col; // 记录每一列是否已有Q

	void dfs(int r, int n, int & result) // 遍历第r行，棋盘总共有n行
	{
		if (r == n) // 可遍历到棋盘底部，计数器加1
			++result;

		int i, j;
		for (i = 0; i < n; ++i)
		{
			if (col[i] == 0)
			{
				
				for (j = 0; j < r; ++j)
					if (abs(r - j) == abs(row[j] - i))
						break;
				
				if (j == r)
				{
					col[i] = 1; // 标记第i列，已存在Q
					row[j] = i; // 第j行的第i个元素放入Q
					dfs(r + 1, n, result); // 遍历第r + 1行
					col[i] = 0;
					row[j] = 0;
				}

			}
		}
	}
};