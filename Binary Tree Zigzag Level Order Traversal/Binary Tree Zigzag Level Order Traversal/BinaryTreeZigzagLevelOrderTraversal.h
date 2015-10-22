#include <iostream>
#include <vector>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL){}
};

class Solution
{
public:
	vector<vector<int> > zigzagLevelOrder(TreeNode *root)
	{
		vector<vector<int> > result;
		Traverse(root, 1, result, true);
		return result;
	}

private:
	void Traverse(TreeNode *root, size_t level, vector<vector<int> > & result, bool leftToRight)
	{
		if (root == NULL) return;

		if (level > result.size())
			result.push_back(vector<int>());

		if (leftToRight)
			result[level - 1].push_back(root->val);
		else
			result[level - 1].insert(result[level - 1].begin(), root->val);

		Traverse(root->left, level + 1, result, !leftToRight);
		Traverse(root->right, level + 1, result, !leftToRight);
	}
};