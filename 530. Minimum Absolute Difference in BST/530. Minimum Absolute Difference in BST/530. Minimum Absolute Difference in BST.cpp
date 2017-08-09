#include <iostream>
#include <stack>
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
	int getMinimumDifference(TreeNode* root) {
		int res = INT_MAX;
		if (root == NULL)  return res;
		stack<TreeNode*> sk;
		TreeNode* pre = NULL;
		TreeNode* suc = NULL;
		while (true){
			// ����ߵĽڵ�push���뵽ջ��
			while (root){
				sk.push(root);
				root = root->left;
			}
			// ��Ϊ�����˳�
			if (sk.empty()) break;
			// ������ߵ��ӽڵ㿪ʼ������
			root = sk.top();
			sk.pop();
			suc = (!sk.empty()) ? sk.top() : nullptr;
			// ����߽ڵ����м�ڵ�����ֵ
			if (pre) res = min(res, abs(root->val - pre->val));
			// �����ұ߽ڵ��븸�ڵ�Ĳ�ֵ
			if (suc) res = min(res, abs(root->val - suc->val));
			pre = root;
			root = root->right;
		}
		return res;
	}
};

int main(){
	Solution sol;
	system("pause");
	return 0;
}