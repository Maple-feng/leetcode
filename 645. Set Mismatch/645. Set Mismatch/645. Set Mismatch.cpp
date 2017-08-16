#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	vector<int> findErrorNums(vector<int>& nums) {
		vector <int> ret;
		for (int i = 0; i < nums.size(); ++i) {
			int index = abs(nums[i]) - 1;//�±���ֵһһ��Ӧ
			if (nums[index] > 0) {
				nums[index] *= -1;
			}
			else {
				ret.push_back(index + 1);//�����ֵ
			}
		}
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] > 0) {
				ret.push_back(i + 1);//�����Ӧλ��
			}
		}
		return ret;
	}
};

int main(){
	Solution sol;
	//int a[] = { 1, 2, 2, 4 };
	int a[] = { 2, 2 };
	vector<int> vec(a,a+sizeof(a)/sizeof(int));
	vector<int> ret;
	ret=sol.findErrorNums(vec);
	for (auto i : ret){
		cout << i << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}