#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
	bool exist(vector<vector<char> > &board, string word)
	{
		const int x = board.size();
		const int y = board[0].size();
		// 用于记录走过的路径
		vector<vector<bool> > way(x, vector<bool>(y, false));
		for (int i = 0; i < x; ++i)
		{
			for (int j = 0; j < y; ++j)
			{
				if (dfs(board, way, word, 0, i, j))
					return true;
			}
		}
		return false;
	}

private:
	bool dfs(vector<vector<char> > &board, vector<vector<bool> > way, string word, int index, int x, int y)
	{		
		if (index == word.size()) // 单词完成匹配
			return true;
		if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size()) // 超出边界
			return false;
		if (word[index] != board[x][y]) // 遇到不匹配
			return false;
		if (way[x][y]) // 该格已经走过，返回false
			return false;

		// 若该格未曾走过，可进行递归
		way[x][y] = true;
		bool result = dfs(board, way, word, index + 1, x + 1, y) || // 往上扫描
					  dfs(board, way, word, index + 1, x - 1, y) || // 往下扫描
					  dfs(board, way, word, index + 1, x, y + 1) || // 往右扫描
					  dfs(board, way, word, index + 1, x, y - 1);   // 往左扫描
		way[x][y] = false;
		return result;
	}
};