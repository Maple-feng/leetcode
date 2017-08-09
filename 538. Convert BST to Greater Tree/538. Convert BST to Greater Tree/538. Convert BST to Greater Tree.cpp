
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
	//�Զ����������������������һ�����飬�������������ֵ���õ���С���������nums
	//�Զ����������ٴν����������������������ֵ �������д�������ֵ��
	//�õ�nums����󣬽��䷴ת���õ��������������nums��Ȼ��ÿ����ͺ�ֻ�轫nums�����һ��ֵpop��ȥ
	TreeNode* convertBST(TreeNode* root) {
		vector<int> nums = getMidorderNums(root);//����������
		reverse(nums.begin(), nums.end());//��ת�������
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
				while (t)//�Ҳ���NULL��ֵ
				{
					s.push(t);
					t = t->left;
				}
				t = s.top();//ȡջ��
				s.pop();//��ջ
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
	// �������������ֵ
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
	cout << "����ڵ��ֵ" << endl;
	cin >> a;
	if (a == '#')
		T = NULL;
	else
	{
		T->val = a-48;//�����ַ���������Ҫת��(Ŀǰֻ����һ�����ֵģ���Ϊ�����������int)
		T->left = CreatTree();
		T->right = CreatTree();
	}
	return T;
}
void preorder(TreeNode *T)//�������
{
	if (T)
	{
		cout << T->val << " ";
		preorder(T->left);
		preorder(T->right);
	}
}
void midorder(TreeNode *T){//�������
	if (T)
	{
		midorder(T->left);
		cout << T->val << " ";
		midorder(T->right);
	}
}
//void postorder(TreeNode *T){//�������
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
	//cout << "�������" << endl;
	//midorder(ret);
	/*cout << "�������" << endl;*/
	/*postorder(T);
	cout << "�������" << endl;*/
	system("pause");
	return 0;
}