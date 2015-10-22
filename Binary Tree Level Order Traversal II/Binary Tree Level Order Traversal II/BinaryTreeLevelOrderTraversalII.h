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
	vector<vector<int> > levelOrderBottom(TreeNode *root)
	{
		vector<vector<int> > result;
		orderTraversal(root, 1, result);
		reverse(result.begin(), result.end());
		return result;
	}

private:
	void orderTraversal(TreeNode *root, size_t level, vector<vector<int> > & result)
	{
		if (root == NULL) return;

		if (level > result.size())
			result.push_back(vector<int>());

		result[level - 1].push_back(root->val);

		orderTraversal(root->left, level + 1, result);
		orderTraversal(root->right, level + 1, result);
	}
};
