#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class TriNode
{
public:
	TriNode() // 构造函数
	{
		for (int i = 0; i < 26; ++i)
			next[i] = NULL;
		end = false;
	}

	void insert(string s)
	{
		if (s.empty())
		{
			end = true;
			return;
		}

		if (next[s[0] - 'a'] == NULL)
			next[s[0] - 'a'] = new TriNode();
		next[s[0] - 'a']->insert(s.substr(1)); // 右移一位截取字符串s，继续递归插入
	}

	bool search(string key)
	{
		if (key.empty())
			return end;
		if (next[key[0] - 'a'] == NULL)
			return false;
		return next[key[0] - 'a']->search(key.substr(1));
	}

	bool startsWith(string prefix)
	{
		if (prefix.empty())
			return true;
		if (next[prefix[0] - 'a'] == NULL)
			return false;
		return next[prefix[0] - 'a']->startsWith(prefix.substr(1));
	}

private:
	TriNode *next[26];
	bool end;
};

class Tri
{
public:
	Tri(){
		root = new TriNode();
	}
	
	void insert(string s)
	{
		root->insert(s); // 调用TriNode类的方法
	}

	bool search(string k)
	{
		return root->search(k);
	}

	bool startsWith(string p)
	{
		return root->startsWith(p);
	}

private:
	TriNode *root;
};

class Solution
{
public:
	vector<string> findWords(vector<vector<char>>& board, vector<string>& words) 
	{
		const int x = board.size();
		const int y = board[0].size();
		for (auto ptr : words)
			tree.insert(ptr); // 将候选单词插入字典树中

		vector<string> result;

		for (int i = 0; i < x; ++i)
		{
			for (int j = 0; j < y; ++j)
			{
				// 用于记录走过的路径
				vector<vector<bool> > way(x, vector<bool>(y, false));
				dfs(board, way, "", i, j, result);
			}
		}
		// 以下操作排除重复出现的单词
		sort(result.begin(), result.end());
		result.erase(unique(result.begin(), result.end()), result.end());
		return result;
	}

private:
	Tri tree;

	void dfs(vector<vector<char> > &board, vector<vector<bool> > way, string word, int x, int y, vector<string> &result)
	{
		if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size()) // 超出边界
			return;
		if (way[x][y])
			return;
		word.push_back(board[x][y]);
		if (tree.search(word))
			result.push_back(word);
		
		if (tree.startsWith(word))
		{
			way[x][y] = true;
			dfs(board, way, word, x + 1, y, result);
			dfs(board, way, word, x - 1, y, result);
			dfs(board, way, word, x, y + 1, result);
			dfs(board, way, word, x, y - 1, result);
			way[x][y] = false;
		}
		word.pop_back();
	}
};