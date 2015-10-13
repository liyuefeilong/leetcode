#include <iostream>
#include <vector>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

class Solution
{
public:
	void preorder(TreeNode *root, vector<int> &k)
	{
		if (root != NULL)
		{
		k.push_back(root->val);
		preorder(root->left, k);
		preorder(root->right, k);
		}
	}

	vector<int> preorderTraversal(TreeNode *root)
	{
		vector<int> temp;
		preorder(root, temp);
		return temp;
	}
};
