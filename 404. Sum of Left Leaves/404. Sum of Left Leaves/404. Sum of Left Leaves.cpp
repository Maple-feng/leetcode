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
		if (root == NULL){//Ϊ��
			return 0;
		}

		else if (root->left && !root->left->left && !root->left->right)
			//���������ڣ�д������������������Ϊ��
			return root->left->val + sumOfLeftLeaves(root->right);
		else{
			//�������---�������������������ڣ������������������������ڣ����߶������ڣ�
			//��Ҫ�ж��Ƿ��ӽڵ�Ϊ��
			return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
		}
	}
};

int main(){
	Solution sol;
	system("pause");
	return 0;
}