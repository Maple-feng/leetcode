#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
     int val;
     TreeNode *left;
    TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	int pathSum(TreeNode* root, int sum) {
		int res = 0;
		vector<TreeNode*> vec;
		findPath(root, sum, 0, res, vec);

		return res;
	}

	void findPath(TreeNode* node, int sum, int curSum, int &res, vector<TreeNode*> &vec) {
		if (!node) {
			return;
		}
		curSum += node->val;
		vec.push_back(node);

		if (sum == curSum) res++;
		int tmp = curSum;
		for (int i = 0; i < vec.size() - 1; ++i) {
			tmp -= vec[i]->val;
			if (tmp == sum) {
				res++;
			}
		}

		findPath(node->left, sum, curSum, res, vec);
		findPath(node->right, sum, curSum, res, vec);

		vec.pop_back();
	}
};