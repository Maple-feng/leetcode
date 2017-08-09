#include <iostream>
#include <array>
#include <vector>
using namespace std;

class Solution {
public:
	int arrayPairSum(vector<int>& nums) {
		vector<int>::size_type nsize = nums.size();//计算数组大小
		if (nsize == 0){//如果大小为0，直接返回0
			return 0;
		}
		sort(nums.begin(), nums.end());//排序
		int sum = 0;
		for (int i = 0; i < nsize; i += 2){//计算两两一组中，数小的那个，和即为结果
			sum += nums[i];
		}
		return sum;
	}
};

int main()
{
	int a[4] = { 1, 6, 5, 2 };
	vector<int> arr(a, a + 4);
	Solution sol;
	int ret = sol.arrayPairSum(arr);
	cout << ret << endl;
	system("pause");
	return 0;
}