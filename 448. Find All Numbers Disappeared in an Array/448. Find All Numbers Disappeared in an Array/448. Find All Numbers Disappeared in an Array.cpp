#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> findDisappearedNumbers(vector<int>& nums) {
		vector<int> res;
		for (int i = 0; i < nums.size(); ++i) {
			int index = abs(nums[i]) - 1;
			//计算出数组中出现的数字x的下标形式，则下表为index = |x| - 1，
			//可将数组a中得a[index]标为负数来标记数字x出现在数组中
			if (nums[index] > 0) {//若数组中某数字已为负数，说明该数字在数组中出现过
				nums[index] *= -1;
			}
		}
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] > 0) {
				//遍历数组，若a[i]为正数，表明数字 i + 1在数组中没有出现过
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