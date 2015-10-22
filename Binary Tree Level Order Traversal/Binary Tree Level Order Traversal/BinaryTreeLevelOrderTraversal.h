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
	vector<vector<int> > levelOrder(TreeNode *root)
	{
		vector<vector<int> > result;
		orderTraversal(root, 1, result);
		return result;
	}

private:
	void orderTraversal(TreeNode* root, int level, vector<vector<int> > & result)
	{
		if (root == NULL) return;

		if (level > result.size()) // 每往下一级，创建一个空的vector保存该层数据
			result.push_back(vector<int>());

		result[level - 1].push_back(root->val);

		orderTraversal(root->left, level + 1, result);
		orderTraversal(root->right, level + 1, result);
	}
};