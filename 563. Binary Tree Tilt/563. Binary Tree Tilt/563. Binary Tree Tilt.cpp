#include <iostream>
#include <math.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int sum = 0;
	int findTilt(TreeNode* root) {
		helper(root);
		return sum;
	}
	int helper(TreeNode* root) {
		if (root == NULL)
			return 0;
		int left = helper(root->left);//左子树各节点和
		int right = helper(root->right);//右子树各节点和
		sum += abs(left - right);//求某个节点的偏移量（绝对值的和）
		return root->val + left + right;//返回左右子树各节点和
	}
};