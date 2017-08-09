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
	vector<double> averageOfLevels(TreeNode* root) {
		vector<double> res;
		double avg = 0;
		queue<TreeNode*> q;//定义一个二叉树结构的队列
		q.push(root);//根节点入队列
		while (!q.empty()) {//广度优先遍历
			int n = q.size();//根节点就是1，孩子的就是孩子数
			double sum = 0;
			for (int i = 0; i < n; ++i) {
				TreeNode* node = q.front();//指针指向第一个节点
				q.pop();//出队列
				sum += node->val;
				if (node->left != NULL)
					q.push(node->left);
				if (node->right != NULL)
					q.push(node->right);
			}
			avg = sum / n;
			res.push_back(avg);
		}
		return res;
	}
};