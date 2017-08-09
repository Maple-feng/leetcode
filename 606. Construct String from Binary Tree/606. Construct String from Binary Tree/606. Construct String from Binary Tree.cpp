#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};

class Solution {
public:
	string tree2str(TreeNode* t) {
		if (t == NULL) return "";
		string res;
		res += to_string(t->val);
		if (t->left != NULL || t->right != NULL){
			res += "(" + tree2str(t->left) + ")";

		}
		if (t->right != NULL) res += "(" + tree2str(t->right) + ")";
		// if (t->left) res+="("+tree2str(t->left)+")";  //another logic style
		// else if (t->right) res+="()";
		// if (t->right!=NULL) res+="("+tree2str(t->right)+")";
		return res;
	}
};
TreeNode* CreatTree(){
	TreeNode *T = new TreeNode(NULL);
	char a;
	cout << "请输入节点的值" << endl;
	cin >> a;
	if (a == '#'){
		T = NULL;
	}
	else{
		T->val = a - 48;
		T->left = CreatTree();
		T->right = CreatTree();
	}
	return T;
}
//void preeord(TreeNode *T){
//	if (T){
//		cout << T->val << " ";
//		preeord(T->left);
//		preeord(T->right);
//	}
//	else{
//		cout << "null" << endl;
//	}
//}
//void midorder(TreeNode *T){
//	if (T){
//		midorder(T->left);
//		cout << T->val << " ";
//		midorder(T->right);
//	}
//}
int main()
{
	Solution sol;
	TreeNode *T = NULL;
	string ret;
	T = CreatTree();
	//preeord(T);
	ret=sol.tree2str(T);
	cout << ret << endl;
	system("pause");
	return 0;
}