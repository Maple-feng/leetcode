#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> findDisappearedNumbers(vector<int>& nums) {
		vector<int> res;
		for (int i = 0; i < nums.size(); ++i) {
			int index = abs(nums[i]) - 1;
			//����������г��ֵ�����x���±���ʽ�����±�Ϊindex = |x| - 1��
			//�ɽ�����a�е�a[index]��Ϊ�������������x������������
			if (nums[index] > 0) {//��������ĳ������Ϊ������˵���������������г��ֹ�
				nums[index] *= -1;
			}
		}
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] > 0) {
				//�������飬��a[i]Ϊ�������������� i + 1��������û�г��ֹ�
				res.push_back(i + 1);
			}
		}
		return res;
	}
};

int main(){
	Solution sol;
	int a[] = { 4, 3, 2, 7, 8, 2, 3, 1 };
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	vector<int> ret;
	ret = sol.findDisappearedNumbers(vec);
	for (int i = 0; i < ret.size(); ++i){
		cout << ret[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}