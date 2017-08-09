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
		int left = helper(root->left);//���������ڵ��
		int right = helper(root->right);//���������ڵ��
		sum += abs(left - right);//��ĳ���ڵ��ƫ����������ֵ�ĺͣ�
		return root->val + left + right;//���������������ڵ��
	}
};