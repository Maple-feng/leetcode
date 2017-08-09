#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
		vector<int> res(findNums.size());
		for (int i = 0; i < findNums.size(); ++i) {//����find��
			int j = 0, k = 0;
			for (; j < nums.size(); ++j) {//����num����ͬ��Ԫ�����ĸ�λ��
				if (nums[j] == findNums[i]) break;
			}
			for (k = j + 1; k < nums.size(); ++k) {//����num��һ��Ԫ��λ�õĵ�һ�����ڵ�ֵ
				if (nums[k] > nums[j]) {
					res[i] = nums[k];
					break;
				}
			}
			if (k == nums.size()) res[i] = -1;
		}
		return res;
	}
};

int main(){
	Solution sol;
	int a[] = { 4, 1, 2 };
	int b[] = { 3, 1, 4, 2 };
	vector<int> vec1(a, a + sizeof(a) / sizeof(int));
	vector<int> vec2(b, b + sizeof(b) / sizeof(int));
	vector<int> ret;
	ret=sol.nextGreaterElement(vec1, vec2);
	for (auto i = ret.begin(); i != ret.end(); ++i) {//vector forѭ��ָ�����
		int d = *i;
		cout << d << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}