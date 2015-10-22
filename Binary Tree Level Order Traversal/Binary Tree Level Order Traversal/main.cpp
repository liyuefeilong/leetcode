#include "BinaryTreeLevelOrderTraversal.h"

int main()
{
	TreeNode *p = new TreeNode(1);
	p->left = new TreeNode(2);
	p->right = new TreeNode(3);
	p->right->left = new TreeNode(4);
	p->right->right = new TreeNode(5);

	Solution s;
	vector<vector<int> > result = s.levelOrder(p);

	for (size_t i = 0; i < result.size(); ++i)
	{
		cout << "[ ";
		for (size_t j = 0; j < result[i].size(); ++j)
			cout << result[i][j] << " ";
		cout << "]" << endl;
	}

	system("pause");
	return 0;
}