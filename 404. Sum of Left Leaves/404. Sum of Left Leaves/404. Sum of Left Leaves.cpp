#include <iostream>

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int sumOfLeftLeaves(TreeNode* root) {
		if (root == NULL){//为空
			return 0;
		}

		else if (root->left && !root->left->left && !root->left->right)
			//左子树存在，写左子树的左右子树不为空
			return root->left->val + sumOfLeftLeaves(root->right);
		else{
			//其他情况---左子树的左子树不存在，或者左子树的右子树不存在，或者都不存在，
			//需要判断是否子节点为空
			return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
		}
	}
};

int main(){
	Solution sol;
	system("pause");
	return 0;
}