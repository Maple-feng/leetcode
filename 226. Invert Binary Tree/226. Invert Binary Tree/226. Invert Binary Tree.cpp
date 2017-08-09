#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};

class Solution {
public:
	TreeNode* invertTree(TreeNode* root) {
		queue<TreeNode*> tree_queue;
		if (root == NULL)
			return root;
		tree_queue.push(root);
		while (tree_queue.size() > 0){
			TreeNode * pNode = tree_queue.front();//获得队列首元素
			tree_queue.pop();//出队列
			
			//交换
			TreeNode * pLeft = pNode->left;
			pNode->left = pNode->right;
			pNode->right = pLeft;

			//遍历
			if (pNode->left)
				tree_queue.push(pNode->left);
			if (pNode->right)
				tree_queue.push(pNode->right);
		}
		return root;
	}
};

int main(){
	Solution sol;
	system("pause");
	return 0;
}