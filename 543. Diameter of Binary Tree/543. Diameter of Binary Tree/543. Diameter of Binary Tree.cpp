#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int diameterOfBinaryTree(TreeNode* root) {
		if (root == NULL)
			return 0;
		int leftpart = 0, rightpart = 0, leftheight = 0, rightheight = 0;
		if (root->left){
			leftpart = diameterOfBinaryTree(root->left);
			leftheight = getMaxHeight(root->left);
		}
		if (root->right){
			rightpart = diameterOfBinaryTree(root->right);
			rightheight = getMaxHeight(root->right);
		}

		return max(max(leftpart, rightpart), leftheight + rightheight);
	}

private:
	int getMaxHeight(TreeNode * root){
		if (root == NULL)
			return 0;
		int maxHeightLeft = 0, maxHeightRight = 0;
		if (root->left)
			maxHeightLeft = getMaxHeight(root->left);
		if (root->right)
			maxHeightRight = getMaxHeight(root->right);
		return max(maxHeightLeft, maxHeightRight) + 1;
	}
};