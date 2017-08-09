#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	//初始化支持 TreeNode（int x）这种方式，即 把x赋给val，left和right赋值NULL
};

class Solution {
public:
	int maxDepth(TreeNode* root) {
		if (NULL == root){
			return 0;
		}
		else{
			int depth_left = maxDepth(root->left);
			int depth_right = maxDepth(root->right);
			return depth_left > depth_right ? depth_left + 1 : depth_right + 1;
			//不要忘了根节点
		}
	}
};

int main(){
	system("pause");
	return 0;
}