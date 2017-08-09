
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};

class Solution {
public:
	//对二叉搜索树中序遍历，设置一个数组，保存中序遍历的值，得到从小到大排序的nums
	//对二叉搜索树再次进行中序遍历，将遍历结点的值 加上所有大于它的值。
	//得到nums数组后，将其反转，得到降序排序的数组nums，然后每次求和后只需将nums的最后一个值pop出去
	TreeNode* convertBST(TreeNode* root) {
		vector<int> nums = getMidorderNums(root);//获得中序遍历
		reverse(nums.begin(), nums.end());//翻转中序遍历
		TreeNode* t = root;
		stack<TreeNode*> s;
		if (!t)
		{
			cout << "the tree is empty" << endl;
		}
		else
		{
			while (t || !s.empty())
			{
				while (t)//找不是NULL的值
				{
					s.push(t);
					t = t->left;
				}
				t = s.top();//取栈顶
				s.pop();//出栈
				for (int i = 0; i < nums.size() - 1; i++)
				{
					t->val += nums[i];
				}
				nums.pop_back();
				t = t->right;
			}
		}
		return root;
	}
	// 保存中序遍历的值
	vector<int> getMidorderNums(TreeNode* root)
	{
		vector<int> nums;
		if (root == NULL)
			return nums;
		vector<int> nums_l = getMidorderNums(root->left);
		nums = nums_l;
		nums.push_back(root->val);
		vector<int> nums_r = getMidorderNums(root->right);
		nums.insert(nums.end(), nums_r.begin(), nums_r.end());
		return nums;
	}
};
TreeNode* CreatTree()
{
	TreeNode *T = new TreeNode(NULL);
	char a;
	cout << "输入节点的值" << endl;
	cin >> a;
	if (a == '#')
		T = NULL;
	else
	{
		T->val = a-48;//输入字符串，就需要转化(目前只能是一个数字的，因为定义的类型是int)
		T->left = CreatTree();
		T->right = CreatTree();
	}
	return T;
}
void preorder(TreeNode *T)//先序遍历
{
	if (T)
	{
		cout << T->val << " ";
		preorder(T->left);
		preorder(T->right);
	}
}
void midorder(TreeNode *T){//中序遍历
	if (T)
	{
		midorder(T->left);
		cout << T->val << " ";
		midorder(T->right);
	}
}
//void postorder(TreeNode *T){//后序遍历
//	if (T)
//	{
//		postorder(T->left);
//		postorder(T->right);
//		cout << T->val << " ";
//	}
//}
int main(){
	Solution sol;
	TreeNode *T = NULL;
	TreeNode *ret = NULL;
	T = CreatTree();
	//ret=sol.convertBST(T);
	preorder(T);
	//cout << "先序遍历" << endl;
	//midorder(ret);
	/*cout << "中序遍历" << endl;*/
	/*postorder(T);
	cout << "后序遍历" << endl;*/
	system("pause");
	return 0;
}