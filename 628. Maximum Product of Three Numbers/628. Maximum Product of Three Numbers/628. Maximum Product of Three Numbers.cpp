#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

class Solution {
public:
	int maximumProduct(vector<int>& nums) {
		int n = nums.size();
		if (n < 3){
			return -1;
		}
		//sort(nums.begin(), nums.end());
		//升序排列sort(nums.begin(), nums.end(),less<int>());
		sort(nums.begin(), nums.end(), greater<int>());//降序排列 头文件#include <functional>
		//分别讨论前三个，后三个，以及后两个跟第一个，前两个跟最后一个
		int s = nums[n - 1] * nums[n - 2] * nums[n - 3];
		s = max(s, nums[n - 1] * nums[n - 2] * nums[0]);
		s = max(s, nums[n - 1] * nums[1] * nums[0]);
		s = max(s, nums[2] * nums[1] * nums[0]);
		return s;
	}
};

int main(){
	Solution sol;
	int a[] = { 1, 2, 3, 4 };
	vector<int> vec(a, a + sizeof(a) / sizeof(int));
	cout << sol.maximumProduct(vec) << endl;
	system("pause");
	return 0;
}