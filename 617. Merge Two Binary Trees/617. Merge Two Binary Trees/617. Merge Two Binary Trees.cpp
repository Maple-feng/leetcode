#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
		//分情况讨论，递归（全空，t1有孩子，t2有孩子，t1和t2都有孩子）
		if (t1 == NULL&&t2 == NULL){
			return NULL;
		}
		if (t1 == NULL&&t2 != NULL){
			return t2;
		}
		if (t1 != NULL&&t2 == NULL){
			return t1;
		}
		if (t1 != NULL&&t2 != NULL){//遍历方法，先序遍历
			t1->val += t2->val;
			t1->left = mergeTrees(t1->left, t2->left);
			t1->right = mergeTrees(t1->right, t2->right);
		}
		return t1;
	}
};