#include "BinaryTreePreorderTraversal.h"

int main()
{
	TreeNode *p = new TreeNode(5);
	p->left = new TreeNode(3);
	p->right = new TreeNode(4);
	p->left->left = new TreeNode(1);

	Solution s;
	vector<int> result = s.preorderTraversal(p);

	for (size_t i = 0; i < result.size(); ++i)
		cout << result[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}