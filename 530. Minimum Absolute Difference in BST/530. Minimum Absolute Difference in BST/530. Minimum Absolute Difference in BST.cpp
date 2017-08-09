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
			// 把左边的节点push进入到栈中
			while (root){
				sk.push(root);
				root = root->left;
			}
			// 若为空则退出
			if (sk.empty()) break;
			// 从最左边的子节点开始计算起
			root = sk.top();
			sk.pop();
			suc = (!sk.empty()) ? sk.top() : nullptr;
			// 把左边节点与中间节点计算差值
			if (pre) res = min(res, abs(root->val - pre->val));
			// 计算右边节点与父节点的差值
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