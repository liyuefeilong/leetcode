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
		// ���ڼ�¼�߹���·��
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
		if (index == word.size()) // �������ƥ��
			return true;
		if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size()) // �����߽�
			return false;
		if (word[index] != board[x][y]) // ������ƥ��
			return false;
		if (way[x][y]) // �ø��Ѿ��߹�������false
			return false;

		// ���ø�δ���߹����ɽ��еݹ�
		way[x][y] = true;
		bool result = dfs(board, way, word, index + 1, x + 1, y) || // ����ɨ��
					  dfs(board, way, word, index + 1, x - 1, y) || // ����ɨ��
					  dfs(board, way, word, index + 1, x, y + 1) || // ����ɨ��
					  dfs(board, way, word, index + 1, x, y - 1);   // ����ɨ��
		way[x][y] = false;
		return result;
	}
};