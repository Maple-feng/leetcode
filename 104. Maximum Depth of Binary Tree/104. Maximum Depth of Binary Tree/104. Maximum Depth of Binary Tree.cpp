#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	//��ʼ��֧�� TreeNode��int x�����ַ�ʽ���� ��x����val��left��right��ֵNULL
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
			//��Ҫ���˸��ڵ�
		}
	}
};

int main(){
	system("pause");
	return 0;
}