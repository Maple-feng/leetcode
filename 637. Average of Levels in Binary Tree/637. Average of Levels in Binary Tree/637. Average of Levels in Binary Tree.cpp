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
		queue<TreeNode*> q;//����һ���������ṹ�Ķ���
		q.push(root);//���ڵ������
		while (!q.empty()) {//������ȱ���
			int n = q.size();//���ڵ����1�����ӵľ��Ǻ�����
			double sum = 0;
			for (int i = 0; i < n; ++i) {
				TreeNode* node = q.front();//ָ��ָ���һ���ڵ�
				q.pop();//������
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