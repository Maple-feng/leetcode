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

class Solution
{
public:
	vector<vector<int> > levelOrderBottom(TreeNode *root)
	{
		vector<vector<int> > vvi;

		if (NULL == root)
			return vvi;

		queue<TreeNode *> q;
		q.push(root);
		while (!q.empty())
		{
			vector<int> vi;
			for (int i = 0, n = q.size(); i < n; ++i)
			{
				TreeNode *temp = q.front();
				q.pop();
				if (temp->left != NULL)
					q.push(temp->left);
				if (temp->right != NULL)
					q.push(temp->right);
				vi.push_back(temp->val);
			}
			vvi.push_back(vi);
		}
		reverse(vvi.begin(), vvi.end());
		return vvi;
	}
};